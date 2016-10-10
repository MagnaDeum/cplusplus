/*!
 * \file  sequences.cpp
 * \brief  Sequences reading 
 * \date to be updated
 * \author to be updated
*/

#include "sequences.h"

using namespace std;

ostream & operator<< (ostream & os, const seqmac & s) 
{
    s.writeseq(os);
    return os;
}

seqmac::seqmac(const string & seq, const string & name, const string & alphabet) : 
  _alph(alphabet), _name(name) 
{
    string s="";
    for(string::const_iterator c = seq.begin();c != seq.end(); c++ ) 
    {
	if (_alph.is_in_alpha(*c)) { s += *c; }
    }
    _seq = s;
}

seqadn::seqadn(const string & seq, const string & name) : seqmac(seq,name,"CGAT")
{
	string s = "CGAT";
	for (string::const_iterator c = seq.begin(); c != seq.end(); c++)
	{
		if (!s.find(*c)){
			throw sequenceException();
		}
	}
}

seqarn::seqarn(const string & seq, const string & name) : seqmac(seq,name,"ACGU") 
{
	string s = "ACGU";
	for (string::const_iterator c = seq.begin(); c != seq.end(); c++)
	{
		if (!s.find(*c)){
			throw sequenceException();
		}
	}
}

seqprot::seqprot(const std::string & seq, const std::string & name) : seqmac(seq, name, "ACDEFGHIKLMNPQRSTV")
{
	string s = "ACDEFGHIKLMNPQRSTV";
	for (string::const_iterator c = seq.begin(); c != seq.end(); c++)
	{
		
		if (!s.find(*c)){
			throw sequenceException();
		}
	}
}