CFLAGS = -Wall -Wextra -Werror -I headers

EXEC = bst

FILES =	$(EXEC)

OBJECTS = $(addsuffix .o, $(FILES))

.PHONY : all clean

all: $(EXEC)

$(EXEC): $(OBJECTS)

test: all
	@make -C test

clean:
	@echo Cleaning project files...
	@-rm -f *.o
	@make clean -C test
purge: clean
	@-rm -f $(EXEC)
	@make purge -C test