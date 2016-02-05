
#ifndef POLYNOME_H__
#define POLYNOME_H__

// ===========================================================================
//                                  Includes
// ===========================================================================

#include <fstream>
#include <cstring>
#include <iostream>

using namespace std;

class Polynome {
 public :
  // =========================================================================
  //                               Constructors
  // =========================================================================
  Polynome();
  Polynome(const Polynome&);
  Polynome(int,double*);

 
  // =========================================================================
  //                                Destructor
  // =========================================================================
  virtual ~Polynome();

  // =========================================================================
  //                                  Getters
  // =========================================================================


  // =========================================================================
  //                                  Setters
  // =========================================================================


  // =========================================================================
  //                                 Operators
  // =========================================================================



  // =========================================================================
  //                              Public Methods
  // =========================================================================


	protected :
  // =========================================================================
  //                             Protected Methods
  // =========================================================================

  // =========================================================================
  //                                Attributes
  // =========================================================================

	double* coef;
	int highest_degree;


// ===========================================================================
//                            Getters' definitions
// ===========================================================================


// ===========================================================================
//                            Setters' definitions
// ===========================================================================

// ===========================================================================
//                           Operators' definitions
// ===========================================================================

// ===========================================================================
//                        Inline functions' definition
// ===========================================================================

};

#endif

