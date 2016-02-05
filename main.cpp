

// ===========================================================================
//                                  Includes
// ===========================================================================
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <list>

#include "Polynome.h"


using namespace std;


// ===========================================================================
//                            Function declarations
// ===========================================================================


// ===========================================================================
//                                    MAIN
// ===========================================================================

int main(int argc,char* argv[]){
	
	Polynome* f_x = new Polynome();
	delete f_x;
	
	double coefs[5] = {0,0.2,3,0,1};
	Polynome* g_x = new Polynome(4,coefs);

	return 0;
}
