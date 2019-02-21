#include <iostream>
#include "dataBaseHeader.h"
#include <string>
#include <vector>

using namespace std;
    struct students
    {
        string name, surname, studentNumber, classRecord;
    };

vector<students> database;
    
/*adds a students infomation into the database
*/
void NGLLEL001::addStudent(string name,string surname, string studentNumber, string classRecord){
   students student;
   
   student.name = name;
   student.surname = surname;
   student.studentNumber =studentNumber;
   student.classRecord = classRecord;
   //database.push_back
   database.push_back(student);
  /* for(int i = 0; i < database.size(); i++)
   {
       cout << database[i].name << endl;
    //cout << database.size() << endl;
   }*/
}
void NGLLEL001::readDataBase(){}
void NGLLEL001::saveDataBase(){}
void NGLLEL001::displayStudentRecord(string studentNumber){
    for(int i = 0; i < database.size(); i++){
        
        if (studentNumber == database[i].studentNumber) {
            cout << database[i].studentNumber << endl;
        }
        cout << database[i].studentNumber << endl;
    }
    
}
int  NGLLEL001::studentGrade(string studentNumber){}
