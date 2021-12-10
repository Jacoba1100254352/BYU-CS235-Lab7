
all:
	clear
	g++ -std=c++11 main.cpp -o Lab7
	./Lab7
	bash check.sh
	#valgrind --leak-check=full -s ./Lab7

