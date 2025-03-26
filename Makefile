CXX = g++
CXXFLAGS = -Wall -std=c++11 -Iinclude
SRC_DIR = src
INCLUDE_DIR = include
OBJ_DIR = obj
BIN_DIR = bin

SRCS = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRCS))
MAIN = main.cpp
EXEC = $(BIN_DIR)/programa

# Crear directorios si no existen
$(shell mkdir -p $(OBJ_DIR) $(BIN_DIR))

all: $(EXEC)

$(EXEC): $(OBJS) $(MAIN)
	$(CXX) $(CXXFLAGS) $(OBJS) $(MAIN) -o $(EXEC)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp $(INCLUDE_DIR)/%.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)/*.o $(EXEC)

run: all
	./$(EXEC)