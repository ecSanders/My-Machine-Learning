/************************************************************************************************
* Header file for the Decision Tree class 
* @file DecisionTree.h
* @author Erik Sanders @ecSanders
* @version 1.1 10/5/21
***********************************************************************************************/
#include "Series.h"
#include "DataFrame.h"

namespace df
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
                Series<T> data;
                struct Node * Right;
                struct Node * Left;

                Node(Series<T> data)
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
