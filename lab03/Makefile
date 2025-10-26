CXX = g++

OBJECTS = ex1 ex2 ex3 ex4 ex5

all: $(OBJECTS)

$(OBJECTS):%:%.cpp
	$(CXX) -o $@ $<

clean:
	rm $(OBJECTS)
