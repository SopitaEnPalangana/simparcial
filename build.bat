g++ -I./include -c ./src/articulo.cpp
g++ -I./include -c ./src/cliente.cpp
g++ -I./include -c ./src/pedido.cpp
g++ -I./include -c ./src/funciones.cpp
g++ -I./include -c main.cpp

g++ -I./include articulo.o cliente.o pedido.o funciones.o main.o -o app.exe

DEL *.o

app.exe