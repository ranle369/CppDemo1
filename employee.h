#pragma once 
#include<iostream>
using namespace std;
#include "worker.h"
#include <string>

class employee:public Worker
{
public:
	employee(int id, string name, int deptId);

	virtual void showInfo();

	virtual string	getDeptName();
};

