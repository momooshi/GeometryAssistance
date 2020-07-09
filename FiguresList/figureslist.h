#ifndef FIGURESLIST_H
#define FIGURESLIST_H
#include "../Figure/figure.h"
#include <QVector>

class FiguresList

{
  private:
    QVector <Figure*> figures;
public:
    FiguresList();
    void show_list();

    void edit_element();
    void save_to_file();
    void del_element(int i) {figures.erase(figures.begin()+i); };
    void search_element();
    void add_element(Figure* figure) { figures.push_back(figure); }
    double get_size() { return figures.size(); }

    Figure* get_element(int i) {return figures.at(i);}
    Figure* operator[](int i) { return figures[i]; }

};

#endif // FIGURESLIST_H
