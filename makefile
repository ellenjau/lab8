lab8: tetris.o genMino.o MinoI.o MinoS.o MinoL.o MinoA.o MinoB.o Mino.o
	g++ -o lab8 tetris.o genMino.o MinoI.o MinoS.o MinoL.o MinoA.o MinoB.o Mino.o
tetris.o: tetris.cpp genMino.h
		g++ -c tetris.cpp
genMino.o: genMino.cpp genMino.h
		g++ -c genMino.cpp
MinoI.o: MinoI.cpp MinoI.h
		g++ -c MinoI.cpp
MinoS.o: MinoS.cpp MinoS.h
		g++ -c MinoS.cpp
MinoL.o: MinoL.cpp MinoL.h
		g++ -c MinoL.cpp
MinoA.o: MinoA.cpp MinoA.h
		g++ -c MinoA.cpp
MinoB.o: MinoB.cpp MinoB.h
		g++ -c MinoB.cpp
Mino.o: Mino.cpp Mino.h
		g++ -c Mino.cpp

