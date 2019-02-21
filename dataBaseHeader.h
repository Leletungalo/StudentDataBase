#ifndef _DATABASEHEADER
#define _DATABASEHEADER
//#include <string>

    namespace NGLLEL001 {
    using namespace std;
    void addStudent(string name, string surname, string studentNumber, string classRecord);
    void readDataBase();
    void saveDataBase();
    void displayStudentRecord(string studentNumber);
    int studentGrade(string studentNumber);
   
    }

#endif