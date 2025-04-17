#include <iostream>
using namespace std;
#include "employee.h"

employee::employee(int id, string name, int deptId) {
	this->Id = id;
	this->Name = name;
	this->DeptId = deptId;
}

void employee::showInfo() {
	cout << "职工编号： " << this->Id
		<< " \t职工姓名： " << this->Name
		<< " \t岗位：" << this->getDeptName()
		<< " \t岗位职责：完成经理交给的任务" << endl;
}

string	employee::getDeptName() {
	return string("员工");
}