#ifndef CSTUDENT_H
#define CSTUDENT_H
#include "bro.h"
#include "insert.h"
#include "select.h"

#include "delete.h"
#include "update.h"

#include <iostream>
#include <fstream>
#include <stdio.h>

using namespace std;

struct Stu
{
    bool delTag;//删除标志

    char name[20];
    char gender[10];
    char phone[20];
    char address[100];
    int num;//student id
};
extern struct Stu st[100];
extern ofstream outfile;
extern int tag;
extern int ftag;





class CStudent
{

public:
      void Browse();
      void Insert();
      void Select();
      int Display_report(int a);
      void Del();
      void Update();
//      void menu();
      void Enter();




private:

    CBro            m_Bro;//m:member
    CInsert         m_Insert;
    CSelect         m_Select;

    CDelete         m_Del;
    CUpdate         m_Upd;






};

#endif // CSTUDENT_H
