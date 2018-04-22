#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

#ifndef CFizzbuzz_H
#define CFizzbuzz_H // !CFizzbuzz_H

class CFizzbuzz
{
private: // Member Variables
	string m_name;
	string m_reportTo;
public:
	//Default Constructor
	CFizzbuzz();

	CFizzbuzz(string name, string reportTo);

	//Overload Constructor
	//CFizzbuzz(string, string);

	//Destructor
	~CFizzbuzz();

	// Accessor Functions
	string getName() const;
	string getreportTo() const;

	// Mutator Functions
	void setName(string);
	void setreportTo(string);
};
#endif
