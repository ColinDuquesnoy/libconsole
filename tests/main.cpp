////////////////////////////////////////////////////////////////////////////////
// File      : main.cpp
// Contents  : Unit test entry point
//
// Author(s) : Frederic Gerard - mailfge@gmail.com
// URL       : https://github.com/TheBigFred/libconsole
//
//-----------------------------------------------------------------------------
//  LGPL V3.0 - https://www.gnu.org/licences/lgpl-3.0.txt
//-----------------------------------------------------------------------------
////////////////////////////////////////////////////////////////////////////////

#include <gtest/gtest.h>
#include <iostream>

#include "console.h"
using namespace console;

int main(int argc, char **argv)
{
   console_init();
   read_int();
   std::cout << clear;
   std::cout << yx(5,5);
   std::cout << "hello";
   std::cout << down(1);
   std::cout << right(1);
   std::cout << "world";
   std::cout << yx(10,30);
   std::cout << bold;
   std::cout << color(fg_red);
   std::cout << "hello";
   std::cout << noattr;
   std::cout << up(1);
   std::cout << left(1);
   std::cout << italic;
   std::cout << dim;
   std::cout << "world";
   std::cout << down(5);
   std::cout << noattr;
   std::cout << std::endl;

   ::testing::InitGoogleTest(&argc, argv);
   return RUN_ALL_TESTS();
}
