/*===========================================================================*\
						T E A C H E R S P R O G R A M
\*============================================================================/

								Student_Info.cpp

	Joshua Thames
	12/10/2012
	
	Description:
	
	  Reads in homework from record.txt, compares names.
	

/*===========================================================================*\
\*===========================================================================*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <vector>
#include "Student_Info.h"

using std::ifstream;
using std::vector;


ifstream& read_hw(ifstream& fin, vector<double>& hw)
{
    if (fin) {
        // get rid of previous contents
        hw.clear();

        // read in the homework grades
        double x;
        while(fin >> x)
            hw.push_back(x);

        fin.clear();
    }
    return fin;
}

bool compare (const Student_info& x,  const Student_info& y)
{
    return x.name < y.name;
}


ifstream& read(ifstream& fin, struct Student_info& s)
{
    // read in the name, midterm, and final grades from file
    fin >> s.name >> s.midterm >> s.final;

    // calls function to read in homework grades into vector
    read_hw(fin, s.homeworks);

    return fin;
}

/*===========================================================================*\
						End of Student_Info.cpp
\*===========================================================================*/