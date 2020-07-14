#
all: main


main : 
	@echo "Making the executable -- some warnings can be safely ignored"
	@g++ -std=c++11 -o main *.cpp 

run : main
	@echo "Running the program:"
	@./main

edit:
	@vim main.cpp

debug:
	@gdb ./main

clean :
	@rm main
