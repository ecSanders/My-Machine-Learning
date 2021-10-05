#include "Series.h"


class DataFrame: public Series

{
private:
    DataFrame();
    DataFrame(std::vector<Series> dfData);

    ~DataFrame();

    const Series getColumn(std::vector<Series> dfData, int index); 
    
    void addColumn(std::vector<Series> dfData, Series newData);
    void deleteColumn(std::vector<Series> dfData, int index);



public:
    Series series;
    std::vector<Series> dfData;
};




