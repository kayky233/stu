#include <iostream>
#include <fstream>

using namespace std;
#include "bro.h"
#include "student.h"


void CBro::Browse(void)
{

    struct Stu s;
    int i;
    i = 0;



    string data;

    ifstream infile("E:\\ccode\\gerrit-repos\\demo\\stumg\\stumanage\\student.txt",ios :: in |ios :: binary);
    if(!infile)
    {
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tFILE NOT FOUND!";
        cout<<"\n\n\n\n\n\n\n\n";
    }
    else
    {
        cout<<"\t\t\t  ---------------------------"<<"\n";
        cout<<"\t\t\t     LIST OF CLASS STUDENTS"<<"\n";
        cout<<"\t\t\t  ---------------------------"<<"\n\n";
        cout << "Reading from the file" << endl;


//    while(!infile.eof())
//    {
//        infile >> st[i].name;
//        cout << st[i].name;
//        infile >> st[i].num;
//        cout << st[i].num;
//        infile >> st[i].phone;
//        cout << st[i].phone;
//        infile >> st[i].gender;
//        cout << st[i].gender;
//        infile >> st[i].address;
//        cout << st[i].gender;

//        i ++;
//    }




        while(infile.read((char *)&s,sizeof (s)))

        {

            cout <<s.num << "   "<<s.name << "   "<<s.phone << "   "<<s.gender << "   "<< s.address <<endl;
        }

        infile.close();



}
}

