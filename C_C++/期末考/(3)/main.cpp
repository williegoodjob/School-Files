#include <iostream>
#include <iomanip>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

vector<string> digits = {"�s", "�@", "�G", "�T", "�|", "��", "��", "�C", "�K", "�E"};
vector<string> units = {"", "��", "��", "�d"};
vector<string> bigUnits = {"", "�U", "��", "��", "��"};

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
        cout << "<<< �гs���J" << chNum << "�Ӽƭ�(��ƶ��Ť@��) >>>" << endl
             << "��w�ƧǪk(�Ƨǫe)�G";

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
             << "== ��w�ƧǪk(�Ѥp��j�Ƨ�)==" << endl
             << "�p�⵲�G 1�G �Ƨǫᬰ ";

        for (int i = 0; i < numbers.size(); i++)
        {
            cout << numbers[i] << " ";
            sum += numbers[i];
        }

        cout << endl
             << endl
             << "== ��w�ƧǪk(�Ѥj��p�Ƨ�)==" << endl
             << "�p�⵲�G 2�G �Ƨǫᬰ ";

        for (int i = numbers.size() - 1; i >= 0; i--)
        {
            cout << numbers[i] << " ";
        }

        double average = sum / numbers.size();

        cout << endl
             << endl
             << "== ��w�Ƨ�(�̤p��)==" << endl
             << "�p�⵲�G 3�G �̤p�Ȭ� " << numbers[0]
             << endl
             << endl
             << "== ��w�ƧǪk(�̤j��)==" << endl
             << "�p�⵲�G 4�G �̤j�Ȭ� " << numbers[numbers.size() - 1]
             << endl
             << endl
             << "== ��w�ƧǪk(������)==" << endl
             << "�p�⵲�G 5�G �����Ȭ� " << formatNumber(average)
             << endl
             << endl
             << "== ��w�ƧǪk(�����)==" << endl
             << "�p�⵲�G 6�G ����Ƭ� " << median(numbers)
             << endl
             << endl;
        system("PAUSE");
        number++;
    }
    return 0;
}