#include <iostream>
#include <fstream>
#include <stdio.h>

using namespace std;
#include "select.h"
#include "student.h"


void CSelect::Select()
{


    static int count;



    ifstream  afile;
    afile.open("E:\\ccode\\gerrit-repos\\demo\\stumg\\stumanage\\student.txt", ios::in | ios :: binary );

    int i = 0;
    int n = 0;
    int k = 0;
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


        for (i=0;i =count;i ++)
//        while(afile.read((char*)&st,sizeof(st)))
        {

            if(n==st[i].num)
            {


                flag=1;
                k = i;
                cout<<"查询中";

//                ss.Display_report(n);
            }
            cout << st[k].num << st[k].name<<st[k].phone<<st[k].gender<<st[k].address;
        }
        if(flag==0)
        {

            cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tstudent NOT FOUND!";
            cout<<"\n\n\n\n\n\n\n\n";
        }
    }
    afile.close();
}

