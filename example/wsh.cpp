//  :copyright: (c) 2015-2016 The Regents of the University of California.
//  :license: MIT, see licenses/mit.md for more details.
/*
 *  \addtogroup AutoCOM
 *  \brief Example to use Windows Shell (WSH) from C++.
 */

#include "autocom.hpp"

#include <cassert>
#include <cstdio>

namespace com = autocom;


/** \brief Execute main code block.
 */
int main(int argc, char *argv[])
{
    com::Dispatch dispatch(L"WScript.Shell.1");

    com::Variant style, wait;
    style.vt = VT_I2;
    style.iVal = 1;
    assert(dispatch.method(L"Run", L"notepad.exe", &style, &wait));
    //L"c:\\winnt\\system32\\notepad.exe");
     //HRESULT hr = myWsh->Run(bstrCommand, &vtWindowStyle, &vtWaitOnReturn);
    //VARIANT_BOOL *d;
    //com::GetBoolPtr x(d);
    //assert(dispatch.get(L"AllowUI", x));
    //assert(dispatch.put(L"Timeout", LONG(-1)));
    //assert(dispatch.method(L"ExecuteStatement", L"var a = 'test'"));
    //assert(dispatch.put(L"AllowUI", com::PutBool(VARIANT_FALSE)));
    //assert(dispatch.method(L"ExecuteStatement", L"ab = 12"));

    //assert(dispatch.put(L"AllowUI", TRUE));
    //assert(dispatch.put(L"AddCode", L"function MyStringFunction(Argu1,Argu2,Argu3) { return \"hi there\" ;}"));

    //com::SafeArray<BSTR> array = {SysAllocString(L"Vanilla"), SysAllocString(L"Chocolate"), SysAllocString(L"Espresso Chip")};
//    auto variant = dispatch.methodV(L"Run", &array);

    return 0;
}
