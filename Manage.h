// 开始实现完成我们的经理类
#pragma once
#include "Worker.h"
using namespace std;

class Manage : public Worker {
public:
	Manage(int id, string name, int deptId);

	virtual void ShowDetailInfo();

	virtual string getDeptName();

	~Manage();
};