// 普通的员工文件
#pragma once
#include "Worker.h"
using namespace std;

// 实现继承我们的抽象类
class Employee :public Worker {
public:
	Employee(int id, string name, int deptId);

	// 开始实现重写我们的纯虚函数
	virtual void ShowDetailInfo();

	virtual string getDeptName();

	~Employee();
};