/*----------------------------------------------------------------
Copyright (c) 2015 Author: Jagadeesh Vasudevamurthy
file: str.cpp

-----------------------------------------------------------------*/

/*----------------------------------------------------------------
This file has class definition
-----------------------------------------------------------------*/

/*----------------------------------------------------------------
All includes here
-----------------------------------------------------------------*/
#include "str.h"

/*----------------------------------------------------------------
Definition of routines of str class

WRITE CODE IN THIS FILE
-----------------------------------------------------------------*/


void str::reverse() {

	for (int i = 0, j = (_strlen-1); i < j; ++i, --j) {

		char tempCh = _string[i];
		_string[i] = _string[j];
		_string[j] = tempCh;

	}

}

int string_compare(const str& lhs, const str& rhs) {

	int indLhs = 0;
	int indRhs = 0;

	if (lhs._strlen == rhs._strlen) {

		while (lhs._string[indLhs] != '\0' && rhs._string[indRhs] != '\0') {

			if (lhs._string[indLhs] != rhs._string[indRhs]) {

				return (lhs._string[indLhs] - rhs._string[indRhs]);

			}

			indLhs++;
			indRhs++;
		}

		return 0;
	}
	else {

		return (lhs._strlen - rhs._strlen);

	}

}

//EOF


