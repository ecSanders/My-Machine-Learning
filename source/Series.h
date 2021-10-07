/************************************************************************************************
* Series header file with declarations and stubs
* @file Series.h
* @author Dane Artis @Dartis4
* @author Matthew Gedris @mgedris19
* @version 1.0 10/5/21
***********************************************************************************************/

#ifndef SERIES_H
#define SERIES_H

#include <cassert>
#include <cstddef>

#include <typeinfo>
#include <string>
#include <array>
#include <vector>
#include <map>
#include <tuple>

namespace df
{
    namespace series
    {


        /************************************************************************************************
        * @class Series
        * @brief A container for data
        *
        * A class that holds data organized in a column-like format. Series is a template class where
        * data can hold any numerical or categorical (string-like) data values. Index and data are
        * essentially pairwise arrays.
        *
        * @sa std::vector
        ***********************************************************************************************/
        template <class T>
        class Series {
            public:
            /******************************************************
            * Constructors
            ******************************************************/

            /* default */

            // Initialize member variables to default values
            Series() : name("Undefined"), datatype("Undefined") {};

            /* non-default */

            // data as an array
            Series(const T * data) : name("Undefined")
            {
                // loop through the passed data
                for (int i = 0; i < sizeof(data); i++)
                {
                    // push the associated index value into the index vector
                    this->index.push_back(std::to_string(i));
                    // push the data value into the data vector
                    this->data.push_back(data[i]);
                }
                // set datatype to be the type of data
                this->datatype = typeid(data[0]).name();
            }

            // data as an array with name
            Series(const std::string name, const T * data) : name(name)
            {
                // loop through the passed data
                for (int i = 0; i < sizeof(data); i++)
                {
                    // push the associated index value into the index vector
                    this->index.push_back(std::string(i));
                    // push the data value into the data vector
                    this->data.push_back(data[i]);
                }
            }

            /******************************************************************/

            // data and index as arrays (int, T)
            Series(const int * index, const T * data) : name("Undefined")
            {
                // the two passed arrays must have the same number of elements
                // assert(index.sizeof() == data.sizeof());

                // loop through the passed data
                for (int i = 0; i < sizeof(index); i++)
                {
                    // push the associated index value into the index vector
                    this->index.push_back(std::string(index[i]));
                    // push the data value into the data vector
                    this->data.push_back(data[i]);
                }
            }

            // data and index as arrays (int, T) with name
            Series(const std::string name, const int * index, const T * data) : name(name)
            {
                // the two passed arrays must have the same number of elements
                // assert(index.sizeof() == data.sizeof());

                // loop through the passed data
                for (int i = 0; i < sizeof(index); i++)
                {
                    // push the associated index value into the index vector
                    this->index.push_back(std::string(index[i]));
                    // push the data value into the data vector
                    this->data.push_back(data[i]);
                }
            }

            /******************************************************************/

            // data and index as arrays (string, T)
            Series(const std::string * index, const T * data) : name("Undefined")
            {
                // the two passed arrays must have the same number of elements
                // assert(index.sizeof() == data.sizeof());

                // loop through the passed data
                for (int i = 0; i < sizeof(index); i++)
                {
                    // push the associated index value into the index vector
                    this->index.push_back(index[i]);
                    // push the data value into the data vector
                    this->data.push_back(data[i]);
                }
            }

            // data and index as arrays (string, T) with name
            Series(const std::string name, const std::string * index, const T * data) : name(name)
            {
                // the two passed arrays must have the same number of elements
                // assert(index.sizeof() == data.sizeof());

                // loop through the passed data
                for (int i = 0; i < sizeof(index); i++)
                {
                    // push the associated index value into the index vector
                    this->index.push_back(index[i]);
                    // push the data value into the data vector
                    this->data.push_back(data[i]);
                }
            }

            /******************************************************************/

            // data as a map of index:value pairs (int, T)
            Series(const std::map<int, T> * data) : name("Undefined")
            {
                for (typename std::map<int, T>::iterator it = data.begin(); it != data.end(); ++it)
                {
                    // push the associated index value into the index vector
                    this->index.push_back(it->first);
                    // push the data value into the data vector
                    this->data.push_back(it->second);
                }
            }

            // data as a map of index:value pairs (int, T) with name
            Series(const std::string name, const std::map<int, T> * data) : name(name)
            {
                for (typename std::map<int, T>::iterator it = data.begin(); it != data.end(); ++it)
                {
                    // push the associated index value into the index vector
                    this->index.push_back(it->first);
                    // push the data value into the data vector
                    this->data.push_back(it->second);
                }
            }

            /******************************************************************/

            // data as a map of index:value pairs (string, T)
            Series(const std::map<std::string, T> * data) : name("Undefined")
            {
                for (typename std::map<int, T>::iterator it = data.begin(); it != data.end(); ++it)
                {
                    // push the associated index value into the index vector
                    this->index.push_back(it->first);
                    // push the data value into the data vector
                    this->data.push_back(it->second);
                }
            }

            // data as a map of index:value pairs (string, T) with name
            Series(const std::string name, const std::map<std::string, T> * data) : name(name)
            {
                for (typename std::map<int, T>::iterator it = data.begin(); it != data.end(); ++it)
                {
                    // push the associated index value into the index vector
                    this->index.push_back(it->first);
                    // push the data value into the data vector
                    this->data.push_back(it->second);
                }
            }

            /******************************************************************/

            // data as a scalar value and number of indeces provided (int)
            Series(const T scalarValue, const int numVal) : name("Undefined")
            {
                for (int i = 0; i < numVal; i++)
                {
                    // push the associated index value into the index vector
                    this->index.push_back(std::string(i));
                    // push the data value into the data vector
                    this->data.push_back(scalarValue);
                }
            }

            // data as a scalar value and number of indeces provided (int) with name
            Series(const std::string name, const T scalarValue, const int numVal) : name(name)
            {
                for (int i = 0; i < numVal; i++)
                {
                    // push the associated index value into the index vector
                    this->index.push_back(std::string(i));
                    // push the data value into the data vector
                    this->data.push_back(scalarValue);
                }
            }

            /******************************************************************/

            // data as a scalar value and indeces provided (int)
            Series(const T scalarValue, const int * index) : name("Undefined")
            {
                for (int i = 0; i < sizeof(index); i++)
                {
                    // push the associated index value into the index vector
                    this->index.push_back(std::string(index[i]));
                    // push the data value into the data vector
                    this->data.push_back(scalarValue);
                }
            }

            // data as a scalar value and indeces provided (int) with name
            Series(const std::string name, const T scalarValue, const int * index) : name(name)
            {
                for (int i = 0; i < sizeof(index); i++)
                {
                    // push the associated index value into the index vector
                    this->index.push_back(std::string(index[i]));
                    // push the data value into the data vector
                    this->data.push_back(scalarValue);
                }
            }

            /******************************************************************/

            // data as a scalar value and indeces provided (string)
            Series(const T scalarValue, const std::string * index) : name("Undefined")
            {
                for (int i = 0; i < sizeof(index); i++)
                {
                    // push the associated index value into the index vector
                    this->index.push_back(index[i]);
                    // push the data value into the data vector
                    this->data.push_back(scalarValue);
                }
            }

            // data as a scalar value and indeces provided (string) with name
            Series(const std::string name, const T scalarValue, const std::string * index) : name(name)
            {
                for (int i = 0; i < sizeof(index); i++)
                {
                    // push the associated index value into the index vector
                    this->index.push_back(index[i]);
                    // push the data value into the data vector
                    this->data.push_back(scalarValue);
                }
            }

            /******************************************************************/

                /* copy */
            Series(Series & rhs);

            /******************************************************
            * Deconstructor
            ******************************************************/
            ~Series() {}

            /******************************************************
            * Methods
            ******************************************************/
            std::string dtype();
            int size();
            std::tuple<int, int, int> shape();
            // Series<T> T();
            bool empty();
            std::string dtypes();
            std::string flags();
            int ndim();
            Series<T> value_counts();
            Series<T> loc();
            Series<T> iloc();

            protected:
            private:
            /******************************************************
            * Member Variables
            ******************************************************/
            std::string name;
            std::vector<T> data;
            std::vector<std::string> index;
            std::string datatype;
        };

        /************************************************
         * The datatype of 'data'
         * @returns datatype as a string
         ***********************************************/
        template <class T>
        std::string Series<T>::dtype()
        {
            // @TODO find and output the datatype
            // I believe there is a way to return the
            // datatype of a value built directly in C++

            return this->datatype;
        }

        /************************************************
         * The number of elements in the 'Series'
         * @returns the number of elements as an integer
         ***********************************************/
        template <class T>
        int Series<T>::size()
        {
            // @TODO find and output the number of rows
            return this->index.size();
        }

        /************************************************
         * The shape of 'Series'
         * @returns a tuple of Series dimensions
         ***********************************************/
        template <class T>
        std::tuple<int, int, int> Series<T>::shape()
        {
            // @TODO get the number of values for each
            // dimension (the first dimension in this case)
        }

        // ** Don't touch this yet **
        /************************************************
         * The transpose of 'Series', basically a row
         * instead of a column.
         * @returns the Transpose of 'Series'
         ***********************************************/
         // template <class T>
         // Series::Series<T> T()
         // {
         // }

        /************************************************
         * Whether the series contains elements or not
         * @returns boolean value to indicate whether
         * 'Series' has data or not
         ***********************************************/
        template <class T>
        bool Series<T>::empty()
        {
            // @TODO return a boolean based on the size variable
        }

        /************************************************
         * The datatype of the data set
         * @returns the datatype as a string
         ***********************************************/
        template <class T>
        std::string Series<T>::dtypes()
        {
            // @TODO return the datatype of data
        }

        // ** Wait on writing this method **
        /************************************************
         * Information about the Series
         * @returns a string of Series information
         ***********************************************/
        template <class T>
        std::string Series<T>::flags()
        {
        }

        /************************************************
         * The number of dimensions in the Series
         * @returns number of dimensions as an integer
         * (1 in this case).
         ***********************************************/
        template <class T>
        int Series<T>::ndim()
        {
            return 1;
        }

        /************************************************
         * Returns the count of all data grouped by
         * unique values.
         * @returns a Series of counts
         ***********************************************/
        template <class T>
        Series<T> Series<T>::value_counts()
        {
        }

        // ** Don't touch this yet **
        /************************************************
         * Access data using label(s)
         * @param labels Container of index labels, or
         * boolean values for all indices
         * @returns a Series of targeted data
         ***********************************************/
        template <class T>
        Series<T> Series<T>::loc()
        {
        }

        // ** Don't touch this yet **
        /************************************************
         * Access data using literal integer index location
         * @param indices array of the target index
         * integer values
         * @returns a Series of targeted data
         ***********************************************/
        template <class T>
        Series<T> Series<T>::iloc()
        {
        }
    }
}
#endif // SERIES_H