#include <iostream>
#include <list>
#include <algorithm>
#include <stack>
#include <set>


constexpr int NUM = 20;

int main()
{
	int testNumber = 13;
	std::list<int> this_list;
	std::stack<int> stack;
	std::set<int> ids;

	// Задание 1
	 
	for (int i = 0; i < NUM; i++) {


		if (i == 5 || i == 13) {
			this_list.push_back(testNumber);
		}
		else
		{
			this_list.push_back(rand());
		}
	}

	std::for_each(this_list.cbegin(), this_list.cend(), [](int a) {
		std::cout << a << ' ';
		}
	);

	this_list.remove(testNumber);

	std::cout << std::endl;

	std::for_each(this_list.cbegin(), this_list.cend(), [](int a) {
		std::cout << a << ' ';
		}
	);

	std::for_each(this_list.cbegin(), this_list.cend(), [testNumber](int a) {
		if (a == testNumber)
		{
			std::cout << "число все еще осталось\n";
		}
		}
	);

	// Задание 2
	for (int i = 0; i < NUM; i++) {
		stack.push((std::rand() % 100));
	}

	while (!stack.empty()) {
		ids.insert(stack.top());
		stack.pop();
	}

	std::cout << ids.size();

	return 0;
}