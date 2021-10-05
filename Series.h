#include <vector>


// This is a terrible class.... 
// just here so I don't have to stare 
// at the 'No Series object' error
class Series
{

public:
    Series();

    Series(std::vector<int> data);
    ~Series();

    const std::vector<int> setData(std::vector<int> data);
    std::vector<int> getData();
public:
    std::vector<int> data;
};

Series::Series(){
    
}

Series::Series(std::vector<int> data){
    this->data = data;
}

Series::~Series(){
}
