CXX ?= c++
CXXFLAGS ?= -std=c++17 -Wall -Wextra -pedantic

.PHONY: check clean

check: build/test_math
	./build/test_math

build/test_math: src/relay_math.cpp tests/test_math.cpp
	mkdir -p build
	$(CXX) $(CXXFLAGS) -Isrc src/relay_math.cpp tests/test_math.cpp -o $@

clean:
	rm -rf build
