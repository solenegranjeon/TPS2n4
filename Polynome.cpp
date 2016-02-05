
// ===========================================================================
//                                  Includes
// ===========================================================================

#include "Polynome.h"

// ===========================================================================
//                       Definition of static attributes
// ===========================================================================

// ===========================================================================
//                                Constructors
// ===========================================================================
Polynome::Polynome(){
	highest_degree = 0;
	coef = nullptr;
}

Polynome::Polynome(const Polynome& p2){
	this->highest_degree = p2.highest_degree;
	coef = new double[p2.highest_degree + 1];
	memcpy( coef, p2.coef , sizeof(double)*(highest_degree + 1) );
}

Polynome::Polynome(int deg, double* coefs){
	this->highest_degree = deg;
	coef = new double[deg + 1];
	memcpy( coef, coefs , sizeof(double)*(deg + 1) );
}


// ===========================================================================
//                                 Destructor
// ===========================================================================
Polynome::~Polynome() {
	delete[] coef;
	coef = nullptr;

}

// ===========================================================================
//                               Public Methods
// ===========================================================================

void Polynome::display(void){
	if(highest_degree == 0){
		cout << "Nil Polynom \n" ;
		return;
	}
	if(coef[0] != 0){
		cout << coef[0] << "+ ";
	}
	for(int i = 1; i<highest_degree; i++){
		if(coef[i] != 0.0 ){
			cout << coef[i] << "x^" << i << "+ ";
		}
	}
	cout << coef[highest_degree] << "x^" << highest_degree << "\n";
}

Polynome Polynome::diff(void){
	int new_deg = highest_degree - 1;
	double new_coef[new_deg + 1];
	for(int i = 0; i<highest_degree ; i++){
		new_coef[i] = coef[i+1]*(i+1);
	}
	Polynome result = Polynome(new_deg,new_coef);
	return result;
	
}

// ===========================================================================
//                              Protected Methods
// ===========================================================================

// ===========================================================================
//                              External Methods
// ================================================================	===========

Polynome operator+(const Polynome& P, const Polynome& Q){
	int deg = max(P.highest_degree , Q.highest_degree);
	double coefs[deg+1];
	if(P.highest_degree == deg){
		memcpy( coefs, P.coef , sizeof(double)*(deg + 1) );
		for(int i = 0; i<Q.highest_degree + 1; i++){
			coefs[i]+=Q.coef[i];
		}
	}
	else{
		memcpy( coefs, Q.coef , deg + 1 );
		for(int i = 0; i<P.highest_degree + 1; i++){
			coefs[i]+=P.coef[i];
		}
	}

	double val = coefs[deg];
	cout << val << "\n";
	if(val == 0){
		while(val == 0){
			deg -= 1;
			val = coefs[deg];
		}
	}
	
	Polynome result = Polynome(deg,coefs);
	return result;
}

Polynome operator-(const Polynome& P, const Polynome& Q){
	int deg = max(P.highest_degree , Q.highest_degree);
	double coefs[deg+1];
	if(P.highest_degree == deg){
		memcpy( coefs, P.coef , sizeof(double)*(deg + 1) );
		for(int i = 0; i<Q.highest_degree + 1; i++){
			coefs[i]-=Q.coef[i];
		}
	}
	else{
		memcpy( coefs, Q.coef , deg + 1 );
		for(int i = 0; i<P.highest_degree + 1; i++){
			coefs[i]-=P.coef[i];
		}
	}

	double val = coefs[deg];
	
	if(val == 0){
		while(val == 0 && deg>0){
			deg -= 1;
			val = coefs[deg];
		}
	}
	
	Polynome result = Polynome(deg,coefs);
	return result;
}






