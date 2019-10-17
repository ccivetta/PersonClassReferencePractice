//
// Created by Chris Civetta on 10/11/19.
//

#ifndef POINTERSLAB_PERSON_H
#define POINTERSLAB_PERSON_H


#include <iostream>

class Person {
public:
    int age;
    int height;int weight;
    std::string name;
    Person(int, int, int, const std::string);
    Person();
    void setName(std::string);
    ~Person();
};


#endif //POINTERSLAB_PERSON_H
