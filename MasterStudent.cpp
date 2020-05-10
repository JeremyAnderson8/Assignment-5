#include "MasterStudent.h"

MasterStudent::MasterStudent(){
  studentTree = new BST<Student*>;

}

MasterStudent::~MasterStudent(){

}

void MasterStudent::addStudent(Student* student){
  studentTree->insert(student);
  cout << "Student Added" << endl;
}
