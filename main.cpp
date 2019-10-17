#include <iostream>
#include "Person.h"
using namespace std;
void PassByValue(int x){
    using namespace std;
    cout<<"Inside PassByValue"<<endl;
    x++;
    cout<<x<<endl;
}
void PassByRef(int& x){
    using namespace std;
    cout<<"Inside PassByRef"<<endl;
    x = 50;
    cout<<x<<endl;
}

void ModifyPerson(Person& p){
    p.setName("Joe");
    cout<<p.name<<endl;
}

int main() {
    using namespace std;
    int num1 = 3;
    int* pNum = new int;
    *pNum = 5;
    PassByValue(num1);
    cout<<num1<<endl;
    PassByRef(*pNum);
    cout<<*pNum<<endl;
    PassByValue(*pNum);
    cout<<*pNum<<endl;
    auto *pDouble = new double;
    *pDouble = 5.2;
    cout<<*pDouble<<endl;
    delete pDouble;
    cout<<*pDouble<<endl;
    Person *p = new Person(17, 55, 145, "Chris");
    cout<<"Age: " + to_string(p->age)<<endl;
    cout<<"Height: " + to_string(p->height)<<endl;
    cout<<"Weight: " + to_string(p->weight)<<endl;
    cout<<"Name: " + p->name<<endl;
    ModifyPerson(*p);
    cout<<"Age: " + to_string(p->age)<<endl;
    cout<<"Height: " + to_string(p->height)<<endl;
    cout<<"Weight: " + to_string(p->weight)<<endl;
    cout<<"Name: " + p->name<<endl;
    delete p;

    return 0;
}