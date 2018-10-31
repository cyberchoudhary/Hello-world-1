#include<iostream>
using namespace std;
class Student
{
     public:
       int a;
};

class Test : public Student
{
    public:
       int b;
};
class Sports  : public Student
{
   public:
       int c;
};

class Performance : public Test, public Sports
{
       public:
       int d;
};

int main()
{

	Performance obj;

	obj.Test::a = 10;
	obj.Sports::a = 100;
	obj.b = 20;
       obj.c = 30;
       obj.d = 40;
       cout<< "\n A from Test  : "<< obj.Test::a;
	cout<< "\n A from Sports  : "<< obj.Sports::a;
	cout<< "\n B : "<< obj.b;
	cout<< "\n C : "<< obj.c;
	cout<< "\n D : "<< obj.d;
       cout<<endl;
}
