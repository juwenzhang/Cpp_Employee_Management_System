#include "Manage.h"
#include<string>

Manage::Manage(int m_id, string name, int deptId) {
	this->m_id = m_id;
	this->name = name;
	this->m_DeptId = deptId;
}

void Manage::ShowDetailInfo() {
	cout << "������Ϊ:" << this->m_id <<
		"\t��������Ϊ:" << this->name <<
		"\t���ű��Ϊ:" << this->getDeptName() <<
		"\t��λְ��: �����ϰ彻�����������������" << endl;
}

string Manage::getDeptName() {
	return string("����");
}

Manage::~Manage() {
	
}