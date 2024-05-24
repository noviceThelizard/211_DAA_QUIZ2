#include <iostream>
#include <stack>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Maze
{
	public:
		int *maze;
		int height, width, visited;

		Maze()
		{
			height = width = visited = 0;
			maze = nullptr;
		}

		Maze(int h, int w)
		{
			height = h;
			width = w;
			visited = 0;
			maze = new int[h*w];
		}

		bool empty()
		{
			return (maze==nullptr);
		}

	private:
		void init()
		{
			if (maze==nullptr)
			{
				width = 40;
				height = 25;
				maze = new int[width*height];
			}
			maze[0] = 0;
		}

		void generate()
		{

		}
};

int main()
{
	srand(time(NULL));


	return 0;
}
