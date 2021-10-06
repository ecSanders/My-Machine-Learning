/************************************************************************************************
* DataFrame header file with declarations and stubs
* @file DataFrame.h
* @author Erik Sanders @ecSanders
* @author Dane Artis @Dartis4
* @version 1.1 10/5/21
***********************************************************************************************/
#ifndef DATAFRAME_H
#define DATAFRAME_H

namespace DataFrame
{
    /************************************************************************************************
    * A class to hold data in a container of many Series objects. The data may be heterogenous and 
    * will be displayed in a tabular form.
    * 
    * @param data a vector of type Series
    * @param columns a vector of the name of each Series in the DataFrame, similar to index in 'Series'
    * 
    * @see Series
    ***********************************************************************************************/
    template <class T>
    class DataFrame
    {
    public:
        // Constructors

        // default
        DataFrame();

        // non-default
        DataFrame(std::vector<Series::Series<T>> data);

        // copy
        DataFrame(DataFrame &rhs);

        // Destructor
        ~DataFrame();

        // Methods

        // simple access
        std::vector<Series::Series<T>> head(int numRows);
        std::vector<Series::Series<T>> tail(int numRows);

        // manipulation
        void insert();
        void append();
        void pop();
        void filter();
        void drop();
        void drop_duplicates();

        // filtering
        bool isin();
        void where();
        void mask();

        DataFrame<Series::Series<T>> query();
        DataFrame<Series::Series<T>> agg();
        DataFrame<Series::Series<T>> aggregate();
        DataFrame<Series::Series<T>> transform();
        DataFrame<Series::Series<T>> groupby();

        // information based
        void items();
        void keys();
        T get();
        bool all();
        bool any();

        Series::Series<T> count();
        Series::Series<T> nunique();
        Series::Series<T> value_counts();

        DataFrame<Series::Series<T>> abs();
        DataFrame<Series::Series<T>> clip();
        DataFrame<Series::Series<T>> corr();
        DataFrame<Series::Series<T>> count();
        DataFrame<Series::Series<T>> cummax();
        DataFrame<Series::Series<T>> cummin();
        DataFrame<Series::Series<T>> cumprod();
        DataFrame<Series::Series<T>> cumsum();
        DataFrame<Series::Series<T>> describe();
        DataFrame<Series::Series<T>> diff();

        std::vector<T> eval();

        // statistical
        DataFrame<Series::Series<T>> max();
        DataFrame<Series::Series<T>> mean();
        DataFrame<Series::Series<T>> median();
        DataFrame<Series::Series<T>> min();
        DataFrame<Series::Series<T>> mode();
        DataFrame<Series::Series<T>> quantile();
        DataFrame<Series::Series<T>> rank();
        DataFrame<Series::Series<T>> round();
        DataFrame<Series::Series<T>> sum();
        DataFrame<Series::Series<T>> std();
        DataFrame<Series::Series<T>> var();
        DataFrame<Series::Series<T>> cov();

    protected:
    private:
        // Member variables
        std::vector<Series::Series<T>> data;
        std::vector<std::string> columns;
    };
}

#endif // DATAFRAME_H