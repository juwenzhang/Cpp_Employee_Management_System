#include<iostream>
#include "workerManage.h"
#include "Worker.h"
#include "Employee.h"
#include "Manage.h"
#include "test.h"
using namespace std;

// 开始实现书写我们的程序的执行入口文件
int main() {

	// test();

	// 实例化一个管理类的对象
	WorkerManage workerMange;
	
	int user_choice = 0;

	while(true) {
		workerMange.Show_Menu();
		cout << "请输入你的选择:" << endl;
		cin >> user_choice;

		switch (user_choice) {
		case 0:
			// 退出功能
			workerMange.Exit_System();
			break;
		case 1:
			workerMange.add_Emp();
			// 添加职工
			break;
		case 2:
			// 显示职工
			break;
		case 3:
			// 删除职工
			break;
		case 4:
			// 修改职工
			break;
		case 5:
			// 查找职工
			break;
		case 6:
			// 序号排序
			break;
		case 7:
			// 清空信息
			break;
		default:
			system("cls");
			break;
		}
	}

	system("pause");
	return 0;
}