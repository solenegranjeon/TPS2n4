

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
	
	double coefs[5] = {0,1,0,0,1};
	
	Polynome* g_x = new Polynome(4,coefs);
	Polynome* f_x = new Polynome(*g_x);

	g_x->display();
	
	Polynome h_x = *g_x - *f_x;
	Polynome dg_x = g_x->diff();
	
	h_x.display();	
	g_x->display();
	dg_x.display();
	
	delete f_x;
	delete g_x;
		
	return 0;
}
