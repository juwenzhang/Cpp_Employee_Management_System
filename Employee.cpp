#include "Employee.h"

Employee::Employee(int m_id, string name, int deptId) {
	this->m_id = m_id;
	this->name = name;
	this->m_DeptId = deptId;
}

void Employee::ShowDetailInfo() {
	cout << "ְ�����Ϊ:" << this->m_id <<
		  "\tְ������Ϊ:" << this->name <<
		  "\t���ű��Ϊ:" << this->getDeptName() << 
		  "\t��λְ��: ��ɾ�����������" << endl;
}

string Employee::getDeptName() {
	return string("��ͨԱ��");
}

Employee::~Employee() {

}