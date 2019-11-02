#include <iostream>
#include <fstream>

using namespace std;
#include "update.h"
#include "student.h"

void CUpdate::Update(void)
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





                    f2 <<st[i].num <<"\t"<<st[i].name<<"\t"<<st[i].gender<<"\t"<<st[i].phone<<"\t"<<st[i].address<<endl;



                    flag=1;
                    i++;



                }

            if(flag==0)
            {

               cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tstudent NOT FOUND!";
               cout<<"\n\n\n\n\n\n\n\n";
            }

        }

    }
    cout<<"update sucess"<<endl;
    afile.close();
    statusfile.close();
    f2.close();
    remove("E:\\ccode\\stu\\student.txt");
    rename("E:\\ccode\\stu\\temp.txt","E:\\ccode\\stu\\student.txt");
}










//    CStudent ss;

//    Stu s;
//    ifstream f1("student.dat");
//    ofstream f2("Temp.dat",ios::binary);
//    int n,flag=0;
//    if(!f1)
//    {
//        cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tFILE NOT FOUND!";
//        cout<<"\n\n\n\n\n\n\n\n";
//    }
//    else
//    {
//        cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t";
//        cout<<"ENTER THE ROLL NUMBER OF THE STUDENT: ";
//        cin>>n;
//        system("cls");
//        while(f1.read((char*)&s,sizeof(s)))
//        {
//            if(n==s.num)
//            {
//                cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t";
//                cout<<"ENTER THE MODIFIED DETAILS OF THE STUDENT";

//                system("cls");
//                ss.Enter();

//                f2.write((char*)&s,sizeof(s));
//                flag=1;
//            }
//            else
//            {
//                f2.write((char*)&s,sizeof(s));
//            }
//        }
//        if(flag==0)
//        {
//            cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tstudent NOT FOUND!";
//            cout<<"\n\n\n\n\n\n\n\n";
//        }
//    }
//    f1.close();
//    f2.close();
//    remove("student.dat");
//    rename("Temp.dat","student.dat");
//}
