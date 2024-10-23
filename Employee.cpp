#include "Employee.h"

Employee::Employee(int m_id, string name, int deptId) {
	this->m_id = m_id;
	this->name = name;
	this->m_DeptId = deptId;
}

void Employee::ShowDetailInfo() {
	cout << "职工编号为:" << this->m_id <<
		  "\t职工姓名为:" << this->name <<
		  "\t部门编号为:" << this->getDeptName() << 
		  "\t岗位职责: 完成经理交给的任务" << endl;
}

string Employee::getDeptName() {
	return string("普通员工");
}

Employee::~Employee() {

}