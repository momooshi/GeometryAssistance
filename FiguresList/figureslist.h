#ifndef FIGURESLIST_H
#define FIGURESLIST_H
#include "../Figure/figure.h"
#include <QVector>
#include <QFile>
#include <QTextStream>
#include <QTextCodec>
#include "../Figure/round.h"
#include "../Figure/Rrectangle.h"
#include "../Figure/Trapezoid.h"
#include "../Figure/Parallelogram.h"
#include "../Figure/librarytriangle.h"
class FiguresList
{
private:
    QVector <Figure*> figures;
public:

    FiguresList();
    void save_to_file();
    void del_element(int i) {figures.erase(figures.begin()+i); };
    void add_element(Figure* figure) { figures.push_back(figure); }
    double get_size() { return figures.size(); }

    Figure* get_element(int i) { return figures.at(i); }
    Figure* operator[](int i) { return figures[i]; }
    ~FiguresList() {}
};

#endif // FIGURESLIST_H
