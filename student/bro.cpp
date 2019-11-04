#include <iostream>
#include <fstream>

using namespace std;
#include "bro.h"
#include "student.h"


void CBro::Browse(void)
{


    int i;
    i = 0;







    ifstream infile("E:\\ccode\\stu\\student.txt",ios :: in );
    ifstream statusfile("E:\\ccode\\stu\\status.txt",ios :: in );
    statusfile >> tag;
    if(!infile)
    {
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tFILE NOT FOUND!";
        cout<<"\n\n\n\n\n\n\n\n";
    }
    else
    {
        cout<<"\n\n\n\n\n\n";
        cout<<"\t\t\t  ---------------------------"<<endl;
        cout<<"\t\t\t     LIST OF CLASS STUDENTS"<<endl;
        cout<<"\t\t\t  ---------------------------"<<endl;
        cout<<"\t\t\t  Reading from the file" <<"\n\n"<< endl;
        cout << "\t\t\tstudent number"<<"\t"<< "student name"<<"\t"<< "student gender"<<"\t"<< "student phone"<<"\t"<< "student adress"<<endl;


        for (i = 0;i<tag;++i)

            {

               infile >> st[i].num >> st[i].name >> st[i].gender>> st[i].phone >> st[i].address;
               cout <<"\t\t\t"<< st[i].num<<"\t\t"<< st[i].name<<"\t\t"<< st[i].gender<<"\t\t"<< st[i].phone<<"\t\t"<< st[i].address<<endl;



            }
     }




       infile.close();
       statusfile.close();




}



