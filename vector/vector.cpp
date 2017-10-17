#include "vector.h"

int main()
{
	vector<int> v(100);
	std::cout << "v size: " << v.size() << '\n';

    for(std::size_t i = 0; i < v.size(); ++i)
    {
        v[i] = i + 1;
    }
    
	 std::cout << "v[0]: " << v[0] << '\n';
	
	 vector<int> vec(v);
	
	 std::cout << "vec[0]: " << vec[0] << " vec size: " << vec.size() << '\n';

	return 0;
}
