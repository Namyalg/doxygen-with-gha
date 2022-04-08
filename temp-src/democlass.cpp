/**
 * @file 
 * @brief Testing namespaces.
 * 
 * Ut enim ad minima veniam, quis nostrum exercitationem ullam 
 * corporis suscipit laboriosam, nisi ut aliquid ex ea commodi 
 * consequatur? Quis autem vel eum iure reprehenderit qui in ea 
 * voluptate velit esse quam nihil molestiae consequatur, vel illum qui 
 * dolorem eum fugiat quo voluptas nulla pariatur?"
 * ***********************/

#include "./include/democlass.h"
#include<iostream>

namespace a{
    namespace b{
        namespace c{
             /**
             * @brief External function linked.
             * 
             * Testing a function defined outside the class here
             * @return void
             * ****************/

            void test::day(){
                std::cout<< "This function is outside the class " << "\n";
            }
        }
    }
}
