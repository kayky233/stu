#include <iostream>
#include <fstream>

using namespace std;
#include "delete.h"
#include "student.h"

void CDelete::Del(void)
{

    ifstream  afile;
    afile.open("E:\\ccode\\stu\\student.txt", ios::in);
    ifstream statusfile("E:\\ccode\\stu\\status.txt",ios :: in );
    statusfile >> tag;
    ofstream f2("E:\\ccode\\stu\\temp.txt",ios :: out);

    int i;
    int n;

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


        for (i=0;i <tag;)

        {
                afile >> st[i].num >> st[i].name >> st[i].gender>> st[i].phone >> st[i].address;



                if(st[i].num!=n)



                {

                        f2 <<st[i].num <<"\t"<<st[i].name<<"\t"<<st[i].gender<<"\t"<<st[i].phone<<"\t"<<st[i].address<<endl;

                        flag=1;
                        i++;



                }
                if(st[i].num==n)



                {
                        i++;
                        tag--;


                        flag=1;



                }

            if(flag==0)
            {

               cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tstudent NOT FOUND!";
               cout<<"\n\n\n\n\n\n\n\n";
            }

        }

    }
    cout<<"delete sucess"<<endl;
    afile.close();
    statusfile.close();
    f2.close();
    remove("E:\\ccode\\stu\\student.txt");
    rename("E:\\ccode\\stu\\temp.txt","E:\\ccode\\stu\\student.txt");

}






