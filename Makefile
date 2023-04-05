CFLAGS = -std=c++17 -O2
LDFLAGS = -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi

triangle: *.cpp headers/*.hpp
	g++ $(CFLAGS) -o triangle *.cpp $(LDFLAGS)

.PHONY: test clean

test: triangle
	./triangle

clean:
	rm -f triangle