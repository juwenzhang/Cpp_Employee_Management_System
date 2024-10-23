// 开始实现我们的老板类的实现
#pragma once
#include "Worker.h"
using namespace std;

class Boss : public Worker {
public:
	Boss(int id, string name, int deptId);

	// 开始实现重写我们的纯虚函数
	virtual void ShowDetailInfo();

	virtual string getDeptName();

	~Boss();
};