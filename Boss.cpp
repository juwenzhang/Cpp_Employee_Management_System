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
	cout << "职工编号为:" << this->m_id <<
		"\t老板姓名为:" << this->name <<
		"\t部门编号为:" << this->getDeptName() <<
		"\t岗位职责: 交给经理任务，然后提供给甲方" << endl;
}

string Boss::getDeptName() {
	return "老板";
}

Boss::~Boss() {

}