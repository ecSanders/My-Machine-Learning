/************************************************************************************************
* DataFrame header file with declarations and stubs
* @file DataFrame.h
* @author Erik Sanders @ecSanders
* @author Dane Artis @Dartis4
* @version 1.1 10/5/21
***********************************************************************************************/
#ifndef DATAFRAME_H
#define DATAFRAME_H

#include "Series.h"

namespace df
{
    namespace dataframe
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
        class DataFrame {
            public:
            // Constructors

            // default
            DataFrame();

            // non-default
            DataFrame(std::vector<series::Series<T>> data);

            // copy
            DataFrame(DataFrame & rhs);

            // Destructor
            ~DataFrame();

            // Methods

            // simple access
            std::vector<series::Series<T>> head(int numRows);
            std::vector<series::Series<T>> tail(int numRows);

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

            DataFrame<series::Series<T>> query();
            DataFrame<series::Series<T>> agg();
            DataFrame<series::Series<T>> aggregate();
            DataFrame<series::Series<T>> transform();
            DataFrame<series::Series<T>> groupby();

            // information based
            void items();
            void keys();
            T get();
            bool all();
            bool any();

            series::Series<T> count();
            series::Series<T> nunique();
            series::Series<T> value_counts();

            DataFrame<series::Series<T>> abs();
            DataFrame<series::Series<T>> clip();
            DataFrame<series::Series<T>> corr();
            DataFrame<series::Series<T>> count();
            DataFrame<series::Series<T>> cummax();
            DataFrame<series::Series<T>> cummin();
            DataFrame<series::Series<T>> cumprod();
            DataFrame<series::Series<T>> cumsum();
            DataFrame<series::Series<T>> describe();
            DataFrame<series::Series<T>> diff();

            std::vector<T> eval();

            // statistical
            DataFrame<series::Series<T>> mean();
            DataFrame<series::Series<T>> median();
            DataFrame<series::Series<T>> min();
            DataFrame<series::Series<T>> max();
            DataFrame<series::Series<T>> mode();
            DataFrame<series::Series<T>> quantile();
            DataFrame<series::Series<T>> rank();
            DataFrame<series::Series<T>> round();
            DataFrame<series::Series<T>> sum();
            DataFrame<series::Series<T>> std();
            DataFrame<series::Series<T>> var();
            DataFrame<series::Series<T>> cov();

            protected:
            private:
            // Member variables
            std::vector<series::Series<T>> data;
            std::vector<std::string> columns;
        };

        /************************************************
     *
     ***********************************************/
        template <class T>
        std::vector<series::Series<T>> DataFrame<T>::head(int numRows) {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        std::vector<series::Series<T>> DataFrame<T>::tail(int numRows) {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        void DataFrame<T>::insert() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        void DataFrame<T>::append() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        void DataFrame<T>::pop() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        void DataFrame<T>::filter() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        void DataFrame<T>::drop() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        void DataFrame<T>::drop_duplicates() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        bool DataFrame<T>::isin() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        void DataFrame<T>::where() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        void DataFrame<T>::mask() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame<series::Series<T>> DataFrame<T>::query() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame<series::Series<T>> DataFrame<T>::agg() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame<series::Series<T>> DataFrame<T>::aggregate() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame<series::Series<T>> DataFrame<T>::transform() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame<series::Series<T>> DataFrame<T>::groupby() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        void DataFrame<T>::items() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        void DataFrame<T>::keys() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        T DataFrame<T>::get() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        bool DataFrame<T>::all() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        bool DataFrame<T>::any() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        series::Series<T> DataFrame<T>::count() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        series::Series<T> DataFrame<T>::nunique() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        series::Series<T> DataFrame<T>::value_counts() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame<series::Series<T>> DataFrame<T>::abs() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame<series::Series<T>> DataFrame<T>::clip() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame<series::Series<T>> DataFrame<T>::corr() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame<series::Series<T>> DataFrame<T>::cummax() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame<series::Series<T>> DataFrame<T>::cummin() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame<series::Series<T>> DataFrame<T>::cumprod() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame<series::Series<T>> DataFrame<T>::cumsum() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame<series::Series<T>> DataFrame<T>::describe() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame<series::Series<T>> DataFrame<T>::diff() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        std::vector<T> DataFrame<T>::eval() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame<series::Series<T>> DataFrame<T>::max() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame<series::Series<T>> DataFrame<T>::mean() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame<series::Series<T>> DataFrame<T>::median() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame<series::Series<T>> DataFrame<T>::min() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame<series::Series<T>> DataFrame<T>::mode() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame<series::Series<T>> DataFrame<T>::quantile() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame<series::Series<T>> DataFrame<T>::rank() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame<series::Series<T>> DataFrame<T>::round() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame<series::Series<T>> DataFrame<T>::sum() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame<series::Series<T>> DataFrame<T>::std() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame<series::Series<T>> DataFrame<T>::var() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame<series::Series<T>> DataFrame<T>::cov() {}
    }
}

#endif // DATAFRAME_H