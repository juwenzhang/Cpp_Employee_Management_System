#pragma once  // 防止头文件重复包含
#include<iostream>  // 包含输入输出流
#include "Worker.h"
#include "Manage.h"
#include "Employee.h"
#include "Boss.h"
#include<fstream>
using namespace std;  // 使用标准命名空间

constexpr auto FILENAME = "empFile.txt";

class WorkerManage {
public:
	WorkerManage();  // 声明构造函数

	void Show_Menu();  // 实现声明展示菜单的函数

	void Exit_System();  // 实现退出系统的操作

	void add_Emp();  // 实现的是添加职工的信息的函数

	void save();  // 实现的是保存文件的函数

	int get_Num(); // 统计成员人数的函数

	void init_Emp();  // 实现初始化数组

	void show_Emp(); // 实现展现员工的信息的函数

	int IsExist(int id);  // 判断职工是否存在

	void Del_Emp();  // 实现的是删除职工的功能

	void Mod_Emp();  // 修改职工的功能 
	
	~WorkerManage();  // 声明析构函数

	int m_EmpNum;  // 记录职工的人数

	Worker** m_EmpArray;  // 职工的数组的指针

	bool m_FileEmpty;  // 就是实现的是判断数据是否为空的标志
};