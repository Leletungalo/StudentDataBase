#include <iostream>
#include <string>
#include "dataBaseHeader.h"

using namespace std;

    

int main(int agrc , char *gaga[]){
    NGLLEL001::clear();
    NGLLEL001::readFromFile();
    string selection;
    cout << "0 Add a student" << '\n' << "1 Read Database" << '\n' << "2 Save Data" << '\n' << "3 Display student infomation" << '\n' << "4 Grade student" << '\n' << "q Quit" << endl;
    cout << "Enter a number (or q to quit) and press return" << endl;
    cin  >> selection;
    
    /*continus loop for user to make choices and when they quit*/
    for(;;){
        
        if (selection == "0") { //add a student
            string name, surname, studentNumber,classRecord;

            NGLLEL001::clear();
            cout << "Enter a name of a student" << endl;
            cin >> name;
            cout << "Enter a surname of a student" << endl;
            cin >> surname;
            cout << "Enter the student number" << endl;
            cin >> studentNumber;
            cin.ignore();
            cout << "Enter the class record" << endl;
            getline(cin,classRecord);
            NGLLEL001::addStudent(name,surname, studentNumber, classRecord);

            NGLLEL001::clear();
            cout << "0 Add a student" << '\n' << "1 Read Database" << '\n' << "2 Save Data" << '\n' << "3 Display student infomation" << '\n' << "4 Grade student" << '\n' << "q Quit" << endl;
            cout << "Enter a number (or q to quit) and press return" << endl;
            cin  >> selection;
        }else if (selection == "1") { // display a the infomation in a database
            NGLLEL001::clear();
            NGLLEL001::readDataBase();
            cout << "read dataBase" << endl;
            cout << "0 Add a student" << '\n' << "1 Read Database" << '\n' << "2 Save Data" << '\n' << "3 Display student infomation" << '\n' << "4 Grade student" << '\n' << "q Quit" << endl;
            cout << "Enter a number (or q to quit) and press return" << endl;
            cin  >> selection;
        }else if (selection == "2"){ // save the database
            NGLLEL001::clear();
            NGLLEL001::saveDataBase();
            cout << "Entered infomation saved" << endl;
            cout << " " << endl;
            cout << "0 Add a student" << '\n' << "1 Read Database" << '\n' << "2 Save Data" << '\n' << "3 Display student infomation" << '\n' << "4 Grade student" << '\n' << "q Quit" << endl;
            cout << "Enter a number (or q to quit) and press return" << endl;
            cin  >> selection;
        }else if (selection == "3") { // display a selected student info
            NGLLEL001::clear();
            string tempstudentNumber; 
            cout << "Enter the student number and press return" << endl;
            cin >> tempstudentNumber;
            NGLLEL001::displayStudentRecord(tempstudentNumber);

            cout << "0 Add a student" << '\n' << "1 Read Database" << '\n' << "2 Save Data" << '\n' << "3 Display student infomation" << '\n' << "4 Grade student" << '\n' << "q Quit" << endl;
            cout << "Enter a number (or q to quit) and press return" << endl;
            cin  >> selection;
        }else if (selection == "4") { // grade a selected student
            NGLLEL001::clear();
            string tempstudentNumber;
            cout << "Enter the student number and press return" << endl;
            cin >> tempstudentNumber;
            cout << " " << endl;

            int avarage =  NGLLEL001::studentGrade(tempstudentNumber);
            if (avarage != -1) {
                cout << "Stundent avarage "  <<  avarage << endl;
                cout << " " << endl;
            }else{
                cout << "Stundent not found" << endl;
                cout << " " << endl;
            }
            
            cout << "0 Add a student" << '\n' << "1 Read Database" << '\n' << "2 Save Data" << '\n' << "3 Display student infomation" << '\n' << "4 Grade student" << '\n' << "q Quit" << endl;
            cout << "Enter a number (or q to quit) and press return" << endl;
            cin  >> selection;
            
        }else if (selection == "q") {
           break;
        }
    }
    return 0;
}