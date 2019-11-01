#include <iostream>
#include <fstream>

using namespace std;
#include "update.h"
#include "student.h"

void CUpdate::Update(void)
{
    CStudent ss;

    Stu s;
    ifstream f1("student.dat");
    ofstream f2("Temp.dat",ios::binary);
    int n,flag=0;
    if(!f1)
    {
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tFILE NOT FOUND!";
        cout<<"\n\n\n\n\n\n\n\n";
    }
    else
    {
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t";
        cout<<"ENTER THE ROLL NUMBER OF THE STUDENT: ";
        cin>>n;
        system("cls");
        while(f1.read((char*)&s,sizeof(s)))
        {
            if(n==s.num)
            {
                cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t";
                cout<<"ENTER THE MODIFIED DETAILS OF THE STUDENT";

                system("cls");
                ss.Enter();

                f2.write((char*)&s,sizeof(s));
                flag=1;
            }
            else
            {
                f2.write((char*)&s,sizeof(s));
            }
        }
        if(flag==0)
        {
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tstudent NOT FOUND!";
            cout<<"\n\n\n\n\n\n\n\n";
        }
    }
    f1.close();
    f2.close();
    remove("student.dat");
    rename("Temp.dat","student.dat");
}
