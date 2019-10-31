#include <iostream>
#include <fstream>
#include <stdio.h>

using namespace std;
#include "insert.h"
#include "student.h"



void CInsert::Insert(void)
{



    struct Stu st[100];

    int n,i;

    cout << "n =";
    cin >> n;


    // 以写模式打开文件
    ofstream outfile;
    outfile.open("E:\\ccode\\gerrit-repos\\demo\\stumg\\stumanage\\student.txt",ios::out |  ios :: app);
    for (i =0;i< n;i ++)
    {




    cout << "Writing to the file" << endl;

    cout<<"\t\t Student'S id          : ";
    cin >>st[i].num;

    cout<<"\t\t Student'S NAME          : ";
    cin >>st[i].name;

    cout<<"\t\t Student'S gender          : ";
    cin >>st[i].gender;

    cout<<"\t\t Student'S phone          : ";
    cin >>st[i].phone;

    cout<<"\t\t Student'S sddress          : ";
    cin >>st[i].address;



    outfile.write((char*)&st[i],sizeof(st[i]));

    }




    outfile.close();
}
//char num[20];//student id
//char name[20];
//char gender[4];
//float phone[20];
//char address[100];
