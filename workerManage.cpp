#include "workerManage.h"

// 构造函数功能的完善
WorkerManage::WorkerManage() {
	cout << "构造函数的实现" << endl;
}

void WorkerManage::Show_Menu() {
	cout << "******************************" << endl;
	cout << "**** 欢迎来到职工管理系统 ****" << endl;
	cout << "******* 0. 退出管理程序 ******" << endl;
	cout << "******* 1. 增加员工信息 ******" << endl;
	cout << "******* 2. 显示员工信息 ******" << endl;
	cout << "******* 3. 删除离职员工 ******" << endl;
	cout << "******* 4. 修改职工信息 ******" << endl;
	cout << "******* 5. 查找职工信息 ******" << endl;
	cout << "******* 6. 按照编号排序 ******" << endl;
	cout << "******* 7. 清空所有文档 ******" << endl;
	cout << "******************************" << endl;
	cout << endl;
}

// 析构函数功能的实现
WorkerManage:: ~WorkerManage() {
	cout << "析构函数的实现" << endl;
}