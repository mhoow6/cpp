#include <iostream>

namespace a {
	int x(10);
}

namespace b {
	int x(20);
}

int main()
{
	using std::cout; // cout가 std::cout로 사용한다는 것을 알려줌

	using namespace a;
	using namespace b;

	cout << "Hello World!";

	// x에 대해 모호함 발생
	// cout << x;

	return 0;
}