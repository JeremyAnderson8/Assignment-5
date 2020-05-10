#include <iostream>
#include "BST.h"
#include "Student.h"
using namespace std;

class MasterStudent{
  public:
    MasterStudent();
    ~MasterStudent();
    BST<Student*> *studentTree;
    void addStudent(Student* student);
  private:
    Student* student;
};
