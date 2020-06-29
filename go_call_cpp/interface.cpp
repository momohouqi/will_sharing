#include "imp.hpp"
#include "interface.h"

Persion PersionInit(int age, char* name) {
	CppPersion * ret = new CppPersion(age, name);
	return (void*)ret;
}

void PersionFree(Persion f) {
	CppPersion * p= (CppPersion*)f;
	delete p;
}

void sayHi(Persion f) {
	CppPersion * p = (CppPersion*)f;
	p->sayHi();
}

const char* info(Persion f) {
	CppPersion * p = (CppPersion*)f;
	std::string res = p->info();
	return res.c_str();

}

