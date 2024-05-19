#ifndef CsvDecode_H
#define CsvDecode_H

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include "CsvDecode.h"

class CsvDecode
{
private:
    std::string filename;
    std::vector<std::vector<std::string>> data;
    int rows = 0, cols = 0;

public:
    CsvDecode(std::string filename)
    {
        this->filename = filename;
    }
    
    CsvDecode(std::ifstream &file)
    {
        std::string line;
        while (std::getline(file, line))
        {
            std::vector<std::string> row;
            std::stringstream ss(line);
            std::string cell;
            while (std::getline(ss, cell, ',')) // default separator is comma
            {
                row.push_back(cell);
            }
            data.push_back(row);
        }
        rows = data.size();
        cols = data[0].size();
    }

    int decode(char separator)
    {
        std::ifstream file(this->filename);
        if (!file.is_open())
        {
            return 1;
        }
        std::string line;
        while (std::getline(file, line))
        {
            std::vector<std::string> row;
            std::stringstream ss(line);
            std::string cell;
            while (std::getline(ss, cell, separator))
            {
                row.push_back(cell);
            }
            data.push_back(row);
        }
        file.close();
        rows = data.size();
        cols = data[0].size();
        return 0;
    }

    void sort(int col, bool ascending = true)
    {
        float a = 0, b = 0;
        for (int i = rows; i > 0; i--)
        {
            for (int j = 0; j < i - 1; j++)
            {
                a = std::stof(data[j][col]);
                b = std::stof(data[j + 1][col]);
                if (ascending ? a > b : a < b)
                {
                    const auto temp = data[j];
                    data[j] = data[j + 1];
                    data[j + 1] = temp;
                }
            }
        }
    }

    std::vector<std::vector<std::string>> get_data()
    {
        return data;
    }

    void show_data(std::string separator)
    {
        for (const std::vector<std::string> &row : data)
        {
            for (const std::string &cell : row)
            {
                std::cout << cell << separator;
            }
            std::cout << std::endl;
        }
    }

    int get_rows()
    {
        return rows;
    }

    int get_cols()
    {
        return cols;
    }
};
#endif