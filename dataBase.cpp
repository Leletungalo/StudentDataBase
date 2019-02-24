#include <iostream>
#include "dataBaseHeader.h"
#include <string>
#include <sstream>
#include <vector>
#include <fstream>

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

        database.push_back(student);
}
void NGLLEL001::readDataBase(){
    if (database.size() == 0) {
        cout << "The databese is emty " << endl;
    }else
    {
        for(auto it = database.begin(); it < database.end(); ++it){
            cout << "Name: " << it[0].name << endl; 
            cout << "Surname: " << it[0].surname << endl; 
            cout << "Student Number: " << it[0].studentNumber << endl;
            cout << "Class Record: " << it[0].classRecord << endl;
            cout << " " << endl;
        }
    }
}
void NGLLEL001::saveDataBase(){
   
    fstream savefile;
    savefile.open("testFile.txt",ios::out | ios::app);
    for(auto it = database.begin(); it < database.end(); ++it){
        savefile << it[0].name << "," << it[0].surname << "," << it[0].studentNumber << "," << it[0].classRecord << endl;
    }
    savefile.close();

}
void NGLLEL001::displayStudentRecord(string studentNumber){
    if (database.size() == 0) {
        cout << "database emty" << endl;
    }else{
    
        for(int i = 0; i < database.size(); i++){
            
            if (studentNumber == database[i].studentNumber) {
                cout << database[i].name << endl;
                cout << database[i].surname << endl;
                cout << database[i].studentNumber << endl;
                cout << database[i].classRecord << endl;
            } 
        }
    }
    
}
int  NGLLEL001::studentGrade(string studentNumber){
    if (database.size() == 0) {
        cout << "database emty" << endl;
    }else{
        string clasRec = "NULL";
        for(int i = 0; i < database.size(); i++){
            
            if (studentNumber == database[i].studentNumber) {
                clasRec = database[i].classRecord;
            } 
        }

        if (clasRec != "NULL") {
            istringstream is(clasRec);
        string nm;
        int km;
        int sum = 0;
        int numberOfScores = 0;


        while(getline(is,nm, ' ')){
            stringstream geek(nm);
            numberOfScores++;
            geek >> km;
            sum += km;
        }
        return sum / numberOfScores;
        }else{
            return -1;
        }
        
        
        
    }
}

void NGLLEL001::clear(){
    system("clear");
}

void NGLLEL001::readFromFile(){

    string temp;
    ifstream read("testFile.txt",ios::in);
        int count = 0;
        while(getline(read,temp)){
            istringstream is(temp);
            string cc, name = "NULL", surname = "NULL" ,stnumber = "NULL",classRec = "NULL";

            while(getline(is,cc,',')){
                if (name == "NULL") {
                    name = cc;
                }else if (surname == "NULL") {
                    surname = cc;
                }else if (stnumber == "NULL") {
                    stnumber = cc;
                }else if (classRec == "NULL") {
                    classRec = cc;
                }
            }
            
            students student;
            student.name = name;
            student.surname = surname;
            student.studentNumber =stnumber;
            student.classRecord = classRec;
            database.push_back(student);
        }
        read.close();
}

void NGLLEL001::deleteFile(){
    system("rm testFile.txt");
}
