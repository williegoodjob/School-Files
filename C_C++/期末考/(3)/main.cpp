#include <iostream>
#include <iomanip>
#include <vector>
#include <sstream>

void bubbleSort(std::vector<int> &arr)
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
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
        {
            break;
        }
    }
}

double median(std::vector<int> &numbers)
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

std::string formatNumber(double number) {
    std::ostringstream out;
    out << std::fixed;
    for (int precision = 1; precision <= 10; ++precision) {
        out.str("");
        out.clear();
        out << std::setprecision(precision) << number;
        double rounded;
        std::istringstream(out.str()) >> rounded;
        if (rounded == number) {
            break;
        }
    }
    return out.str();
}

int main()
{
    std::vector<int> numbers;
    int num;
    double sum = 0.0;
    char c;
    std::cout << "<<< �гs���J���Ӽƭ�(��ƶ��Ť@��) >>>" << std::endl
              << "��w�ƧǪk(�Ƨǫe)�G";
    while (std::cin >> num)
    {
        numbers.push_back(num);
        std::cin.get(c);
        if (c == '\n')
        {
            break;
        }
    }
    bubbleSort(numbers);
    std::cout << std::endl
              << "== ��w�ƧǪk(�Ѥp��j�Ƨ�)==" << std::endl
              << "�p�⵲�G 1�G �Ƨǫᬰ ";
    for (int i = 0; i < numbers.size(); i++)
    {
        std::cout << numbers[i] << " ";
        sum += numbers[i];
    }
    std::cout << std::endl
              << std::endl
              << "== ��w�ƧǪk(�Ѥj��p�Ƨ�)==" << std::endl
              << "�p�⵲�G 2�G �Ƨǫᬰ ";
    for (int i = numbers.size() - 1; i >= 0; i--)
    {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl
              << std::endl
              << "== ��w�Ƨ�(�̤p��)==" << std::endl
              << "�p�⵲�G 3�G �̤p�Ȭ� " << numbers[0];
    std::cout << std::endl
              << std::endl
              << "== ��w�ƧǪk(�̤j��)==" << std::endl
              << "�p�⵲�G 4�G �̤j�Ȭ� " << numbers[numbers.size() - 1];
    double average = sum / numbers.size();
    std::cout << std::endl
              << std::endl
              << "== ��w�ƧǪk(������)==" << std::endl
              << "�p�⵲�G 5�G �����Ȭ� " << formatNumber(average);
    std::cout << std::endl
              << std::endl
              << "== ��w�ƧǪk(�����)==" << std::endl
              << "�p�⵲�G 6�G ����Ƭ� " << median(numbers);
    return 0;
}
