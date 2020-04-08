#pragma once

//macros; prefix if necessary 'cause trey are global regardless if you put them under a namespace!!!
#define NAMESPACE_MACRO_CONST 123       //old style "constant" (actually a macro)
#define NAMESPACE_MACRO_FUNC(arg) arg   //macro with parameters

namespace NameSpace{
    //"globals" for this namespace: constants, functions, typedefs (or type aliases), etc

    //constants & constexpr
    const     int ZERO = 0;                 //old style
    constexpr int FOUR = 4;                 //new style

    //typedefs & type alias
    typedef unsigned long ULong;            //old style
    using VoidFunc = void (*)(void);        //new style

    //functions
    int someFunc();
}