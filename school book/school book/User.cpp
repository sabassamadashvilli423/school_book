#include "User.h"
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
void User:: View_adm()
{
    ofs << fname << " " << lname << " " << ID << endl;
}
void User:: View_tea()
{
    ofs << fname << " " << lname << " " << ID << " " << classes_they_teach << " " << subject << endl;
}
void User:: View_stu()
{
    ofs << fname << " " << lname << " " << ID << " " << classes_they_teach  << " " << subject << endl;
}
