#pragma once  // 防止头文件重复包含
#include<iostream>  // 包含输入输出流
using namespace std;  // 使用标准命名空间

class WorkerManage {
public:
	WorkerManage();  // 声明构造函数

	void Show_Menu();  // 实现声明展示菜单的函数

	void Exit_System();  // 实现退出系统的操作
	
	~WorkerManage();  // 声明析构函数
};