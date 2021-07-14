pi:factorial.o pi.o
	g++ factorial.o pi.o -o pi

factorial.o:factorial.cpp
	g++ -c factorial.cpp -o factorial.o

pi.o:pi.cpp
	g++ -c pi.cpp -o pi.o

clean:
	rm pi.o factorial.o pi
	

