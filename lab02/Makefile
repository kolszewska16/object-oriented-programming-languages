CXX = g++

OBJECTS = ex1 ex2_1 ex2_2 ex3_1 ex3_2 ex4

all: $(OBJECTS)

$(OBJECTS):%:%.cpp
	$(CXX) -o $@ $<

clean:
	rm $(OBJECTS)
