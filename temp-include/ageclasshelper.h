/**
 * @file 
 * @brief AgeClassHelper header file.
 * 
 * Ut enim ad minima veniam, quis nostrum exercitationem ullam 
 * corporis suscipit laboriosam, nisi ut aliquid ex ea commodi 
 * consequatur? Quis autem vel eum iure reprehenderit qui in ea 
 * voluptate velit esse quam nihil molestiae consequatur, vel illum qui 
 * dolorem eum fugiat quo voluptas nulla pariatur?"
 * ***********************/

#ifndef MOJA_MODULES_CBM_AGECLASSHELPER_H_
#define MOJA_MODULES_CBM_AGECLASSHELPER_H_

#include "moja/modules/cbm/_modules.cbm_exports.h"
#include "moja/flint/modulebase.h"

namespace moja {
namespace modules {
namespace cbm {

        /**
        * @brief Class AgeClassHelper.
        *********************************/
	class CBM_API AgeClassHelper {
	public:

        /**
        * @brief Constructor of Age Class Helper.
        * @param ageClassSize int
        * @param maximumAge int
        *********************************/
        AgeClassHelper(int ageClassSize = 20, int maximumAge = 300);

        int toAgeClass(int standAge);
        std::tuple<int, int> getAgeClass(int ageClass);
        std::string getAgeClassString(int ageClass);
        std::map<int, std::tuple<int, int>> getAgeClasses();

	private:
        int _ageClassSize;
        int _maximumAge;
        int _numAgeClasses;

        std::map<int, std::tuple<int, int>> _ageClasses;
        std::map<int, int> _ageClassLookup;
    
        void generateAgeClasses(int ageClassSize, int maximumAge);
    };
	
}}}
#endif