# Makefile для проекту 3DPointsManager
CXX = g++
WXFLAGS = $(shell wx-config --cxxflags)
WXLIBS = $(shell wx-config --libs)

# Імена файлів
TARGET = 3DPointsManager
OBJECTS = main.o wxpoints.o xyz.o

# Правило для збірки всіх об'єктних файлів
all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(TARGET) $(WXLIBS)

# Правила для компіляції кожного файлу
main.o: main.cpp wxpoints.h xyz.h
	$(CXX) -c main.cpp $(WXFLAGS) -o main.o

wxpoints.o: wxpoints.cpp wxpoints.h xyz.h
	$(CXX) -c wxpoints.cpp $(WXFLAGS) -o wxpoints.o

xyz.o: xyz.cpp xyz.h
	$(CXX) -c xyz.cpp $(WXFLAGS) -o xyz.o

# Команда для очищення зібраних файлів
clean:
	rm -f $(OBJECTS) $(TARGET)
