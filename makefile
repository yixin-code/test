TARGET=a.out

SRC=./59.cpp

# 将.c替换成.o
# SRC=$(patsubst %.cpp, %.o, $(TEMP))

G = g++

FLAG=-Wall -std=c++11 -g -fsanitize=address
# FLAG=-Wall -std=c++98 -g -fsanitize=address
# FLAG=-Wall -std=c++20 -g

# 内存泄漏检查
# -fsanitize=address

# 动态库
# -fPIC -shared

# 返回值不进行优化
# -fno-elide-constructors

# 警告是为错误
# -Werror

# make如果有多个目标的时候会自动编译 clean如果写在此处会每次都执行
all:a.out

$(TARGET):$(SRC)
	$(G) $(SRC) $(FLAG) -o $(TARGET)

# %.o:%.c
	# $(G) $< -c -o $@

# make clean
# clean:
# 	rm -rf a.out
