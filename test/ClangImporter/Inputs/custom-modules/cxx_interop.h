#pragma once

// Ensure c++ features are used.
namespace ns {
class T {};
} // namespace ns

struct Basic {
  int a;
  ns::T *b;
};

Basic makeA();

ns::T* makeT();
void useT(ns::T* v);
using namespacedT = ns::T;

class Methods {
 public:
  virtual ~Methods();

  int SimpleMethod(int);

  int SimpleConstMethod(int) const;
  int some_value;

  static int SimpleStaticMethod(int);
};
