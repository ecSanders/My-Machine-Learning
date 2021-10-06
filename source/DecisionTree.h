/************************************************************************************************
* Source file for the decision tree class
* @file DecisionTree.cpp
* @author Erik Sanders @ecSanders
* @version 1.1 10/5/21
***********************************************************************************************/
#ifndef DECISIONTREE
#define DECISIONTREE
// TODO This should probably be a header file

namespace DecisionTree
{
    /************************************************************************************************
    * A DecisionTree Class that uses DataFrame and Series Objects to make predictions
    *
    * @param 
    ***********************************************************************************************/
    template <class T>
    class DecisionTree
    {
    // Constructors

        // default
        DecisionTree();

        // non-default
        DecisionTree(DataFrame::DataFrame<T> data);

        // copy
        DecisionTree(DecisionTree &rhs);

        // Destructor
        ~DataFrame();

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
#endif
