#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int calculate_matrix(const std::vector<std::vector<int>> &arr) {
	int sum {0};
	int r = arr.size();
	int c = arr[0].size();

	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++) {
			if((j % 2 == 0) || (i % 2 != 0)) {
				sum += arr[i][j];
			}
		}
	}
	return sum;
}

int main() {
	int row {0};
	int col {0};

	std::cout << "Provide number of rows: ";
	std::cin >> row;
	std::cout << "Provide number of columns: ";
	std::cin >> col;
	
	if(row <= 0 || col <= 0) {
		std::cout << "Provided number of rows or columns is wrong" << std::endl;
		return -1;
	}

	std::vector<std::vector<int>> matrix(row, std::vector<int>(col));

	srand(static_cast<unsigned int>(time(0)));	
	for(int i = 0; i < row; i++) {
		for(int j = 0; j < col; j++) {
			matrix[i][j] = rand() % 10;
		}
	}
	
	for(int i = 0; i < row; i++) {
		for(int j = 0; j < col; j++) {
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}

	int sum =  calculate_matrix(matrix);
	std::cout << "Sum of numbers in even number of columns and in odd number of rows: " << sum << std::endl;
	return 0;
}
