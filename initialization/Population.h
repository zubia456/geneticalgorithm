/**
 *
 */


#ifndef POPULATION_HEADER
#define POPULATION_HEADER


#include "GA_Typedefs.h"


class Population
{
public:
   
   /**
    * ctor to create a population object
    *
    * @param aSizeOfPopulation the size of the population
    */
   Population(unsigned int aSizeOfPopulation, 
                       Chromosome aChromosome);

   /**
    * Destructor
    */
   ~Population();

   /**
    * const ref accessor method
    *
    * @return The population
    */
   /*const POPULATION& getPopulation() const;

   
    * Non-const accessor
    *
    * @return The population
    */
   POPULATION& getPopulation();

	/**
	 * Create initial values for chromosomes
	 */
   void  Initialization();

private:
   /// Population size
   unsigned int mSizeOfPopulation;

   /// array of chromosomes
   POPULATION mPopulation;

#ifdef UNIT_TEST
   friend class Population_test;
#endif //UNIT_TEST

};


#endif // POPULATION_HEADER

