#include <vector>
#include <unordered_map>

using namespace std;

int distancebetween(int a, int b)
{
    return abs(a-b);
}
int minValueIndex(vector<int> A)
{
    int minimum = INT_MAX;
    int minIndex = 0;
    int n = A.size();

    for(int i=0;i<n;i++)
    {
        if(minimum > A[i])
        {
            minimum = A[i];
            minIndex = i;
        }
    }

    return minIndex;
}
int apartmentHunting(vector<unordered_map<string, bool>> blocks,
                     vector<string> reqs) 
{
	vector<int> MaxdistanceForEveryBlock(blocks.size(),INT_MIN);

    for(int i=0; i < blocks.size(); i++)
    {
        for(auto req: reqs)
        {
            int closestRequiredDistance = INT_MAX;

            for(int j=0; j < blocks.size(); j++)
            {
                if(blocks[j][req])
                {
                    closestRequiredDistance = min(closestRequiredDistance,distancebetween(i,j));
                }
            }

            MaxdistanceForEveryBlock[i] = max(MaxdistanceForEveryBlock[i],closestRequiredDistance);
        }
    }

    return minValueIndex(MaxdistanceForEveryBlock);
}