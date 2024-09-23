CXX = g++
CXXFLAGS = -Wall -std=c++11
TARGET = quadratic_equation
SRCS = quadratic_equation.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

test: $(TARGET)
	./$(TARGET) $(TESTCASE)

clean:
	rm -f $(OBJS) $(TARGET)

run: $(TARGET)
	./$(TARGET)
