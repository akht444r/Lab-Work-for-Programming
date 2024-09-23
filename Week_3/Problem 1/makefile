CXX = g++
CXXFLAGS = -Wall -std=c++11
TARGET = Discriminant
SRCS = Discriminant.cpp

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
