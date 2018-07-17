#include<cstdlib>
#include"genMino.h"
#define NUM_MINO 5
#define MINO_I 0
#define MINO_S 1
#define MINO_L 2
#define MINO_A 3
#define MINO_B 4
using namespace std;
Mino *genMino()
{
		int mino_type;
			Mino *ptr;
			mino_type=random()%NUM_MINO;
			switch(mino_type)
			{
				case MINO_I:
					ptr=new MinoI[40000000];
					break;
				case MINO_S:
					ptr=new MinoS[40000000];
					break;
				case MINO_L:
					ptr=new MinoL[40000000];
					break;
				case MINO_A:
					ptr=new MinoA[40000000];
					break;
				case MINO_B:
					ptr=new MinoB[40000000];
					break;
			}
			return ptr;
}

