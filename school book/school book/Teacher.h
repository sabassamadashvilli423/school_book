#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include"User.h"
#include<vector>
#include"Student.h"
using namespace std;
class Teacher : public User
{
public: User u;
      vector<int> classes_they_teach;
      string subject;
      Teacher(User u, vector<int> classes_they_teach, string subject);
      Teacher();
      ~Teacher();
};

