binaries: $(patsubst %.cpp, %.bin, $(wildcard *.cpp))

%.bin: %.cpp Makefile
	g++ $< -o $@ -std=c++11
