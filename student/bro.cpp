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
        cout<<"\t\t\t  ---------------------------"<<"\n";
        cout<<"\t\t\t     LIST OF CLASS STUDENTS"<<"\n";
        cout<<"\t\t\t  ---------------------------"<<"\n\n";
        cout << "Reading from the file" << endl;


        for (i = 0;i<tag;++i)

            {

               infile >> st[i].num >> st[i].name >> st[i].gender>> st[i].phone >> st[i].address;
               cout << st[i].num<<"\t"<< st[i].name<<"\t"<< st[i].gender<<"\t"<< st[i].phone<<"\t"<< st[i].address<<endl;



            }
     }




       infile.close();
       statusfile.close();




}



