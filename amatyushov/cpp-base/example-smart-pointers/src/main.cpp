#include <iostream>
#include <thread>

int main()
{

	for (int i = 0; i < 200000000; i++)
	{
		std::unique_ptr<int> m (new int());

		std::this_thread::sleep_for(std::chrono::milliseconds(100));
	}
	
	return 0;
}
