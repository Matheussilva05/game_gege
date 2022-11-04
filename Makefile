all: compile link execute clean

compile:
	g++ -c Jungle++\src\*.cpp Jungle++\src\Entidade\*.cpp Jungle++\src\Entidade\Personagem\*.cpp Jungle++\src\Entidade\Personagem\Jogador\*.cpp Jungle++\src\Entidade\Personagem\Inimigo\*.cpp Jungle++\src\Gerenciador\*.cpp Jungle++\src\Lista\*.cpp Jungle++\src\Entidade\Obstaculo\*.cpp -I"SFML\include"

link:
	g++ *.o -Wall -o main -L"SFML\lib" -lsfml-graphics -lsfml-window -lsfml-system

execute: 
	.\main.exe

clean:
	del *.o
	cls