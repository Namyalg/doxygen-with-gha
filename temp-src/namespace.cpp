// /**
//  * @file 
//  * @brief Documentation of basic mathematical operations.
//  * 
//  * Ut enim ad minima veniam, quis nostrum exercitationem ullam 
//  * corporis suscipit laboriosam, nisi ut aliquid ex ea commodi 
//  * consequatur? Quis autem vel eum iure reprehenderit qui in ea 
//  * voluptate velit esse quam nihil molestiae consequatur, vel illum qui 
//  * dolorem eum fugiat quo voluptas nulla pariatur?"
//  * ***********************/

// #include "../include/namespace.h"
// #include<iostream>

// //! namespace one
// using one{ 
//     //! namespace two
//     using two {
//          /**
//         * @brief This function does addition.
//         * 
//         * @param a first number
//         * @param b second number
//         * @return sum of numbers
//         * ****************/
//         void location(){
//             std::out << "Prints the inner namespace " << std::endl;
//         }
//     }
// }


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

#include "./include/namespace.h"
#include<iostream>

namespace one{
    namespace two{
        namespace three{
             /**
             * @brief Prints namespace 3.
             * @return void
             * ****************/
            void location_three(){
                std::cout<< "Prints namespace 3 " << "\n";
            }
            

        }
         /**
             * @brief Prints namespace 2.
             * @return void
             * ****************/
        void location_two(){
            std::cout<< "Prints namespace 2 " << "\n";
        }
    }
     /**
      * @brief Prints namespace 1.
      * @return void
      *****************/
    void location_one(){
        std::cout<< "Prints namespace 1 " << "\n";
    }
}
