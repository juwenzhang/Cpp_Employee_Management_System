#include "Employee.h"

Employee::Employee(int m_id, string name, int deptId) {
	this->m_id = m_id;
	this->name = name;
	this->m_DeptId = deptId;
}

void Employee::ShowDetailInfo() {
	cout << "ְ�����Ϊ:" << this->m_id <<
		  "  ְ������Ϊ:" << this->name <<
		  "  ���ű��Ϊ:" << this->getDeptName() << 
		  "  ��λְ��: ��ɾ�����������" << endl;
}

string Employee::getDeptName() {
	return "��ͨԱ��";
}

Employee::~Employee() {

}