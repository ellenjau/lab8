#include "MinoA.h"
char A_arr[4][4][4]={{{'0','0','0','0'},
                      {'0','0','1','0'},	
					  {'0','0','1','0'},
					  {'0','1','1','0'}},
		             {{'0','0','0','0'},	
					  {'0','0','0','0'},
					  {'1','0','0','0'},
					  {'1','1','1','0'}},
					 {{'0','0','0','0'},
				      {'0','1','1','0'},
					  {'0','1','0','0'},
					  {'0','1','0','0'}},
			         {{'0','0','0','0'},
				      {'0','0','0','0'},
					  {'1','1','1','0'},
					  {'0','0','1','0'}}};

MinoA::MinoA():Mino(3)
{
			rotate_index=0;
}
void MinoA::paint()
{
			cout<<"MinoA"<<endl;
			for(int i=0;i<4;i++)
			{
				for(int j=0;j<4;j++)
				{
					cout<<A_arr[rotate_index][i][j];
				}
				cout<<endl;
			}
}


