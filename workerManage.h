#pragma once  // ��ֹͷ�ļ��ظ�����
#include<iostream>  // �������������
#include "Worker.h"
#include "Manage.h"
#include "Employee.h"
#include "Boss.h"
using namespace std;  // ʹ�ñ�׼�����ռ�

class WorkerManage {
public:
	WorkerManage();  // �������캯��

	void Show_Menu();  // ʵ������չʾ�˵��ĺ���

	void Exit_System();  // ʵ���˳�ϵͳ�Ĳ���

	void add_Emp();
	
	~WorkerManage();  // ������������


	// ��¼ְ��������
	int m_EmpNum;

	// ְ���������ָ��
	Worker** m_EmpArray;
};