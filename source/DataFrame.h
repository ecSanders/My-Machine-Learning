/************************************************************************************************
* DataFrame header file with declarations and stubs
* @file DataFrame.h
* @author Erik Sanders @ecSanders
* @author Dane Artis @Dartis4
* @version 1.2 10/6/21
***********************************************************************************************/
#ifndef DATAFRAME_H
#define DATAFRAME_H

#include "Series.h"

namespace df
{
        /************************************************************************************************
        * A class to hold data in a container of many Series objects. The data may be heterogenous and
        * will be displayed in a tabular form.
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
            DataFrame(std::vector< Series<T>> data);

            // copy
            DataFrame(DataFrame & rhs);

            // Destructor
            ~DataFrame();

            // Methods

            // simple access
            std::vector< Series<T>> head(int numRows);
            std::vector< Series<T>> tail(int numRows);

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

            DataFrame< Series<T>> query();
            DataFrame< Series<T>> agg();
            DataFrame< Series<T>> aggregate();
            DataFrame< Series<T>> transform();
            DataFrame< Series<T>> groupby();

            // information based
            void items();
            void keys();
            T get();
            bool all();
            bool any();

             Series<T> count();
             Series<T> nunique();
             Series<T> value_counts();

            DataFrame< Series<T>> abs();
            DataFrame< Series<T>> clip();
            DataFrame< Series<T>> corr();
            DataFrame< Series<T>> count();
            DataFrame< Series<T>> cummax();
            DataFrame< Series<T>> cummin();
            DataFrame< Series<T>> cumprod();
            DataFrame< Series<T>> cumsum();
            DataFrame< Series<T>> describe();
            DataFrame< Series<T>> diff();

            std::vector<T> eval();

            // statistical
            DataFrame< Series<T>> mean();
            DataFrame< Series<T>> median();
            DataFrame< Series<T>> min();
            DataFrame< Series<T>> max();
            DataFrame< Series<T>> mode();
            DataFrame< Series<T>> quantile();
            DataFrame< Series<T>> rank();
            DataFrame< Series<T>> round();
            DataFrame< Series<T>> sum();
            DataFrame< Series<T>> std();
            DataFrame< Series<T>> var();
            DataFrame< Series<T>> cov();

            protected:
            private:
            // Member variables
            std::vector< Series<T>> data;
            std::vector<std::string> columns;
        };

        /************************************************
     *
     ***********************************************/
        template <class T>
        std::vector< Series<T>> DataFrame<T>::head(int numRows) {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        std::vector< Series<T>> DataFrame<T>::tail(int numRows) {}

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
        DataFrame< Series<T>> DataFrame<T>::query() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame< Series<T>> DataFrame<T>::agg() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame< Series<T>> DataFrame<T>::aggregate() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame< Series<T>> DataFrame<T>::transform() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame< Series<T>> DataFrame<T>::groupby() {}

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
         Series<T> DataFrame<T>::count() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
         Series<T> DataFrame<T>::nunique() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
         Series<T> DataFrame<T>::value_counts() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame< Series<T>> DataFrame<T>::abs() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame< Series<T>> DataFrame<T>::clip() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame< Series<T>> DataFrame<T>::corr() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame< Series<T>> DataFrame<T>::cummax() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame< Series<T>> DataFrame<T>::cummin() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame< Series<T>> DataFrame<T>::cumprod() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame< Series<T>> DataFrame<T>::cumsum() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame< Series<T>> DataFrame<T>::describe() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame< Series<T>> DataFrame<T>::diff() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        std::vector<T> DataFrame<T>::eval() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame< Series<T>> DataFrame<T>::max() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame< Series<T>> DataFrame<T>::mean() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame< Series<T>> DataFrame<T>::median() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame< Series<T>> DataFrame<T>::min() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame< Series<T>> DataFrame<T>::mode() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame< Series<T>> DataFrame<T>::quantile() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame< Series<T>> DataFrame<T>::rank() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame< Series<T>> DataFrame<T>::round() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame< Series<T>> DataFrame<T>::sum() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame< Series<T>> DataFrame<T>::std() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame< Series<T>> DataFrame<T>::var() {}

        /************************************************
         *
         ***********************************************/
        template <class T>
        DataFrame< Series<T>> DataFrame<T>::cov() {}
    
}

#endif // DATAFRAME_H