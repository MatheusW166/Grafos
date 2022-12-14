#ifndef GRAFO_INTERFACE_H
#define GRAFO_INTERFACE_H

class IGrafo
{
private:
    int _m;
    int _n;

public:
    IGrafo(int, int);
    virtual void ler_arestas() = 0;
    virtual void print_grafo() = 0;
    virtual int dfs() = 0;
    int get_m();
    int get_n();
};

#endif