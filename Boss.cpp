#include<iostream>
#include<string>
#include "Boss.h"
using namespace std;

Boss::Boss(int id, string name, int deptId) {
	this->m_id = id;
	this->name = name;
	this->m_DeptId = deptId;
}

void Boss::ShowDetailInfo() {
	cout << "ְ�����Ϊ:" << this->m_id <<
		"\t�ϰ�����Ϊ:" << this->name <<
		"\t���ű��Ϊ:" << this->getDeptName() <<
		"\t��λְ��: ������������Ȼ���ṩ���׷�" << endl;
}

string Boss::getDeptName() {
	return "�ϰ�";
}

Boss::~Boss() {

}