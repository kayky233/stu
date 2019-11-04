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


        for (i;i <tag;)

        {
               afile >> st[i].num >> st[i].name >> st[i].gender>> st[i].phone >> st[i].address;



               if(st[i].num==n)
                  {


                    flag=1;
                    k = i;
                    cout << "\t\t\tstudent number"<<"\t"<< "student name"<<"\t"<< "student gender"<<"\t"<< "student phone"<<"\t"<< "student adress"<<endl;

                    cout <<"\t\t\t"<< st[k].num<<"\t\t"<< st[k].name<<"\t\t"<< st[k].gender<<"\t\t"<< st[k].phone<<"\t\t"<< st[k].address<<endl;


                    break;




                  }
               else
                  {
                   i = i +1;

                  }


        }


        if(flag==0)
        {

            cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tstudent NOT FOUND!";
            cout<<"\n\n\n\n\n\n\n\n";
        }


    }
    afile.close();
    statusfile.close();


}

