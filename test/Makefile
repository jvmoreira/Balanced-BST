CFLAGS = -Wall -Wextra -Werror -I ../headers

EXEC = run_tests

FILES =	$(EXEC)					\
		utils/terminal_helper	\

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