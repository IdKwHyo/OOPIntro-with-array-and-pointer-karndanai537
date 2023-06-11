#include <iostream>
using namespace std;
#define N 3

#include "student.h"

int main(int argc, char* argv[]) {
  student s1,s2;
  student a[N];
  student *p; //example: (*p).print_name();
  int i, age;
  string n;

  for(i=0; i<N; i++)
    {
      cout<<"What is your name? ";
      cin>>n;
      a[i].set_name(n);
      cout<<"What is your age? ";
      a[i].set_age(age);
    }
  
  for(i=0; i<N; i++)
    {
      cout<<"Student: "<<i+1<<endl;
      //a[i].print_name();
      //cout<<"Age: "<<a[i].get_age();
      a[i].print_all();
    }
  
  int young=a[0].get_age();
  
  for (i=1; i<N;i++) //find the youngest person
    {
      if(a[i].get_age() < young)
        young = a[i].get_age();
    }
  
  cout<<"Youngest people: "<<endl;
  
  for(i=1;i<N;i++)  //print out the information of the person with the youngest age
    {
      if(a[i].get_age() == young)
        a[i].print_all();
    }
  
 // s1.name="PUN";  // ERROR, it is in private
    s1.set_name("Pun");       
    //s1.set_name();     //make default value for name
    s1.set_age(20); 
        s2.set_name("Joe");
    s2.set_age(17);
        
    s1.print_name();
    s2.print_name(); 

    if (s1.get_age()>s2.get_age())
    {
      s1.print_name();
    }
  else
    {
      s2.print_name();
    }
  cout<<"is older";
  }