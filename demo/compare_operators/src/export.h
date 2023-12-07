#include <vector>
#include <iostream>
#include <utility>

using namespace std::rel_ops;

class TestObj{
  int _vint;
  double _vdouble;
public:
  TestObj(int v_int , double v_double):
  _vint(v_int),_vdouble(v_double)
  {
  }

  bool operator== (const TestObj & v_obj) const{
    if(_vint == v_obj._vint && _vdouble==v_obj._vdouble){
      return true;
    }
    else{
      return false;
    }
  }
  bool operator<(const TestObj & v_obj) const{
    if(_vint <v_obj._vint||(_vint == v_obj._vint&&_vdouble<v_obj._vdouble)){
      return true;
    }
    else{
      return false;
    }
  }


};
