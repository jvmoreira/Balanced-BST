CFLAGS = -Wall -Wextra -Werror -I ../headers

EXEC = run_tests

FILES =	$(EXEC)

OBJECTS = $(addsuffix .o, $(FILES))

.PHONY : all clean

all: $(EXEC)
	clear
	@echo "Running tests"
	@./$(EXEC)

$(EXEC): $(OBJECTS)

clean:
	@-rm -f $(OBJECTS)
purge: clean
	@rm -f $(EXEC)