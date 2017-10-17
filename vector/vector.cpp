#include "vector.h"

int main()
{
	vector<int> v(1);
	std::cout << "v size: " << v.size() << '\n';
	
	 v[0] = 1;
	 std::cout << "v[0]: " << v[0] << '\n';
	
	 vector<int> vec(v);
	
	 std::cout << "vec[0]: " << vec[0] << '\n';

	return 0;
}