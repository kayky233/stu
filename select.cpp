#include <iostream>
#include <fstream>
#include <stdio.h>

using namespace std;
#include "select.h"
#include "student.h"


void CSelect::Select()
{



    Stu s ;
    ifstream  afile;
    afile.open("E:\\ccode\\gerrit-repos\\demo\\stumg\\student.txt", ios::in | ios :: binary );

    int n = 0;
    int flag=0;
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t";
    cout<<"ENTER YOUR STUDENT NUMBER: ";
    cin >>n;
    if(!afile)
    {
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tFILE NOT FOUND!";
        cout<<"\n\n\n\n\n\n\n\n";
    }
    else
    {


        while(afile.read((char*)&s,sizeof(s)))
        {

            if(n==s.num)
            {


                flag=1;
                cout<<"查询中";
                cout << s.num << s.name;
//                ss.Display_report(n);
            }
        }
        if(flag==0)
        {

            cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tstudent NOT FOUND!";
            cout<<"\n\n\n\n\n\n\n\n";
        }
    }
    afile.close();
}

