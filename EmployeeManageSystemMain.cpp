#include<iostream>
#include "workerManage.h"
#include "Worker.h"
#include "Employee.h"
#include "Manage.h"
using namespace std;

// ��ʼʵ����д���ǵĳ����ִ������ļ�
int main() {
	// ���Դ���
	Worker* worker = NULL;
	worker = new Employee(1, "juwenzhang", 2);
	worker->ShowDetailInfo();

	Worker* worker01 = NULL;
	worker01 = new Manage(1, "76433", 2);
	worker01->ShowDetailInfo();

	Worker* worker02 = NULL;
	worker02 = new Manage(1, "ˮ���ŷ�", 2);
	worker02->ShowDetailInfo();


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