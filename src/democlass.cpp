// /**
//  * @file 
//  * @brief Functions of the class defined externally.
//  * 
//  * Ut enim ad minima veniam, quis nostrum exercitationem ullam 
//  * corporis suscipit laboriosam, nisi ut aliquid ex ea commodi 
//  * consequatur? Quis autem vel eum iure reprehenderit qui in ea 
//  * voluptate velit esse quam nihil molestiae consequatur, vel illum qui 
//  * dolorem eum fugiat quo voluptas nulla pariatur?"
//  * ***********************/

// #include<iostream>
// #include "../include/democlass.h"

// //! name space demo
// using demo_namespace {
//     void test(){
//         std::cout << "This is the test function outside the class " << "\n"; 
//     }
//     // class demo{
//     //      /**
//     //      * @brief Prints namespace 1.
//     //      * @return void
//     //      *****************/
//     //     void test(){
//     //         std::cout << "This is the test function outside the class " << "\n"; 
//     //     }
//     // }
// }



// // /**
// //  * @file 
// //  * @brief Documentation of basic mathematical operations.
// //  * 
// //  * Ut enim ad minima veniam, quis nostrum exercitationem ullam 
// //  * corporis suscipit laboriosam, nisi ut aliquid ex ea commodi 
// //  * consequatur? Quis autem vel eum iure reprehenderit qui in ea 
// //  * voluptate velit esse quam nihil molestiae consequatur, vel illum qui 
// //  * dolorem eum fugiat quo voluptas nulla pariatur?"
// //  * ***********************/

// // #include "../include/namespace.h"
// // #include<iostream>

// // //! namespace one
// // using one{ 
// //     //! namespace two
// //     using two {
// //          /**
// //         * @brief This function does addition.
// //         * 
// //         * @param a first number
// //         * @param b second number
// //         * @return sum of numbers
// //         * ****************/
// //         void location(){
// //             std::out << "Prints the inner namespace " << std::endl;
// //         }
// //     }
// // }


/**
 * @file 
 * @brief Democlass.
 * 
 * Ut enim ad minima veniam, quis nostrum exercitationem ullam 
 * corporis suscipit laboriosam, nisi ut aliquid ex ea commodi 
 * consequatur? Quis autem vel eum iure reprehenderit qui in ea 
 * voluptate velit esse quam nihil molestiae consequatur, vel illum qui 
 * dolorem eum fugiat quo voluptas nulla pariatur?"
 * ***********************/

#include "../include/moja/modules/cbm/democlass.h"
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

            /**
             * @brief Constructor linked here.
             * 
             * The constructor is linked here
             * ****************/

            test::test(){
                std::cout<< "This is the constructor " << "\n";
            }

            /**
             * @brief A test class written for demonstration purposes.
             * 
             * ****************/
            class test{
                public:

                /**
                 * @brief This is the class constructor.
                 * **************/

                test(){
                    std::cout << "This is the constructor " << "\n";
                }

                /**
                 * @brief This prints the day of the week.
                 * @param None
                 * @return None
                 * **************/
                
                void day(){
                    std::cout << "Today is wednesday " << "\n";
                }
            };

            //  /**
            //  * @brief Prints namespace 3.
            //  * @return void
            //  * ****************/
            // void location_three(){
            //     std::cout<< "Prints namespace 3 " << "\n";
            // }
        }
    }
}
