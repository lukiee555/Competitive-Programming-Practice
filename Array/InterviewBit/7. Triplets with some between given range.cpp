int Solution::solve(vector<string> &A)
{
	vector<double> arr;
	for (auto s : A)
		arr.push_back(stod(s));

	double a = arr[0], b = arr[1], c = arr[2];
	for (int i = 3; i < A.size(); i++)
	{
		// check if sum fall in (1, 2)
		if (a + b + c > 1 && a + b + c < 2)
		{
			return 1;
		}
		// if not, then check is sum greater than 2
		// if so, then replece MAX(a,b,c) to new number
		else if (a + b + c > 2)
		{
			if (a > b && a > c)
			{
				a = arr[i];
			}
			else if (b > a && b > c)
			{
				b = arr[i];
			}
			else if (c > a && c > b)
			{
				c = arr[i];
			}
		}
		// else then sum must be less than 1
		// then replace MIN(a,b,c) to new number
		else
		{
			if (a < b && a < c)
			{
				a = arr[i];
			}
			else if (b < a && b < c)
			{
				b = arr[i];
			}
			else if (c < a && c < b)
			{
				c = arr[i];
			}
		}
	}
	// check for last a, b, c  triplet
	if (a + b + c > 1 && a + b + c < 2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int Solution::solve(vector<string> &A){
	int i = 0;
	int j = A.size() - 1;
	while (j-i >=2)
	{
		int mid = (i+j) / 2;
		double a = stof(A[i]);
		double b = stof(A[j]);
		double c = stof(A[mid]);
		double sum = a+b+c;
		if(sum > 2){
			j--;
		}else if(sum < 1){
			i++;
		}
		else{
			return 1;
		}
		
	}
	return 0;
}