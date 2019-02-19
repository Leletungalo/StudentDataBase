stDataBase: main.o dataBase.o
	g++ main.o dataBase.o -o stDataBase

main.o: main.cpp
	g++ -c main.cpp

dataBase.o: dataBase.cpp
	g++ -c dataBase.cpp

run:
	./stDataBase

clean:
	rm *.o stDataBase
