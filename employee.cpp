#include <iostream>
using namespace std;
#include "employee.h"

employee::employee(int id, string name, int deptId) {
	this->Id = id;
	this->Name = name;
	this->DeptId = deptId;
}

void employee::showInfo() {
	cout << "ְ����ţ� " << this->Id
		<< " \tְ�������� " << this->Name
		<< " \t��λ��" << this->getDeptName()
		<< " \t��λְ����ɾ�����������" << endl;
}

string	employee::getDeptName() {
	return string("Ա��");
}