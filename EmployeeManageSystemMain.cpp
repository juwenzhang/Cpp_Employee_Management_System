#include<iostream>
#include "workerManage.h"
using namespace std;

// 开始实现书写我们的程序的执行入口文件
int main() {

	// 实例化一个管理类的对象
	WorkerManage workerMange;
	workerMange.Show_Menu();

	system("pause");
	return 0;
}