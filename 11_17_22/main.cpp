#include <iostream>
#include "searchSortAlgorithms.h"

using namespace std;


int main() {
    // Write your main here
    int list[10] = {0};
    cout << "Please enter 10 integers to use.: ";
    for (int i = 0; i < 10; i++)
      cin >> list[i];
    insertionSort(list, 10);
    cout << "The numbers organised are as followed.\n";
    for (int i = 0; i < 10; i++)
      cout << list[i] << " ";
    cout << endl;
    return 0;
}
