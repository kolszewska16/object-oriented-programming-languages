CXX = g++

OBJECTS = ex1 ex2

all: $(OBJECTS)

$(OBJECTS):%:%.cpp
	$(CXX) -o $@ $<

clean:
	rm $(OBJECTS)

