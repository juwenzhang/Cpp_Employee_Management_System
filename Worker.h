#pragma once
#include<iostream>
#include<string.h>
using namespace std;

// ְ��������
class Worker {
public:
	// ��ʾ������Ϣ
	virtual void ShowDetailInfo() = 0;

	// ��ʾ��λ����
	virtual string getDeptName() = 0;
	
	// ְ�����
	int m_id;
	// ְ������
	string name;
	// ���ű��
	int m_DeptId;
};