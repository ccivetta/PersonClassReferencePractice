//
// Created by Chris Civetta on 10/11/19.
//

#include "Person.h"
Person::~Person() {

}

Person::Person(int a, int h, int w, const std::string n) {
    age = a;
    height = h;
    weight = w;
    name = n;
}

Person::Person() {
    age = 0;
    height = 0;
    weight = 0;
    name = "";
}
void Person::setName(std::string x){
    name = x;
}
