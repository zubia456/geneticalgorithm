
#include <iostream>

#include "Chromosome_Length_test.h"
#include "Population_test.h"


int main()
{
   std::cout<<"Begin initialization tests"<<std::endl<<std::endl;
   
   Chromosome_Length_test aTestObject;
   aTestObject.runTests();
   Population_test aPopObject;
	aPopObject.runTests();
   std::cout<<"End of initialization tests"<<std::endl<<std::endl;
   

    
  
   return 0;
}
