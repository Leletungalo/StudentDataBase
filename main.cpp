#include <iostream>
#include <string>
#include "dataBaseHeader.h"

using namespace std;

    

int main(int agrc , char *gaga[]){
    int selection;
    cout << "Enter a number (or q to quit) and press return" << endl;
    cin  >> selection;
    
    /*continus loop for user to make choices and when they quit*/
    for(;;){
        
        if (selection == 1) { //add a student
            cout << "add student" << endl;
            NGLLEL001::addStudent("leu","wfijhiu", "legend", "jihuhfe");
            NGLLEL001::addStudent("nxinxi","wfijhiu", "hduihwf", "jihuhfe");
            NGLLEL001::addStudent("phesh","wfijhiu", "hduihwf", "jihuhfe");
            NGLLEL001::addStudent("onke","wfijhiu", "hduihwf", "jihuhfe");
            cout << "Enter a number (or q to quit) and press return" << endl;
            cin  >> selection;
        }else if (selection == 2) { // display a the infomation in a database
            cout << "read dataBase" << endl;
            cout << "Enter a number (or q to quit) and press return" << endl;
            cin  >> selection;
        }else if (selection == 3){ // save the database
            cout << "save database" << endl;
            cout << "Enter a number (or q to quit) and press return" << endl;
            cin  >> selection;
        }else if (selection == 4) { // display a selected student info
            cout << "display student info" << endl;
            NGLLEL001::displayStudentRecord("legend");
            cout << "Enter a number (or q to quit) and press return" << endl;
            cin  >> selection;
        }else if (selection == 5) { // grade a selected student
            cout << "grade student" << endl;
            cout << "Enter a number (or q to quit) and press return" << endl;
            cin  >> selection;
        }else if (selection == 0) {
           break;
        }
    }
    return 0;
}