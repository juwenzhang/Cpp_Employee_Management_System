#include "Manage.h"
#include<string>

Manage::Manage(int m_id, string name, int deptId) {
	this->m_id = m_id;
	this->name = name;
	this->m_DeptId = deptId;
}

void Manage::ShowDetailInfo() {
	cout << "经理编号为:" << this->m_id <<
		"\t经理姓名为:" << this->name <<
		"\t部门编号为:" << this->getDeptName() <<
		"\t岗位职责: 分配老板交给的任务并且完成任务" << endl;
}

string Manage::getDeptName() {
	return string("经理");
}

Manage::~Manage() {
	
}