#include "Student.h"
#include <iostream>
#include <cstring>

using namespace std;

void Student::assignDetails(int sID, const char sname[]) {
  studentID = sID;
  strcpy(name, sname);
}

void Student::display() {
  cout << "ID : " << studentID << endl;
  cout << "Name : " << name << endl;
}
