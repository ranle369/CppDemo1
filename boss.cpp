#include "boss.h"

Boss::Boss(int id, string name, int dId)
{
	this->Id = id;
	this->Name = name;
	this->DeptId = dId;

}

void Boss::showInfo()
{
	cout << "ְ����ţ� " << this->Id
		<< " \tְ�������� " << this->Name
		<< " \t��λ��" << this->getDeptName()
		<< " \t��λְ�𣺹���˾��������" << endl;
}

string Boss::getDeptName()
{
	return string("�ܲ�");
}
