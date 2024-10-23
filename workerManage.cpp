#include "workerManage.h"

// 构造函数功能的完善
WorkerManage::WorkerManage() {
	this->m_EmpNum = 0;
	this->m_EmpArray = NULL;
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


void WorkerManage::Exit_System() {
	cout << "欢迎下次到来" << endl;
	system("pause");
	exit(0);  // 就是表示的是不管程序在何处都直接退出
}


void WorkerManage::add_Emp() {
	cout << "请输入添加职工的数量" << endl;
	int addNum = 0;
	cin >> addNum;

	if (addNum > 0) {
		// 开始实现计算我们的需要添加的新空间大小： 原来的人数 + 现在的人数
		int newSize = this->m_EmpNum + addNum;

		// 开始实现开辟新空间
		Worker** newSpace = new Worker * [newSize];

		// 将原来的数据实现拷贝到我们的现在的新的空间下
		if (this->m_EmpArray != NULL) {
			for (int i = 0; i < this->m_EmpNum; i++) {
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		// 开始实现添加我们的新的数据
		for (int i = 0; i < addNum; i++) {
			int id; // 职工编号
			string name;  // 职工姓名
			int dSelect;  // 部门选择

			cout << "请输入" << i + 1 << "个新职工编号:" << endl;
			cin >> id;
			
			cout << "请输入" << i + 1 << "个新职工姓名" << endl;
			cin >> name;
			
			cout << "请选择新职工的岗位: " << endl;
			cout << "1. 普通员工" << endl;
			cout << "2. 经理" << endl;
			cout << "3. 老板" << endl;
			Worker* worker = NULL;
			cin >> dSelect;
			switch (dSelect) {
			case 1:
				worker = new Employee(id, name, dSelect);
				break;
			case 2:
				worker = new Manage(id, name, dSelect);
				break;
			case 3:
				worker = new Boss(id, name, dSelect);
				break;
			default:
				cout << "输入有错，请重新输入..." << endl;
				break;
			}

			// 然后将我们的职工的指针实现保存到指针数组中
			newSpace[this->m_EmpNum + i] = worker;
		}
		// 释放原有的空间
		delete[] this->m_EmpArray;
		// 更新新的空间
		this->m_EmpArray = newSpace;
		// 更新新的职工人数
		this->m_EmpNum = newSize;
		
		cout << "成功添加了" << addNum << "名新职工" << endl;
		this->save();  // 实现保存数据到文件中
	}
	else {
		cout << "输入有误，请重新输入..." << endl;
	}

	system("pause");
	system("cls");
}


void WorkerManage::save() {
	ofstream ofs;

	ofs.open(FILENAME, ios::out);  // 开始实现我们的写文件

	for (int i = 0; i < this->m_EmpNum; i++) {
		ofs << this->m_EmpArray[i]->m_id << " "
			<< this->m_EmpArray[i]->name << " "
			<< this->m_EmpArray[i]->m_DeptId << endl;
 	}

	ofs.close();
}


// 析构函数功能的实现
WorkerManage:: ~WorkerManage() {
	if (this->m_EmpArray != NULL) {
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}