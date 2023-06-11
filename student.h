#include <iostream>
using namespace std;

class student
{
private: 
  long id;
  string name;
  int age;

public: 
  void set_name(string="A name");
  void print_name();
  void set_age(int age=0);
  void print_all();
  int get_age();
};

void student::set_name(string n)
{
  name=n;
}

void student::print_name()
{
  cout<<"Name: "<<name<<endl;
}

void student::set_age(int a)
{
  age=a;
}

int student::get_age()
{
  return age;
  //well done^^
}