#include <iostream>
#include <fstream>

using namespace std;
#include "student.h"
#include "bro.h"
#include "delete.h"

#include "insert.h"
#include "select.h"
#include "update.h"

struct Stu st[100];
ofstream outfile;

int tag;
int ftag;

int main(void)
{

     CStudent student;
     int n;

     start:

     system("cls");
     cout<<"\n\n\n\n\n\n";
     cout<<"\t\t\t\t--------------------------------------"<<"\n";
     cout<<"\t\t\t\t***  Student Info Manage Program   ***"<<"\n";
     cout<<"\t\t\t\t--------------------------------------"<<"\n"<<endl;
     cout<<"\t\t\t\t     1. Browse Student info"<<"\n"<<endl;
     cout<<"\t\t\t\t     2. Insert Student info"<<"\n"<<endl;
     cout<<"\t\t\t\t     3. Select Student info"<<"\n"<<endl;
     cout<<"\t\t\t\t     4. Delete Student info"<<"\n"<<endl;
     cout<<"\t\t\t\t     5. Update Student info"<<"\n"<<endl;


     cout<<"\t\t\t\t     Please select the choice: "<<endl;
     cin>>n;
     system("cls");
     switch(n)
     {
              case 1: student.Browse();
                      break;
              case 2: student.Insert();
                      break;
              case 3: student.Select();
                      break;
              case 4: student.Del();
                      break;
              case 5: student.Update();
                      break;

              default:cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tWRONG OPTION!";
                      cout<<"\n\n\n\n\n\n\n\n";
     }
     system("PAUSE");
     goto start;

}
