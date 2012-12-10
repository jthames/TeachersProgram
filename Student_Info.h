#ifndef STUDENT_INFO_H_INCLUDED
#define STUDENT_INFO_H_INCLUDED

#include <fstream>
#include <string>
#include <iomanip>
#include <iostream>

/// Student_Info.h

using std::ifstream;
using std::vector;

struct Student_info
{
    std::string name;
    double midterm;
    double final;
    std::vector<double> homeworks;
    double finalGrade;
};

//struct Student_info;

// Function Prototypes
ifstream& read_hw(ifstream& fin, vector<double>& hw);
ifstream& read   (ifstream& fin, struct Student_info& s);
bool compare(const Student_info& x,  const Student_info& y);

#endif // STUDENT_INFO_H_INCLUDED