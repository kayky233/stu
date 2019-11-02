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
    ofstream outstatusfile;
    outstatusfile.open("E:\\ccode\\stu\\status.txt",ios::out);
    ifstream instatusfile;
    instatusfile.open("E:\\ccode\\stu\\status.txt", ios :: in);
    instatusfile >> tag;
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

    outstatusfile <<tag <<endl;




    outfile.close();
    outstatusfile.close();
    instatusfile.close();
}

