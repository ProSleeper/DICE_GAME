main: main.cpp
	g++ -o main.exe main.cpp

dice : dice.h dice.cpp
	g++ -c -o dice.o dice.cpp

computer : computer.h computer.cpp
	g++ -o computer.o computer.cpp

game_board : game_board.h game_board.cpp
	g++ -o game_board.o game_board.cpp

input_error_exception : input_error_exception.h input_error_exception.cpp
	g++ -o input_error_exception.o input_error_exception.cpp

player : player.h player.cpp
	g++ -o player.o player.cpp

user : user.h user.cpp
	g++ -o user.o user.cpp

