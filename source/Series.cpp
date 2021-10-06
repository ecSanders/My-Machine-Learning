/************************************************************************************************
* Series source file with method definitions
* @file Series.cpp
* @author Dane Artis @Dartis4
* @author Matthew Gedris @mgedris19
* @version 1.0 10/5/21
***********************************************************************************************/

#include "Series.h"

#include <cassert> // because I am paranoid
#include <cstddef> // for the NULL

#include <string>
#include <vector>
#include <map>
#include <tuple>

/************************************************
 * The datatype of 'data'
 * @returns datatype as a string
 ***********************************************/
std::string dtype()
{
    // @TODO find and output the datatype
}

/************************************************
 * The number of elements in the 'Series'
 * @returns the number of elements as an integer
 ***********************************************/
int size()
{
    // @TODO find and output the number of rows
}

/************************************************
 * The shape of 'Series'
 * @returns a tuple of Series dimensions
 ***********************************************/
std::tuple<int, int, int> shape()
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
template <class T>
Series::Series<T> T()
{
}

/************************************************
 * Whether the series contains elements or not
 * @returns boolean value to indicate whether 
 * 'Series' has data or not
 ***********************************************/
bool empty()
{
    // @TODO return a boolean based on the size variable
}

/************************************************
 * The datatype of the data set
 * @returns the datatype as a string
 ***********************************************/
std::string dtypes()
{
    // @TODO return the datatype of data
}

// ** Wait on writing this method **
/************************************************
 * Information about the Series
 * @returns a string of Series information
 ***********************************************/
std::string flags()
{
}

/************************************************
 * The number of dimensions in the Series
 * @returns number of dimensions as an integer 
 * (1 in this case).
 ***********************************************/
int ndim()
{
    return 1;
}

// ** Don't touch this yet **
/************************************************
 * Access data using label(s)
 * @param labels Container of index labels, or 
 * boolean values for all indices
 * @returns a Series of targeted data
 ***********************************************/
template <class T>
Series::Series<T> loc()
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
Series::Series<T> iloc()
{
}
