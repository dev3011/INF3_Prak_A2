/*
 * mySW.C
 *
 *  Created on: 06.11.2019
 *      Author: ubuntu
 */
#include <cstdlib>
#include <cstring>
#include <iostream>

#include "mySW.H"
#include "TASK1.H"

/*
namespace TASK1{



BlackBoxSafe::BlackBoxSafe(int pwdLength, int symbSetSize){
	if((symbSetSize < 1) || (symbSetSize > SYMBOLS.length()) ){
		lengthSymbArray_ = SYMBOLS.length();
	}else{
		lengthSymbArray_ = symbSetSize;
	}
	// extract and save the subset of valid symbols
	charSymbArray_ = new char [lengthSymbArray_ + 1];
	strncpy(charSymbArray_, SYMBOLS.c_str(), lengthSymbArray_);
	// create and save random password
	pwd_ = this->randomPwd(pwdLength);
	return;
}

string BlackBoxSafe::input(string strPwd){
	if(strPwd.compare(pwd_)){
		return string("ACCESS ACCEPTED");
	}
	return string("ACCESS DENIED");
}
}
*/

void myDemo(){

	//TASK1::demoTASK1_00();
	TASK1::BlackBoxSafe bs(4,4);
	std::cout << bs.pwd_ << endl;
}


