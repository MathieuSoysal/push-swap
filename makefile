CFLAGS = -I.
MAKEFLAGS += --silent
CC=gcc -g 

.PHONY: BUILD TEST RUN  BUILD_RUN  # Main piplines
.PHONY: RUNTEST  MERGETEST cleantest clean


build_folder = build
testbuild =  test/build
src_folder = src
outfile_name = main.out
outfile = $(build_folder)/$(outfile_name)

green=`tput setaf 2; tput bold`
mag = `tput setaf 5; `
reset=`tput sgr0`

SRC_GENERAL = 	./src/utils.c \
	./src/structures/node.c \
	./src/structures/double_linked_list/double_linked_list_essentials.c \
	./src/structures/double_linked_list/double_linked_list_head.c \
	./src/structures/double_linked_list/double_linked_list_tail.c \
	./src/structures/circle_linked_list/circle_linked_list_essentials.c \
	./src/structures/circle_linked_list/circle_linked_list.c \
	./src/structures/circle_linked_list/circle_linked_list_head_manipulation.c \
	./src/structures/circle_linked_list/circle_linked_list_last_manipulation.c \
	./src/structures/push_swap_stack/push_swap_stack_pushs.c \
	./src/structures/push_swap_stack/push_swap_stack_reverse_rotates.c \
	./src/structures/push_swap_stack/push_swap_stack_rotates.c \
	./src/structures/push_swap_stack/push_swap_stack_swaps.c \
	./src/structures/push_swap_stack/push_swap_stack_essantials.c \
	./src/structures/push_swap_stack/push_swap_stack_pushs_silent.c \
	./src/structures/push_swap_stack/push_swap_stack_reverse_rotates_silent.c \
	./src/structures/push_swap_stack/push_swap_stack_rotates_silent.c \
	./src/structures/push_swap_stack/push_swap_stack_swaps_silent.c \
	./src/utils/push_swap_sorter/primary_sorter.c \
	./src/utils/push_swap_sorter/founder.c \
	./src/utils/push_swap_sorter/turkish_sort.c \
	./src/utils/push_swap_sorter/rotate_optimiser.c \
	./src/utils/push_swap_sorter/calculator.c \
	./src/utils/push_swap_sorter/calulator_bis.c \
	./src/utils/push_swap_sorter/calculator_final.c \
	./src/utils/push_swap_printer/push_swap_printer.c \
	./src/utils/libft/ft_atoi.c \
	./src/utils/libft/ft_bzero.c \
	./src/utils/libft/ft_calloc.c \
	./src/utils/libft/ft_isalnum.c \
	./src/utils/libft/ft_isalpha.c \
	./src/utils/libft/ft_isascii.c \
	./src/utils/libft/ft_isdigit.c \
	./src/utils/libft/ft_isprint.c \
	./src/utils/libft/ft_itoa.c \
	./src/utils/libft/ft_lstadd_back.c \
	./src/utils/libft/ft_lstadd_front.c \
	./src/utils/libft/ft_lstclear.c \
	./src/utils/libft/ft_lstdelone.c \
	./src/utils/libft/ft_lstiter.c \
	./src/utils/libft/ft_lstlast.c \
	./src/utils/libft/ft_lstmap.c \
	./src/utils/libft/ft_lstnew.c \
	./src/utils/libft/ft_lstsize.c \
	./src/utils/libft/ft_memchr.c \
	./src/utils/libft/ft_memcmp.c \
	./src/utils/libft/ft_memcpy.c \
	./src/utils/libft/ft_memmove.c \
	./src/utils/libft/ft_memset.c \
	./src/utils/libft/ft_putchar_fd.c \
	./src/utils/libft/ft_putendl_fd.c \
	./src/utils/libft/ft_putnbr_fd.c \
	./src/utils/libft/ft_putstr_fd.c \
	./src/utils/libft/ft_split.c \
	./src/utils/libft/ft_strchr.c \
	./src/utils/libft/ft_strdup.c \
	./src/utils/libft/ft_striteri.c \
	./src/utils/libft/ft_strjoin.c \
	./src/utils/libft/ft_strlcat.c \
	./src/utils/libft/ft_strlcpy.c \
	./src/utils/libft/ft_strlen.c \
	./src/utils/libft/ft_strmapi.c \
	./src/utils/libft/ft_strncmp.c \
	./src/utils/libft/ft_strnstr.c \
	./src/utils/libft/ft_strrchr.c \
	./src/utils/libft/ft_strtrim.c \
	./src/utils/libft/ft_substr.c \
	./src/utils/libft/ft_tolower.c \
	./src/utils/libft/ft_toupper.c \
	./src/utils/libft/ft_min.c \
	./src/utils/libft/ft_abs.c \
	./src/utils/libft/ft_max.c \
	./src/utils/libft/ft_get_sign.c \
	./src/utils/libft/ft_atoll.c \
	./src/utils/libft/ft_strcontains.c \
	./src/utils/libft/get_next_line.c \
	./src/utils/parser/parser.c \
	./src/utils/parser/input_checker.c \
	./src/utils/parser/deleter.c

SRC_BONUS = ./src/utils/checker/checker.c \
			./src/utils/checker/interpretor_chercker.c

BUILD: 
	mkdir -p  $(build_folder)
	$(CC) -o $(build_folder)/pushswap $(SRC_GENERAL) src/main.c
	echo "$(green)Built and deploy at $ \(mag) $(build_folder)/$(outfile)$(reset)";

BONUS: 
	mkdir -p  $(build_folder)
	$(CC) -o $(build_folder)/checker $(SRC_GENERAL) $(SRC_BONUS)
	echo "$(green)Built and deploy at $ \(mag) $(build_folder)/$(outfile)$(reset)";

MERGETEST:
	mkdir -p test_TEMP 
	mkdir -p $(testbuild) 
	cp -R src/* test_TEMP 
	cp  \-R ./.test/* test_TEMP
	rm test_TEMP/main.c
	rm test_TEMP/utils/checker/checker.c


GCOV: MERGETEST  
	gcc -g3 -fprofile-arcs -ftest-coverage -O0 -o $(testbuild)/test.out test_TEMP/**/*.c test_TEMP/**/**/*.c test_TEMP/*.c
	./$(testbuild)/test.out 

RUNTEST: MERGETEST  
	gcc -g3 -o $(testbuild)/test.out test_TEMP/**/*.c test_TEMP/**/**/*.c test_TEMP/*.c
	./$(testbuild)/test.out 

TEST: MERGETEST RUNTEST cleantest

TEST_COVERAGE: MERGETEST GCOV

RUN:
	echo "$(green)Run $(mag) $(outfile)$(reset)"
	./$(outfile)
	

BUILD_RUN: BUILD RUN

clean: 
	mkdir -p tmp_ && mv $(outfile) tmp_  
	rm -r $(build_folder)/*
	mv tmp_/* $(build_folder) && rm -r tmp_   

cleantest:
	rm -r test_TEMP

LEAK: TEST
	valgrind --leak-check=full --show-leak-kinds=all --verbose ./test/build/test.out


