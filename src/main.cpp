#include <iostream>
#include <vector>

using namespace std;

using vi = vector<int>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, k, l;
	cin >> n >> k >> l;

	auto nt = int{ 0 };
	auto pts = vi{};
	while (0 < (n--)) {
		auto sum = int{ 0 };
		auto isOk = bool{ true };
		auto team = vi{};
		for (auto i = 0; i < 3; ++i) {
			int x;
			cin >> x;

			team.push_back(x);

			sum += x;

			if (x < l) {
				isOk = false;
			}
		}

		if (isOk && k <= sum) {
			++nt;
			for (const auto& x : team) {
				pts.push_back(x);
			}
		}
	}

	cout << nt << '\n';
	for (const auto& x : pts) {
		cout << x << ' ';
	}

	return 0;
}