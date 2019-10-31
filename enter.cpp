#include <iostream>
#include <fstream>

#include<conio.h>

#include<string.h>
#include<process.h>
#include<windows.h>

using namespace std;
#include "enter.h"
#include "student.h"

void CEnter::Enter()
{

    Stu sarray[5];

    // 以写模式打开文件
    ofstream outfile;
    outfile.open("E:\\ccode\\gerrit-repos\\demo\\stumg\\student.txt",ios::app |  ios :: binary);

    for(int i=0;i<5;i++)
    {


    cout << "Writing to the file" << endl;

    cout<<"\t\t Student'S id          : ";
    cin >>sarray[i].num;

    cout<<"\t\t Student'S NAME          : ";
    cin >>sarray[i].name;

    cout<<"\t\t Student'S gender          : ";
    cin >>sarray[i].gender;

    cout<<"\t\t Student'S phone          : ";
    cin >>sarray[i].phone;

    cout<<"\t\t Student'S sddress          : ";
    cin >>sarray[i].address;



    outfile.write((char*)&sarray,sizeof(sarray));

    }



    outfile.close();
}
