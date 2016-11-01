#include <iostream>
#include <cstring>
#include "TException_t.h"

using namespace std;

int main()
{
	cout << "some line here" << endl;
	try
	{
		int i = 17;	
		string str("Just throwing something");	
		TException_t<int> ex(str, i);
		throw(ex);
	}
	catch(TException_t<int>& _tex)
	{
		cout << _tex.GetData() << endl;
		cout << _tex.GetDesc() << endl;
		cout << _tex.GetFile() << endl;
		cout << _tex.GetLine() << endl;
	}	

	return 0;
}
