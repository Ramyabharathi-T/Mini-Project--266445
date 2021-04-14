PROJECT_NAME=test
TEST_PROJ_NAME = Test_$(PROJECT_NAME)
SRC = Src/a.c\
Src/b.c

COV_SRC = test_a.c

TEST_SRC = test/test.c \
unity/unity.c 
INC_H = inc
INC_T = unity


INC = unity

TEST=unity\unity.c

$(PROJECT_NAME).exe : $(SRC) $(TEST)
	gcc -I $(INC) $(SRC) $(TEST) -o $(PROJECT_NAME).exe
