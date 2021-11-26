#include <iostream>
#include <string>
#include <vector>

int main() {
	const size_t unit = 8;
	std::string input;
	std::vector<std::string> results;

	while (std::getline(std::cin, input)) {
		if (input.empty())
			continue;  // ��������
		auto rest = unit - input.size() % unit;
		if (rest < unit) {
			input += std::string(rest, '0');
		}

		// unit��һ��ָ�
		for (int i = 0; i < input.size(); i += unit) {
			results.push_back(std::string(input.cbegin() + i, input.cbegin() + i + unit));
		}
	}

	// ���
	for (int i = 0; i < results.size(); ++i) {
		std::cout << results.at(i);
		if (i != results.size() - 1)
			std::cout << '\n';
	}
}