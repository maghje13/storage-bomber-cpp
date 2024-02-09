all: main

main: main.cpp
	@echo "Compiling..."
	@g++ main.cpp -o main
	@echo "Done!"
