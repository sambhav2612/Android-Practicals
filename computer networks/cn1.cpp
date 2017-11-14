# include <iostream>
# include <cmath>
using namespace std;

int main () {
	int bit[] = {1,1,0,0,1,0,0,1,1,0,0,1,0,0,1,1};
	int gen[] = {1,0,0,1};
	int rem[] = {0,0,0,0};
	int chk[] = {0,0,0};

	int j = 0;
	/*for(int i = 0; i < bit.length(); ++i) {
		while((j)<gen.length()) {
			rem[i] = ((bit[i]+gen[i])%2);
			++j;
		}
		j = 0;
	}*/

	for (int i = 0; i < bit.length(); ++i) {
		for(int j = 0; j < gen.length(); ++j) {
			rem[j] = ((bit[j]+gen[j])%2);
		}
		int k = rem[0];
		while(rem[k] == 0) {
			for (int p = k; p < gen.length()-1; ++p) {
				rem[p] = rem[p+1];
			}
		}
		while(rem[k] == 1) {}
	}

	return 0;
}
