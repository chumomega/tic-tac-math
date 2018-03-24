ttm: main.o MODULE_1.o MODULE_2.o MODULE_3.o
	g++ main.o MODULE_1.o MODULE_2.o MODULE_3.o -o ttm

main.o: main.cc
	g++ -c main.cc

MODULE_1.o: MODULE_1.cc MODULE_1.h
	g++ -c MODULE_1.cc

MODULE_2.o: MODULE_2.cc MODULE_2.h
	g++ -c MODULE_2.cc

MODULE_3.o: MODULE_3.cc MODULE_3.h
	g++ -c MODULE_3.cc

clean:
	rm *.o ttm
