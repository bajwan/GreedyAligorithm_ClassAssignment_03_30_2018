#include <iostream>
// Tim Van Dyke Brendan Warnick Navdeep Bajwa
int main(int argc, char** argv) {
	float weight[6] = {6, 7, 10, 3, 4, 14};
	float howOft[6] = {2, 3, 1, 4, 7, 5};
	int sort[6];
	float ratio[6];
	for (int i = 0; i < 6; i++){
		ratio[i] = weight[i] / howOft[i];
	}
	int z = 0;
	for (int q = 0; q < 6; q++) {
		float temp = 100000;
		int i = 0;
		for (int j = 0; j < 6; j++) {
			if (ratio[j] < temp) {
				temp = ratio[j];
				i = j;
			}
		}
		ratio[i] = 100000;
		sort[z] = i;
		z++;
	}
	for (int i = 0; i < 6; i++) {
		std::cout << sort[i] << std::endl;
	}
}
