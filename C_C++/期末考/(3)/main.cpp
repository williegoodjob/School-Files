#include <iostream>
#include <iomanip>
#include <vector>
#include <sstream>

using namespace std;

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

int main()
{
    vector<int> numbers;
    int num;
    double sum = 0.0;
    char c;

    cout << "<<< 請連續輸入五個數值(資料間空一格) >>>" << endl
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
    return 0;
}
