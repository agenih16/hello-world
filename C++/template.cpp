#include "iostream"
#include "string.h"
#include "stdlib.h"
#include "stdio.h"

using namespace std;

template<class T>clss Set{
public:
  virtual void insert(T*) = 0;
  virtual void remove(T*) = 0;

  virtual int is_member(T*) = 0;

  virtual T* first() = 0;
  virtual T* next() = 0;

  virtual ~Set(){}
};
