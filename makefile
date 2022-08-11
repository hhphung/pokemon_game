all: fight

fight: world.cpp
	 g++ -lncurses world.cpp -o fight

clean:
	rm move

	
	

