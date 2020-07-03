#ifndef FIGURESLIST_H
#define FIGURESLIST_H
#include "../Figure/figure.h"
#include <list>
//#include <QDialog>

class FiguresList
{private:
    std::list <Figure*> figures;
public:
    FiguresList();
    void show_list();
    void add_element();
    void edit_element();
    void save_to_file();
    void del_element();
    void search_element();
};

#endif // FIGURESLIST_H
