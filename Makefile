# Compilador
CXX = g++
CXXFLAGS = -Wall -std=c++98 -Iinclude

# Directorios
SRC_DIR = src
INCLUDE_DIR = include
OBJ_DIR = obj
BIN_DIR = bin

# Archivos fuente y objetos
SRCS = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRCS))
MAIN = main.cpp
EXEC = $(BIN_DIR)/programa

# Crear directorios si no existen
$(shell mkdir -p $(OBJ_DIR) $(BIN_DIR))

# Regla principal: compilar y ejecutar
all: $(EXEC)
	@echo "Ejecutando programa..."
	./$(EXEC)

# Compilar el ejecutable
$(EXEC): $(OBJS) $(OBJ_DIR)/main.o
	$(CXX) $(CXXFLAGS) $(OBJS) $(OBJ_DIR)/main.o -o $(EXEC)

# Compilar archivos fuente a objetos
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp $(INCLUDE_DIR)/%.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Compilar main.cpp
$(OBJ_DIR)/main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp -o $(OBJ_DIR)/main.o

# Limpiar archivos compilados
clean:
	rm -rf $(OBJ_DIR)/*.o $(EXEC)
