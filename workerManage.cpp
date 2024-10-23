#include "workerManage.h"

// ���캯�����ܵ�����
WorkerManage::WorkerManage() {
	this->m_EmpNum = 0;
	this->m_EmpArray = NULL;
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


void WorkerManage::Exit_System() {
	cout << "��ӭ�´ε���" << endl;
	system("pause");
	exit(0);  // ���Ǳ�ʾ���ǲ��ܳ����ںδ���ֱ���˳�
}


void WorkerManage::add_Emp() {
	cout << "���������ְ��������" << endl;
	int addNum = 0;
	cin >> addNum;

	if (addNum > 0) {
		// ��ʼʵ�ּ������ǵ���Ҫ��ӵ��¿ռ��С�� ԭ�������� + ���ڵ�����
		int newSize = this->m_EmpNum + addNum;

		// ��ʼʵ�ֿ����¿ռ�
		Worker** newSpace = new Worker * [newSize];

		// ��ԭ��������ʵ�ֿ��������ǵ����ڵ��µĿռ���
		if (this->m_EmpArray != NULL) {
			for (int i = 0; i < this->m_EmpNum; i++) {
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		// ��ʼʵ��������ǵ��µ�����
		for (int i = 0; i < addNum; i++) {
			int id; // ְ�����
			string name;  // ְ������
			int dSelect;  // ����ѡ��

			cout << "������" << i + 1 << "����ְ�����:" << endl;
			cin >> id;
			
			cout << "������" << i + 1 << "����ְ������" << endl;
			cin >> name;
			
			cout << "��ѡ����ְ���ĸ�λ: " << endl;
			cout << "1. ��ͨԱ��" << endl;
			cout << "2. ����" << endl;
			cout << "3. �ϰ�" << endl;
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
				cout << "�����д�����������..." << endl;
				break;
			}

			// Ȼ�����ǵ�ְ����ָ��ʵ�ֱ��浽ָ��������
			newSpace[this->m_EmpNum + i] = worker;
		}
		// �ͷ�ԭ�еĿռ�
		delete[] this->m_EmpArray;
		// �����µĿռ�
		this->m_EmpArray = newSpace;
		// �����µ�ְ������
		this->m_EmpNum = newSize;
		
		cout << "�ɹ������" << addNum << "����ְ��" << endl;
		this->save();  // ʵ�ֱ������ݵ��ļ���
	}
	else {
		cout << "������������������..." << endl;
	}

	system("pause");
	system("cls");
}


void WorkerManage::save() {
	ofstream ofs;

	ofs.open(FILENAME, ios::out);  // ��ʼʵ�����ǵ�д�ļ�

	for (int i = 0; i < this->m_EmpNum; i++) {
		ofs << this->m_EmpArray[i]->m_id << " "
			<< this->m_EmpArray[i]->name << " "
			<< this->m_EmpArray[i]->m_DeptId << endl;
 	}

	ofs.close();
}


// �����������ܵ�ʵ��
WorkerManage:: ~WorkerManage() {
	if (this->m_EmpArray != NULL) {
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}