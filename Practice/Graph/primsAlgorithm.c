#include "stdio.h"
#include "string.h"
#include "stdbool.h"
#define INF 99999
#define N 6

int G[N][N]={
    {0, 4, 6, 0, 0, 0},
    {4, 0, 6, 3, 4, 0},
    {6, 6, 0, 1, 0, 0},
    {0, 3, 1, 0, 2, 3},
    {0, 4, 0, 2, 0, 7},
    {0, 0, 0, 3, 7, 0}
};
/*                    4   
                  1  .  .  .  .  .  4 
                . ..                .  . 
            4 .   .  .              .    .  7
		   .      .    .            .      .
	     0      6 .      .       2  .        5
            .	  .     3  .        .      .
	        6 .   .          .      .    . 3
			    . .             .   . . 
				  2  .  .  .  .  .  3  
                          1


*/

int main()
{   
    int no_of_edge = 0;
    int Visited[N];
    memset(Visited, false ,sizeof(Visited));

    Visited[0] = true;
    int x, y;

    while (no_of_edge < N-1)
    {
        int min = INF;
        x = 0;
        y = 0;
        for(int i = 0; i < N; i++)
        {
            if(Visited[i])
            {
                for(int j = 0; j < N; j++)
                {
                    if(!Visited[j]&&G[i][j])
                    {
                        if(min > G[i][j])
                        {
                            min = G[i][j];
                            x = i;
                            y = j; 

                        }
                    }
                }
            }
        }
        printf("%d - %d = %d\n", x, y, min);
        Visited[y]=true;
        no_of_edge++;

    }
    

    return 0;

}