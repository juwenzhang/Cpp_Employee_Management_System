#include "workerManage.h"

// ���캯�����ܵ�����
WorkerManage::WorkerManage() {
	cout << "���캯����ʵ��" << endl;
}

void WorkerManage::Show_Menu() {
	cout << "******************************" << endl;
	cout << "**** ��ӭ����ְ������ϵͳ ****" << endl;
	cout << "******* 0. �˳�������� ******" << endl;
	cout << "******* 1. ����Ա����Ϣ ******" << endl;
	cout << "******* 2. ��ʾԱ����Ϣ ******" << endl;
	cout << "******* 3. ɾ����ְԱ�� ******" << endl;
	cout << "******* 4. �޸�ְ����Ϣ ******" << endl;
	cout << "******* 5. ����ְ����Ϣ ******" << endl;
	cout << "******* 6. ���ձ������ ******" << endl;
	cout << "******* 7. ��������ĵ� ******" << endl;
	cout << "******************************" << endl;
	cout << endl;
}

// �����������ܵ�ʵ��
WorkerManage:: ~WorkerManage() {
	cout << "����������ʵ��" << endl;
}