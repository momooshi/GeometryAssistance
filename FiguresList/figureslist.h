#ifndef FIGURESLIST_H
#define FIGURESLIST_H
#include "../Figure/figure.h"
#include <list>

class FiguresList

{
  private:
    std::list <Figure*> figures;
public:
    FiguresList();
    void show_list();

    void edit_element();
    void save_to_file();
    void del_element();
    void search_element();
    void add_element(Figure* figure) { figures.push_back(figure); }

};

#endif // FIGURESLIST_H
