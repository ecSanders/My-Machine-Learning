#include "DataFrame.h"

class DecisionTree: private DataFrame
{
private:
    /* data */
public:
    DecisionTree(/* args */);
    ~DecisionTree();


    struct Node
    {
        Series data;
        struct Node* Right;
        struct Node* Left;


        Node(Series data){
             this->data = data;

             Right = NULL;
             Left = NULL;
        }
    };
    
    
};

DecisionTree::DecisionTree(/* args */)
{
}

DecisionTree::~DecisionTree()
{
}
