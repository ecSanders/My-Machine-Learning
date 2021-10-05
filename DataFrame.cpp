#include "DataFrame.h"



const Series DataFrame::getColumn(std::vector<Series> dfData, int index){
    return this->dfData.at(index);
}; 

void DataFrame::addColumn(std::vector<Series> dfData, Series newData){
    this->dfData.push_back(newData);
};




DataFrame::DataFrame(){

}

DataFrame::DataFrame(std::vector<Series> dfData){
    this->dfData = dfData;
}

DataFrame::~DataFrame(){

}

