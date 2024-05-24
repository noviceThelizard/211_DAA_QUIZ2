#include <iostream>
#include <stack>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

enum STATE{north=1, east=2, south=4, west=8, visited=16};

int main()
{
	int width = 40;
	int height = 25;
	int visited, curr_x, curr_y;
	int maze[width][height];
	stack<pair<int, int>> visitedCell;

	//init
	srand(time(NULL));

	curr_x = curr_y = 0;
	visitedCell.push(make_pair(0,0));
	visited = 1;

	vector<int> neighbour;
	while (visited < width*height)
	{
		if (visitedCell.top().second > 0 && (maze[curr_x][curr_y-1] == 16)) //North neighbour
		{
			
		}
	}

	return 0;
}
