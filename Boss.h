// ��ʼʵ�����ǵ��ϰ����ʵ��
#pragma once
#include "Worker.h"
using namespace std;

class Boss : public Worker {
public:
	Boss(int id, string name, int deptId);

	// ��ʼʵ����д���ǵĴ��麯��
	virtual void ShowDetailInfo();

	virtual string getDeptName();

	~Boss();
};