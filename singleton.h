//
//  singleton.h
//  singleton
//
//  Created by 胡二雷 on 2018/9/22.
//  Copyright © 2018年 胡二雷. All rights reserved.
//

#ifndef singleton_h
#define singleton_h

#include <string>
#include <mutex>
#include <iostream>

using std::cout;
using std::endl;
using std::mutex;
using std::string;

namespace singleton
{
  template <typename T>
  class Singleton
  {
  public:
    static T& Instance() //1.为什么返回引用类型 --> 此内存是由Singleton自己管理，外界不需要知道具体的细节问题
    {
      static T mInstance;
      return mInstance;
    }
        
  protected:
    Singleton(void) {}
    virtual ~Singleton(void) {}
    
  private:
    Singleton(const Singleton& rhs) {}
    Singleton& operator = (const Singleton& rhs) {}
    
    static T volatile mInstance; //2.为什么加上volatile关键字 --> 确保多线程每次从内存中取值，而不是从寄存器中取值
};
}

#endif /* singleton_h */
