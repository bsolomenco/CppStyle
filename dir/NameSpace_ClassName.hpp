#include "NameSpace.hpp" //if necessary

class T;

namespace NameSpace{
    class ClassName{
    public:
        ClassName(double dbl);//use "explicit" if conversion from double to ClassName is not desired

        void constMethod(char* str) const {/*...*/}
        void method(char* str){/*...*/}
        void method(const T& inputArg, T& outputArg){/*...*/}
        //...
    protected:
        int    _data0 = 0;//initialize it here if possible (less code, no need to keep decl&init order in sync, no risk to forget initializing a data member)
        double _dbl;      //no init if initialized in ctor from a parameter
    };
}
