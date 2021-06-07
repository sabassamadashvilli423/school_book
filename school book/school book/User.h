#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include"Teacher.h"
using namespace std;
class User: public Teacher
{
public: string fname, lname;
	  int ID;
	  ofstream ofs;
	  ifstream ifs;
	  User(string fname, string lname, int id);
	  User();
	  ~User();
	  void Add();
	  void View_adm();
	  void View_tea();
	  void View_stu();
};

