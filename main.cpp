#include <iostream>
#include <string>
#include "dataBaseHeader.h"

using namespace std;

    

int main(int agrc , char *gaga[]){
    string selection;
    cout << "Enter a number (or q to quit) and press return" << endl;
    cin  >> selection;
    
    /*continus loop for user to make choices and when they quit*/
    for(;;){
        
        if (selection == "1") { //add a student
            NGLLEL001::clear();
            cout << "add student" << endl;
            NGLLEL001::addStudent("lelethu","msuthu", "NGKKEG001", "85 45 98 75");
            NGLLEL001::addStudent("nolitha","wowo", "HGDTTE002", "89 96 41 69 ");
            NGLLEL001::addStudent("Phelokazi","Ngalo", "NGLLEL001", "90 85 45 65");
            NGLLEL001::addStudent("onke","msetu", "HHFIR001", "56 98 78 96");
            cout << "Enter a number (or q to quit) and press return" << endl;
            cin  >> selection;
        }else if (selection == "2") { // display a the infomation in a database
            NGLLEL001::clear();
            NGLLEL001::readDataBase();
            cout << "read dataBase" << endl;
            cout << "Enter a number (or q to quit) and press return" << endl;
            cin  >> selection;
        }else if (selection == "3"){ // save the database
            NGLLEL001::clear();
            NGLLEL001::saveDataBase();
            cout << "save database" << endl;
            cout << "Enter a number (or q to quit) and press return" << endl;
            cin  >> selection;
        }else if (selection == "4") { // display a selected student info
            NGLLEL001::clear();
            cout << "display student info" << endl;
            NGLLEL001::displayStudentRecord("NGLLEL001");
            cout << "Enter a number (or q to quit) and press return" << endl;
            cin  >> selection;
        }else if (selection == "5") { // grade a selected student
            NGLLEL001::clear();
            cout << "grade student" << endl;
            NGLLEL001::studentGrade("hjfg");
            cout << "Enter a number (or q to quit) and press return" << endl;
            cin  >> selection;
        }else if (selection == "q") {
           break;
        }
    }
    return 0;
}