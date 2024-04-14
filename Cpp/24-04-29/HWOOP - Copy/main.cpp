#include "CsvDecode.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    CsvDecode csv("work.csv");
    if (csv.decode(',')) {
        cout << "Error reading file" << endl;
        return 1;
    }
    vector <vector <string>> data = csv.get_data();
    csv.show_data(",");
    cout << endl;
    csv.sort(2, 1);
    csv.show_data(",");
    return 0;
}
