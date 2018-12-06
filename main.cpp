#include <iostream>
#include <fstream>

using namespace std;

typedef unsigned long long longlong;


int main()
{
	ifstream in("input.bin", ios::binary);
    ofstream out("output.bin", ios::binary);

	int a, b;
	in.read((char *)&a, 4);
	in.read((char *)&b, 4);
	int res = a + b;
	out.write((char *)&res, 4);
	out.close();
}