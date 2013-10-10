Author: Joshua Thames

This is the readme file for TeachersProgram.
First added on 12/10/2012 on Monday night at 11:52 PM.

This program reads in from file record.txt and computes final grade according to the formula:

	finalGrade = final * 0.35 + midterm * 0.35 + median * 0.30

	final = final exam grade
	midterm = midterm exam grade
	median = median value of all homeworks
	
	final    = 35%
	midterm  = 35%
	homework = %30
--------------------------------------------------------------------

New techniques learned in C++

	1.  First C++ program!
	2.  Vectors - iterators, sorting, 
	3.  Structs
	4.  Error handeling - domain error
	5.  iostream concepts like streamsize, setprecision
	6.  sizetype for strings and vectors
	7.  Using typedef with vectors
	8.  Reading data from files - ifstream, infile.open()
	9.  Header file concepts - #ifndef, #define, #endif
	10. Formatting output to console
--------------------------------------------------------------------

Description of each file:

	main.cpp	- Driver file. Calls read function to store 			  		  homework, sorts records, calls formatRec to 
			  format output, calls printRecord to printout 			  to console.
	
	medianCalc.cpp 	- Computes median value of homework grade.
	
	Sudent_info.cpp - Reads in homework from record.txt, compares
			  names.