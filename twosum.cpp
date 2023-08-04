// C++ program for illustration
// of map::find() function
#include <bits/stdc++.h>
using namespace std;

int main()
{

	// Initialize container
	map<int, int> m;

	// Insert elements in random order
	m.insert({ 0, 30 });
	m.insert({ 2, 30 });
	m.insert({ 1, 40 });
	m.insert({ 3, 20 });
	m.insert({ 4, 50 });

  
	
      cout<< m.find(4)->second;
           
	return 0;
}
