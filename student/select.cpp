#include <iostream>
#include <fstream>
#include <stdio.h>


using namespace std;
#include "select.h"
#include "student.h"


void CSelect::Select()
{






    ifstream  afile;
    afile.open("E:\\ccode\\stu\\student.txt", ios::in);
    ifstream statusfile("E:\\ccode\\stu\\status.txt",ios :: in );
    statusfile >> tag;

    int i;
    int n;
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


        for (i;i <tag;++i)

        {
               afile >> st[i].num >> st[i].name >> st[i].gender>> st[i].phone >> st[i].address;



               if(st[i].num==n)
               {


                    flag=1;
                    k = i;
                    goto stop;


//                ss.Display_report(n);
                }


        }
        stop:
        cout << st[k].num << st[k].name<<st[k].phone<<st[k].gender<<st[k].address<<endl;
        if(flag==0)
        {

            cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tstudent NOT FOUND!";
            cout<<"\n\n\n\n\n\n\n\n";
        }
        cout<<"select sucess"<<endl;

    }
    afile.close();
    statusfile.close();


}

