/************************************************************************************************
* Series header file with definitions and stubs
* @file Series.h
* @author Dane Artis
* @version 1.0 10/5/21
***********************************************************************************************/

#ifndef SERIES_H
#define SERIES_H

namespace Series
{
    /************************************************************************************************
    * A class that holds data organized in a column-like format. Series is a template class where 
    * data can hold any numerical or categorical (string-like) data values. Index and data are 
    * essentially pairwise arrays.
    * 
    * @param name Series (column) header
    * @param index A vector that acts as a non-fixed length array that functions as the row headers 
    * (i.e. the column indeces).
    * @param data The data values that are associated with each element of 'index' by their index. 
    * The first index of data will be assigned to name if name is unset.
    * @param datatype The datatype of 'data', must be homogenous within the Series.
    * 
    * @see std::vector
    ***********************************************************************************************/
    template <class T>
    class Series
    {
    public:
        // Constructors

        // default
        Series() : name("Undefined"), datatype("Undefined"); // Initialize member variables to default values

        // non-default
        Series(const T &values);                                // data as an array
        Series(const int &index, const T &data);                // data and index as arrays (int, T)
        Series(const std::string &index, const T &data);        // data and index as arrays (string, T)
        Series(const std::map<int, T> &map);                    // data as a map of index:value pairs (int, T)
        Series(const std::map<std::string, T> &map);            // data as a map of index:value pairs (string, T)
        Series(const T &scalarValue, const int &index);         // data as a scalar value and indeces provided (int)
        Series(const T &scalarValue, const std::string &index); // data as a scalar value and indeces provided (string)

        // copy
        Series(Series &rhs);

        // Destructor
        ~Series();

        // Methods
        std::string dtype();
        int size();
        std::tuple<int, int, int> shape();
        Series<T> T();
        bool empty();
        std::string dtypes();
        std::string flags();
        int ndim();
        Series<T> loc();
        Series<T> iloc();

    protected:
    private:
        std::string name;
        std::vector<T> data;
        std::vector<T> index;
        std::string datatype;
    };
}

#endif // SERIES_H