#include "Series.h"
#include "DataFrame.h"
#include "DecisionTree.h"

#include <iostream>

using namespace std;
using namespace df;

int main()
{
    int arr[1] = { 2 };

    Series<int> mySeries(arr);

    cout << mySeries.dtype() << endl;
    cout << mySeries.size() << endl;

    return 0;
}