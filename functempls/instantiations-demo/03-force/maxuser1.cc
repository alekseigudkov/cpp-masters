//-----------------------------------------------------------------------------
//
// Source code for MIPT masters course on C++
// Slides: https://sourceforge.net/projects/cpp-lects-rus
// Licensed after GNU GPL v3
//
//-----------------------------------------------------------------------------
//
//  Demo of instantiations, function foo
//
//----------------------------------------------------------------------------

#include "max.hpp"

int foo(int x, int y) { return max<int>(x, y + 1); }