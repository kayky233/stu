#include <iostream>
#include <fstream>
#include <stdio.h>

using namespace std;
#include "insert.h"
#include "student.h"



void CInsert::Insert(void)
{






    int n,i;


    cout << "n =";
    cin >> n;


    // 以写模式打开文件
    ofstream outfile;
    outfile.open("E:\\ccode\\stu\\student.txt",ios::out |  ios :: app );
    for (i =tag;i<tag+n;i ++)
    {





    cout << "Writing to the file" << endl;

    cout<<"\t\t Student'S id          : ";

    cin >> st[i].num;



    cout<<"\t\t Student'S NAME          : ";
    cin >> st[i].name;


    cout<<"\t\t Student'S gender          : ";
    cin >> st[i].gender;


    cout<<"\t\t Student'S phone          : ";
    cin >> st[i].phone;


    cout<<"\t\t Student'S sddress          : ";
    cin >> st[i].address;

    outfile <<st[i].num <<"\t"<<st[i].name<<"\t"<<st[i].gender<<"\t"<<st[i].phone<<"\t"<<st[i].address<<endl;







    }
    tag = tag +n;





    outfile.close();
}
//char num[20];//student id
//char name[20];
//char gender[4];
//float phone[20];
//char address[100];
