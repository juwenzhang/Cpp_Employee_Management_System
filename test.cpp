#include<iostream>
#include "test.h"
#include "Worker.h"
#include "Manage.h"
#include "Employee.h"
#include "Boss.h"

void test() {
	// ²âÊÔ´úÂë
	Worker* worker = NULL;
	worker = new Employee(1, "juwenzhang", 2);
	worker->ShowDetailInfo();

	Worker* worker01 = NULL;
	worker01 = new Manage(1, "76433", 2);
	worker01->ShowDetailInfo();

	Worker* worker02 = NULL;
	worker02 = new Manage(1, "Ë®ÄæÐÅ·â", 2);
	worker02->ShowDetailInfo();
}