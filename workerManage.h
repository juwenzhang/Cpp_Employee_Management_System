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

	int get_Num(); // ͳ�Ƴ�Ա�����ĺ���

	void init_Emp();  // ʵ�ֳ�ʼ������

	void show_Emp(); // ʵ��չ��Ա������Ϣ�ĺ���

	int IsExist(int id);  // �ж�ְ���Ƿ����

	void Del_Emp();  // ʵ�ֵ���ɾ��ְ���Ĺ���

	void Mod_Emp();  // �޸�ְ���Ĺ��� 
	
	~WorkerManage();  // ������������

	int m_EmpNum;  // ��¼ְ��������

	Worker** m_EmpArray;  // ְ���������ָ��

	bool m_FileEmpty;  // ����ʵ�ֵ����ж������Ƿ�Ϊ�յı�־
};