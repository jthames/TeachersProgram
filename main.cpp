/*===========================================================================*\
						T E A C H E R S P R O G R A M
\*============================================================================/
									main.cpp

	Joshua Thames
	12/10/2012
	
	Built in Visual Studio Express 2012
		Warning level = 2

	Description:
	
	  This program reads in from file record.txt and computes final grade 
	  according to the formula:

		finalGrade = final * 0.35 + midterm * 0.35 + median * 0.30

		final = final exam grade
		midterm = midterm exam grade
		median = median value of all homeworks
	
	final    = 35%
	midterm  = 35%
	homework = %30
		
		Status: Done and working properly

/*===========================================================================*\
\*===========================================================================*/

// header files
#include "medianCalc.h"
#include "Student_Info.h"

using namespace std;

void formatRec(vector<Student_info> &students, string::size_type &maxlen);

//=================================================================
// Operation: calculates the median value of a vector
// Input:     vector<double> by reference
// Output:    the median value of a vector; Domain_error Exception
//=================================================================
double grade ( struct Student_info &si)
{
	double finalGrade;
    double median = medianCalc(si.homeworks );

    finalGrade = si.final * 0.35 + si.midterm * 0.35 + median * 0.30;
    si.finalGrade = finalGrade;

    return finalGrade;
}

void printRecord(const struct Student_info csi)
	{cout << csi.name << endl;}


//=================================================================
// Operation: Format output
// Input:     students, maxlen
// Output:    the median value of a vector; Domain_error Exception
//=================================================================
void formatRec(vector<Student_info> &students, string::size_type &maxlen)
{

	for(vector<Student_info>::size_type i = 0; i!=students.size(); i++)
	{
		// write the name, padded on the right to maxlen + 1 characters
           cout << students[i].name
                << string(maxlen +1 - students[i].name.size(), ' ');

           // compute and write the grade
           try
           {
               double final_grade = grade(students[i]);
               streamsize prec = cout.precision();
               cout << setprecision(3) << final_grade << setprecision(prec);
           }
           catch (domain_error e)
           {
               cout << e.what();
           }

           cout << endl;
	}// end for loop
}


//=================================================================
// MAIN 
//=================================================================
void main()
{

	//initializations
	struct Student_info record;
	vector<Student_info> students;
	string::size_type maxlen = 0;

	ifstream infile;
	infile.open("record.txt");


	// read and store all the records, and find the length of the longest name
	while( read(infile, record)) 
	{
		maxlen = max(maxlen, record.name.size());
		students.push_back(record);
	}

	// alphabetize the records (don't forget the try/catch block)
	sort(students.begin(), students.end(), compare);

	formatRec(students, maxlen);

	printRecord(record);

}// end main

/*===========================================================================*\
						End of main.cpp
\*===========================================================================*/