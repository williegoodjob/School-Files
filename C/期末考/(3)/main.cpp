#include <iostream>
#include <iomanip>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

vector<string> digits = {"零", "一", "二", "三", "四", "五", "六", "七", "八", "九"};
vector<string> units = {"", "十", "百", "千"};
vector<string> bigUnits = {"", "萬", "億", "兆", "京"};

void bubbleSort(vector<int> &arr)
{
    int n = arr.size();
    bool swapped;
    for (int i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
        {
            break;
        }
    }
}

double median(vector<int> &numbers)
{
    size_t size = numbers.size();

    if (size == 0)
    {
        return 0;
    }

    if (size % 2 == 0)
    {
        return (numbers[size / 2 - 1] + numbers[size / 2]) / 2.0;
    }
    else
    {
        return numbers[size / 2];
    }
}

string formatNumber(double number)
{
    ostringstream out;
    out << fixed;
    for (int precision = 1; precision <= 10; ++precision)
    {
        out.str("");
        out.clear();
        out << setprecision(precision) << number;
        double rounded;
        istringstream(out.str()) >> rounded;
        if (rounded == number)
        {
            break;
        }
    }
    return out.str();
}

string convertToChinese(int num)
{
    if (num == 0)
    {
        return digits[0];
    }

    string result;
    int count = 0;

    while (num > 0)
    {
        int temp = num % 10;
        if (temp > 0 || count % 4 == 0)
        {
            result = digits[temp] + units[count % 4] + result;
        }

        if (count % 4 == 0 && num >= 10)
        {
            result = bigUnits[count / 4] + result;
        }

        num /= 10;
        count++;
    }

    return result;
}

int main()
{
    int number = 5;
    while (1)
    {
        vector<int> numbers;
        int num;
        double sum = 0.0;
        char c;
        string chNum = convertToChinese(number);
        cout << "<<< 請連續輸入" << chNum << "個數值(資料間空一格) >>>" << endl
             << "氣泡排序法(排序前)：";

        while (cin >> num)
        {
            numbers.push_back(num);
            cin.get(c);
            if (c == '\n')
            {
                break;
            }
        }

        bubbleSort(numbers);

        cout << endl
             << "== 氣泡排序法(由小到大排序)==" << endl
             << "計算結果 1： 排序後為 ";

        for (int i = 0; i < numbers.size(); i++)
        {
            cout << numbers[i] << " ";
            sum += numbers[i];
        }

        cout << endl
             << endl
             << "== 氣泡排序法(由大到小排序)==" << endl
             << "計算結果 2： 排序後為 ";

        for (int i = numbers.size() - 1; i >= 0; i--)
        {
            cout << numbers[i] << " ";
        }

        double average = sum / numbers.size();

        cout << endl
             << endl
             << "== 氣泡排序(最小值)==" << endl
             << "計算結果 3： 最小值為 " << numbers[0]
             << endl
             << endl
             << "== 氣泡排序法(最大值)==" << endl
             << "計算結果 4： 最大值為 " << numbers[numbers.size() - 1]
             << endl
             << endl
             << "== 氣泡排序法(平均值)==" << endl
             << "計算結果 5： 平均值為 " << formatNumber(average)
             << endl
             << endl
             << "== 氣泡排序法(中位數)==" << endl
             << "計算結果 6： 中位數為 " << median(numbers)
             << endl
             << endl;
        system("PAUSE");
        number++;
    }
    return 0;
}