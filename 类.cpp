//
//Created by 张益铭 on 3/27/2022.
//Copyright (C) 2022. All Rights Reserved.
//

#include <iostream>

using namespace std;

class Box {
public:
    double length;
    double breadth;
    double height;

    //成员函数声明
    double getVolume() const;

    void set(double len, double bre, double hei);
};

//成员函数定义
double Box::getVolume() const {
    return length * breadth * height;
}

void Box::set(double len, double bre, double hei) {
    length = len;
    breadth = bre;
    height = hei;
}

int main() {
    Box Box1{};
    Box Box2{};
    Box Box3{};
    double volume;  //存体积

    Box1.height = 5.0;
    Box1.length = 6.0;
    Box1.breadth = 7.0;

    Box2.height = 10.0;
    Box2.length = 12.0;
    Box2.breadth = 13.0;

    volume = Box1.getVolume();
    cout << "Box1 的体积：" << volume << endl;

    volume = Box2.getVolume();
    cout << "Box2 的体积：" << volume << endl;

    Box3.set(16.0, 8.0, 12.0);
    volume = Box3.getVolume();
    cout << "Box3 的体积：" << volume << endl;

    return 0;
}
