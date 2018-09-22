//
//  main.cpp
//  singleton
//
//  Created by 胡二雷 on 2018/9/22.
//  Copyright © 2018年 胡二雷. All rights reserved.
//

#include <iostream>
#include "singleton.h"
using namespace singleton;

class DemoSingleton : public Singleton<DemoSingleton>
{
  public:
    void Show() { cout << "this is demo singleton." << endl; }
    void Test() { cout << "this is test test demo singleton." << endl; }
};

void test_singleton()
{
  DemoSingleton::Instance().Show();
  DemoSingleton::Instance().Test();
}

int main(int argc, const char * argv[]) {
    // insert code here...
    test_singleton();
    return 0;
}
