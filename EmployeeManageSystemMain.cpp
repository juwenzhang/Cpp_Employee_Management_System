#include<iostream>
#include "workerManage.h"
#include "Worker.h"
#include "Employee.h"
using namespace std;

// ��ʼʵ����д���ǵĳ����ִ������ļ�
int main() {
	// ���Դ���
	Worker* worker = NULL;
	worker = new Employee(1, "juwenzhang", 2);
	worker->ShowDetailInfo();


	// ʵ����һ��������Ķ���
	WorkerManage workerMange;
	
	int user_choice = 0;

	while(true) {
		workerMange.Show_Menu();
		cout << "���������ѡ��:" << endl;
		cin >> user_choice;

		switch (user_choice) {
		case 0:
			// �˳�����
			workerMange.Exit_System();
			break;
		case 1:
			// ���ְ��
			break;
		case 2:
			// ��ʾְ��
			break;
		case 3:
			// ɾ��ְ��
			break;
		case 4:
			// �޸�ְ��
			break;
		case 5:
			// ����ְ��
			break;
		case 6:
			// �������
			break;
		case 7:
			// �����Ϣ
			break;
		default:
			system("cls");
			break;
		}
	}

	system("pause");
	return 0;
}