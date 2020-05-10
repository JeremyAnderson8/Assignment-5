#include "Faculty.h"
#include "MasterStudent.h"

int main(int argc, char** argv){

  MasterStudent *masterStu = new MasterStudent();

  bool running = true;
  int userOption = 0;

  while(running){
    cout << "Welcome To Database: " << endl;
    cout << "Enter Number Of Option You Would Like To Select" << endl;
    cout << "7. Enter New Student" << endl;

    cin >> userOption;

    if(userOption == 7){
      int id = 0;
      string name = "";
      string grade = "";
      string major = "";
      double gpa = 0.0;
      int advisorID = 0;

      cout << "Enter Student's ID: " << endl;
      cin >> id;

      cout << "Enter Student's Name: " << endl;
      cin >> name;

      cout << "Enter Student's Grade: " << endl;
      cin >> grade;

      cout << "Enter Student's Major: " << endl;
      cin >> major;

      cout << "Enter Student's GPA: " << endl;
      cin >> gpa;

      cout << "Enter Student's Advisor's ID: " << endl;
      cin >> advisorID;

      Student *newStudent = new Student(id, name, grade, major, gpa, advisorID);
      masterStu->addStudent(newStudent);

    }
  }
}
