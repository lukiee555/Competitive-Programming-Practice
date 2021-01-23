
/*
The special array is non-empty and contains integers or other arrays. We can get the product sum of 
an array by adding all of its elements together and then multiplying by the level of depth of the array.

The depth is determined by how nested the array is.
Ex. The depth of [] is 1. The depth of the inner array in [[]] is 2. The depth of the innermost array in [[[]]] is 3.

In an array, [x, y], the product sum is (x + y). In array [x, [y, z]], the product sum is x + 2 * (y + z). 
In array [x, [y, [z]]], the product sum is x + 2 * (y + 3z).

Example Input:

[5, 2 [-7, 1], 3, [6, [-13, 8], 4]]

Example Output:

12

calculation:

5 + 2 + 2 * (7 - 1) + 3 + 2 * (6 + 3 * (-13 * 8) + 4)
*/

#include <any>
#include <vector>
using namespace std;

int productSumHelper(vector<any> array, int level) {
  // Write your code here.
	int result = 0;
	for (auto e : array) {
		if (e.type() == typeid(vector<any>)){
			result += productSumHelper(any_cast<vector<any>>(e), level + 1);
		} else {
			result += any_cast<int>(e);
		}
	}
	return result * level;
}

int productSum(vector<any> array) {
	return productSumHelper(array, 1);
}