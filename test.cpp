#include <iostream>
#include <cstring>
#include "TException_t.h"

using namespace std;

int main()
{
	try
	{
		THROW(float, 99.9, "Just some message");
	}
	catch(TException_t<int>& _tex)
	{
		cout << _tex.GetData() << endl;
		cout << _tex.GetDesc() << endl;
		cout << _tex.GetFile() << endl;
		cout << _tex.GetLine() << endl;
	}
	catch(TException_t<float>& _tex)
	{
		cout << _tex.GetData() << endl;
		cout << _tex.GetDesc() << endl;
		cout << _tex.GetFile() << endl;
		cout << _tex.GetLine() << endl;
	}
		

	return 0;
}
