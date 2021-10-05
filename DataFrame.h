#include <vector>


class DataFrame: private Series

{
private:
    DataFrame(std::vector<Series series>);
    ~DataFrame();



public:
    Series series;
};




