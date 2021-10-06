/************************************************************************************************
* Source file for the decision tree class
* @file DecisionTree.cpp
* @author Erik Sanders @ecSanders
* @version 1.1 10/5/21
***********************************************************************************************/
#include "DataFrame.h"
#include "Series.h"

// TODO This should probably be a header file

namespace DecisionTree
{
    /************************************************************************************************
    * TODO Add class description and other documentation
    ***********************************************************************************************/
    template <class T>
    class DecisionTree
    {
    private:
        /* data */
    public:
        DecisionTree(/* args */);
        ~DecisionTree();

        struct Node
        {
            Series::Series<T> data;
            struct Node *Right;
            struct Node *Left;

            Node(Series::Series<T> data)
            {
                this->data = data;

                Right = NULL;
                Left = NULL;
            }
        };
    };

    template <class T>
    DecisionTree<T>::DecisionTree(/* args */)
    {
    }

    template <class T>
    DecisionTree<T>::~DecisionTree()
    {
    }
}
