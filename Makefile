# Compilador
CXX = g++

# Flags de compilación
CXXFLAGS = -Wall -Wextra -std=c++11

# Nombre del ejecutable
TARGET = taylor

# Archivo fuente
SRC = taylor.cpp

# Regla principal
all: $(TARGET)

# Compilación
$(TARGET): $(SRC)
	$(CXX) $(SRC) -o $(TARGET) $(CXXFLAGS)

# Ejecutar (opcional)
run: $(TARGET)
	./$(TARGET)

# Limpiar
clean:
	rm -f $(TARGET)
