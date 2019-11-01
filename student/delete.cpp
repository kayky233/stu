#include <iostream>
#include <fstream>

using namespace std;
#include "delete.h"
#include "student.h"

void CDelete::Del(void)
{

    Stu s;
    ifstream f1("student.dat");
    ofstream f2("temp.txt",ios::binary);
    int n,flag=0;
    if(!f1)
    {
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tFILE NOT FOUND!";
        cout<<"\n\n\n\n\n\n\n\n";
    }
    else
    {
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t";
        cout<<"ENTER THE  THE STUDENT NUMBER: ";
        cin>>n;
        system("cls");
        while(f1.read((char*)&s,sizeof(s)))
        {
            if(n!=s.num)
            {
                f2.write((char*)&s,sizeof(s));
                flag=1;
            }
        }
        if(flag==0)
        {
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tstudent NOT FOUND!";
            cout<<"\n\n\n\n\n\n\n\n";
        }
        else
        {
             cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t";
             cout<<"THE student WAS DELETED SUCCESSFULLY";
             cout<<"\n\n\n\n\n\n\n\n";
        }
    }
    f1.close();
    f2.close();
    remove("student.dat");
    rename("temp.txt","student.dat");

}
