CC = g++
CFLAGS = -Wall -g -std=c++11
TARGET = coffee_shop
SOURCES = BeverageDecorator.cpp Caramel.cpp CashierOrder.cpp Espresso.cpp GreenTea.cpp Latte.cpp main.cpp Milk.cpp MobileOrder.cpp Order.cpp OrderFactory.cpp PresetRegistry.cpp Sugar.cpp WhippedCream.cpp
OBJECTS = $(SOURCES:.cpp=.o)
HEADERS = Beverage.h BeverageDecorator.h Caramel.h CashierOrder.h Espresso.h GreenTea.h headers.h Latte.h Milk.h MobileOrder.h Order.h OrderFactory.h PresetRegistry.h Sugar.h WhippedCream.h

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(TARGET)

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGET)

.PHONY: all clean