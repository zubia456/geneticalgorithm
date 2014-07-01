/**
 * @file Chromosome_Length.h
 * @author zshahid
 */

#ifndef CHROMOSOME_LENGTH_H
#define CHROMOSOME_LENGTH_H

#include <vector>
#include <iterator> 

#include "GA_Typedefs.h"

class Chromosome_Length
{
public:
   /// ctor
   Chromosome_Length(unsigned int aPrecision, 
                     unsigned int aNDIM, 
                     const std::vector<double>& adomain);

   /// dtor
   ~Chromosome_Length();

   /// chromosome accessor
   Chromosome getChromosome();

   /// accessor
   std::vector<unsigned int> getLength()
   {
      return theLengths;
   }
  
   /// build chromosome
   void buildChromosome();
   
private:

   unsigned int computeLength(double aLowerLimit, 
                              double anUpperLimit);

   unsigned int thePrecision;

   unsigned int theNDIM;

   const std::vector<double>& domain;

   Chromosome theChromosome; 

   std::vector<unsigned int> theLengths;

#ifdef UNIT_TEST
   friend class Chromosome_Length_test;
#endif
   
};

#endif // CHROMOSOME_LENGTH_H