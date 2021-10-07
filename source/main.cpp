#include "Series.h"
#include "DataFrame.h"

#include <iostream>

using namespace std;
using namespace df::series;

int main()
{
    int arr[1] = { 2 };
    Series<int> mySeries(arr);
    cout << mySeries.dtype() << endl;
    cout << mySeries.size() << endl;

    return 0;
}