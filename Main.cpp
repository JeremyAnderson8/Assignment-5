#include "Student.h"
#include "Faculty.h"

int main(int argc, char** argv){

  Student *jeremy = new Student(2314466, "Jeremy Anderson", "Sophomore", "Data Analytics", 3.4, 111111);
  Faculty *rene = new Faculty(123456, "Rene German", "Lecturer", "Computer Science");

  cout << rene->getName() << endl;

}
