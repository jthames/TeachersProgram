/*===========================================================================*\
						T E A C H E R S P R O G R A M
\*============================================================================/

								medianCalc.cpp

	Joshua Thames
	12/10/2012
	
	Description:
	
	  Computes median value of homework grade.
	


/*===========================================================================*\
\*===========================================================================*/

#include <vector>
#include <stdexcept>
#include <algorithm>

using std::vector;
using std::sort;
using std::domain_error;


double medianCalc(std::vector<double>& hw)
{
    typedef vector<double>::size_type vec_sz; // the typedef holds all of: "vector<double>::size_type"
                                              // to make using size_type variables shorter later
    vec_sz size = hw.size();
    if (size == 0)
        throw domain_error("median of an empty vector; no Homwork!");

    double median;
    vec_sz mid = size / 2;       // using the typedef from above

    sort(hw.begin(), hw.end());

    // This is the conditional operator ( ? ) combined with ( : )
    // If size%2==0 is true then do what is b/t ? and : else do
    // whats after the :
    median =  size % 2 == 0 ? (hw[mid] + hw[mid - 1] ) / 2 : hw[mid];

    return median;

}

/*===========================================================================*\
						End of medianCalc.cpp
\*===========================================================================*/