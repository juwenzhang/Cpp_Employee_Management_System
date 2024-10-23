#pragma once  // ��ֹͷ�ļ��ظ�����
#include<iostream>  // �������������
#include "Worker.h"
#include "Manage.h"
#include "Employee.h"
#include "Boss.h"
#include<fstream>
using namespace std;  // ʹ�ñ�׼�����ռ�

constexpr auto FILENAME = "empFile.txt";

class WorkerManage {
public:
	WorkerManage();  // �������캯��

	void Show_Menu();  // ʵ������չʾ�˵��ĺ���

	void Exit_System();  // ʵ���˳�ϵͳ�Ĳ���

	void add_Emp();  // ʵ�ֵ������ְ������Ϣ�ĺ���

	void save();  // ʵ�ֵ��Ǳ����ļ��ĺ���
	
	~WorkerManage();  // ������������


	// ��¼ְ��������
	int m_EmpNum;

	// ְ���������ָ��
	Worker** m_EmpArray;
};