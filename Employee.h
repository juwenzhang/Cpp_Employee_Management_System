// ��ͨ��Ա���ļ�
#pragma once
#include "Worker.h"
using namespace std;

// ʵ�ּ̳����ǵĳ�����
class Employee :public Worker {
public:
	Employee(int id, string name, int deptId);

	// ��ʼʵ����д���ǵĴ��麯��
	virtual void ShowDetailInfo();

	virtual string getDeptName();

	~Employee();
};