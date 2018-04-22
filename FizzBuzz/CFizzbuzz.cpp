
#include "stdafx.h"
#include "CFizzbuzz.h"
#include <string>


CFizzbuzz::CFizzbuzz() {
	
}

CFizzbuzz::CFizzbuzz(string name, string reportTo) {
	m_name = name;
	m_reportTo = reportTo;
}

CFizzbuzz::~CFizzbuzz() {

}

string CFizzbuzz::getName() const {
	return m_name;
}

string CFizzbuzz::getreportTo() const {
	return m_reportTo;
}

void CFizzbuzz::setName(string name) {
	m_name = name;
}

void CFizzbuzz::setreportTo(string reportTo) {
	m_reportTo = reportTo;
}