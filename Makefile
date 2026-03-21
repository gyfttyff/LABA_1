# Компилятор
CXX = g++
TARGET = Triangle_exe
PROJ = Triangle.cpp
# Флаги # - Предупреждения - Отладочная информация
CXXFLAGS = -Wall -g

# Цель по умолчанию
all: $(TARGET)

# Линковка
$(TARGET): $(PROJ)
	@echo "Компилирование..."
	$(CXX) $(PROJ) -o $(TARGET)
# Очистка
clean:
	rm -f $(TARGET) 
# Запуск
run: $(TARGET)
	./$(TARGET)
# Объявление файловых целей (чтобы make не искал файлы с такими именами)
.PHONY: all clean

