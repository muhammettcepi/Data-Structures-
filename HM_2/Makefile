hepsi:derle test
derle:
	g++ -I./include -c ./src/Stack.cpp -o ./lib/Stack.o
	g++ -I./include -c ./src/Dugum.cpp -o ./lib/Dugum.o
	g++ -I./include -c ./src/DataRead.cpp -o ./lib/DataRead.o
	g++ -I./include -c ./src/main.cpp -o ./lib/main.o
	g++ -I./include ./lib/Stack.o  ./lib/Dugum.o ./lib/DataRead.o ./lib/main.o -o ./bin/uyg1
test:
	./bin/uyg1
temizle:
	del .\bin\uyg1.exe