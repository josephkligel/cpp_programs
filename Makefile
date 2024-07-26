SRC=$(wildcard *.cpp)
OBJ=$(wildcard *.o)
PROGS=$(patsubst %.cpp, %, $(SRC))

all: $(PROGS)

%: %.cpp
	g++ -o $@ $^

clean:
	rm $(PROGS)
