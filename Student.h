#include<iostream>

using namespace std;

class Student {
private:
  int studentID;
  char name[20];
public:
  void assignDetails(int sID, const char sname[]);
  void display();
};


