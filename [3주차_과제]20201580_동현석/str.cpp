#include"head.h"

Str::Str(int leng){
	str=new char[leng];
}

Str::Str(const char* neyong){
	len=strlen(neyong)+1;
	str=new char[len];
	strcpy(str, neyong);
}

Str::~Str(){
	delete[] str;
}

int Str::length(){
	return len;
}

char* Str::contents(){
	return str;
}

int Str::compare(class Str& a){
	return strcmp(str, a.contents());
}

int Str::compare(const char *a){
	return strcmp(str, a);
}

void Str::operator=(const char *a){
	delete[] str;
	len=strlen(a)+1;
	str=new char[len];
	strcpy(str, a);
}

void Str::operator=(class Str& a){
	delete[] str;
	len=strlen(a.contents())+1;
	str=new char[len];
	strcpy(str, a.contents());
}
