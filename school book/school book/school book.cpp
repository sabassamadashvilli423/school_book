#include<iostream>
#include"Assignment.h"
#include"Student.h"
#include"Teacher.h"
#include"User.h"
#include<vector>
#include<string>
int main() {
	vector<Student> s;
	vector<Teacher> t;
	vector<Assignment> a;
	vector<User> u;
	string fname, lname, ID;
	cout << "which type of user would you like to log in to" << endl;
	cin >> fname >> lname >> ID;
	for (int i = 0; i < s.size();i++) {
		if (s[i].fname == fname && s[i].lname == lname && s[i].ID = ID) {

		}
	}
}
