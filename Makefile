# Makefile is use only for now
# Later, we could integrate everything using rust

CC=gcc
FLAGS=-Iinclude
BUILD=./build
SRC=./src/c
SRCS=$(wildcard $(SRC)/*.c)
TARGET=$(BUILD)/chitti

.PHONY: all clean run

all: $(BUILD) $(TARGET)

$(BUILD):
	@mkdir -p $(BUILD)

$(TARGET):
	$(CC) $(FLAGS) $(SRCS) -o $(TARGET) 

run:
	@$(TARGET)

clean:
	@rm -rf $(BUILD)
