#pragma once
#include<iostream>
#include<string.h>
using namespace std;

// 职工抽象类
class Worker {
public:
	// 显示个人信息
	virtual void ShowDetailInfo() = 0;

	// 显示岗位名称
	virtual string getDeptName() = 0;
	
	// 职工编号
	int m_id;
	// 职工姓名
	string name;
	// 部门编号
	int m_DeptId;
};