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


        loop:for (i;i <tag;++i)

        {
               afile >> st[i].num >> st[i].name >> st[i].gender>> st[i].phone >> st[i].address;



                if(st[i].num!=n)



                {

                        f2 <<st[i].num <<"\t"<<st[i].name<<"\t"<<st[i].gender<<"\t"<<st[i].phone<<"\t"<<st[i].address<<endl;

                        flag=1;


                    goto loop;
                }
                if(st[i].num==n)



                {



                        flag=1;


                    goto loop;
                }

            if(flag==0)
            {

               cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tstudent NOT FOUND!";
               cout<<"\n\n\n\n\n\n\n\n";
            }
            cout<<"delete sucess"<<endl;
        }

    }
    afile.close();
    statusfile.close();
    f2.close();
    remove("student.txt");
    rename("temp.txt","student.txt");

}







//    Stu s;
//    ifstream f1("E:\\ccode\\stu\\student.txt",ios :: in);
//    ofstream f2("E:\\ccode\\stu\\temp.txt",ios :: out);
//    int n,flag=0;
//    if(!f1)
//    {
//        cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tFILE NOT FOUND!";
//        cout<<"\n\n\n\n\n\n\n\n";
//    }
//    else
//    {
//        cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t";
//        cout<<"ENTER THE  THE STUDENT NUMBER: ";
//        cin>>n;
//        system("cls");



//        while(f1.read((char*)&s,sizeof(s)))
//        {
//            if(n!=s.num)
//            {
//                f2.write((char*)&s,sizeof(s));
//                flag=1;
//            }
//        }
//        if(flag==0)
//        {
//            cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tstudent NOT FOUND!";
//            cout<<"\n\n\n\n\n\n\n\n";
//        }
//        else
//        {
//             cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t";
//             cout<<"THE student WAS DELETED SUCCESSFULLY";
//             cout<<"\n\n\n\n\n\n\n\n";
//        }
//    }
//    f1.close();
//    f2.close();
//    remove("student.dat");
//    rename("temp.txt","student.dat");

//}
