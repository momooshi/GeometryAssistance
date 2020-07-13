#include "figureslist.h"

FiguresList::FiguresList() { }

void FiguresList::save_to_file()
{

        QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));

    QFile base ("figures.txt");
    QTextStream in (&base);
    in.setCodec("UTF-8");
    if (base.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QString name;
        for (int i = 0; i < figures.size(); i++)
        {
            name = figures[i]->get_name();
            in<<name<<Qt::endl;

            if (name=="Окружность")
            {
                Round *r = dynamic_cast<Round *>(figures[i]);
                QString radius = QString::number(r->get_rad());
                QString perimeter = QString::number(r->get_perimeter());
                QString square = QString::number(r->get_square());
                QString angle = QString::number(r->get_angle());
                in<<static_cast<QString>("Радиус: ")<<radius<<Qt::endl;
                in<<static_cast<QString>("Периметр (длина окружности): ")<<perimeter<<Qt::endl;
                in<<static_cast<QString>("Площадь: ")<<square<<Qt::endl;
                in<<static_cast<QString>("Угол: ")<<angle<<Qt::endl;
                in<<"----------------------------------------------------------"<<Qt::endl;
            }
            else if (name == "Прямоугольник")
            {
                Rrectangle *r = dynamic_cast<Rrectangle *>(figures[i]);
                QString side_a = QString::number(r->get_length());
                QString side_b = QString::number(r->get_width());
                QString perimeter = QString::number(r->get_perimeter());
                QString square = QString::number(r->get_square());
                QString angle = QString::number(r->get_angle());
                in<<static_cast<QString>("Высота: ")<<side_a<<Qt::endl;
                in<<static_cast<QString>("Ширина: ")<<side_b<<Qt::endl;
                in<<static_cast<QString>("Периметр: ")<<perimeter<<Qt::endl;
                in<<static_cast<QString>("Площадь: ")<<square<<Qt::endl;
                in<<static_cast<QString>("Угол: ")<<angle<<Qt::endl;
                in<<"----------------------------------------------------------"<<Qt::endl;
            }
            else if (name == "Трапеция")
            {
                Trapezoid *r = dynamic_cast<Trapezoid *>(figures[i]);
                QString side_a = QString::number(r->get_side_a());
                QString side_b = QString::number(r->get_side_b());
                QString side_c = QString::number(r->get_side_c());
                QString side_d = QString::number(r->get_side_d());
                QString angle_a = QString::number(r->get_angle_1());
                QString angle_b = QString::number(r->get_angle_2());
                QString angle_c = QString::number(r->get_angle_3());
                QString angle_d = QString::number(r->get_angle_4());
                QString perimeter = QString::number(r->get_perimeter());
                QString square = QString::number(r->get_square());
                QString height = QString::number(r->get_height());
                in<<static_cast<QString>("Сторона А: ")<<side_a<<Qt::endl;
                in<<static_cast<QString>("Сторона В: ")<<side_b<<Qt::endl;
                in<<static_cast<QString>("Сторона С: ")<<side_a<<Qt::endl;
                in<<static_cast<QString>("Сторона D: ")<<side_a<<Qt::endl;
                in<<static_cast<QString>("Угол АВ: ")<<angle_a<<Qt::endl;
                in<<static_cast<QString>("Угол ВС: ")<<angle_b<<Qt::endl;
                in<<static_cast<QString>("Угол CD: ")<<angle_c<<Qt::endl;
                in<<static_cast<QString>("Угол DA: ")<<angle_d<<Qt::endl;
                in<<static_cast<QString>("Периметр: ")<<perimeter<<Qt::endl;
                in<<static_cast<QString>("Площадь: ")<<square<<Qt::endl;
                in<<static_cast<QString>("Высота: ")<<height<<Qt::endl;
                in<<"----------------------------------------------------------"<<Qt::endl;
            }
            else if (name == "Параллелограмм")
            {
                Parallelogram *r = dynamic_cast<Parallelogram *>(figures[i]);
                QString side_a = QString::number(r->get_side_a());
                QString side_b = QString::number(r->get_side_b());
                QString angle_a = QString::number(r->get_angle_1());
                QString angle_b = QString::number(r->get_angle_2());
                QString perimeter = QString::number(r->get_perimeter());
                QString square = QString::number(r->get_square());
                QString height = QString::number(r->get_height());
                in<<static_cast<QString>("Сторона А: ")<<side_a<<Qt::endl;
                in<<static_cast<QString>("Сторона В: ")<<side_b<<Qt::endl;
                in<<static_cast<QString>("Угол АВ: ")<<angle_a<<Qt::endl;
                in<<static_cast<QString>("Угол ВС: ")<<angle_b<<Qt::endl;
                in<<static_cast<QString>("Периметр: ")<<perimeter<<Qt::endl;
                in<<static_cast<QString>("Площадь: ")<<square<<Qt::endl;
                in<<static_cast<QString>("Высота: ")<<height<<Qt::endl;
                in<<"----------------------------------------------------------"<<Qt::endl;
            }
            else if (name == "Треугольник")
            {
                Triangle *r = dynamic_cast<Triangle *>(figures[i]);
                QString side_a = QString::number(r->get_side1());
                QString side_b = QString::number(r->get_side2());
                QString side_c = QString::number(r->get_side3());
                QString angle_a = QString::number(r->get_angle1());
                QString angle_b = QString::number(r->get_angle2());
                QString angle_c = QString::number(r->get_angle3());
                QString perimeter = QString::number(r->get_perimeter());
                QString square = QString::number(r->get_square());

                in<<static_cast<QString>("Сторона А: ")<<side_a<<Qt::endl;
                in<<static_cast<QString>("Сторона В: ")<<side_b<<Qt::endl;
                in<<static_cast<QString>("Сторона C: ")<<side_c<<Qt::endl;
                in<<static_cast<QString>("Угол АВ: ")<<angle_a<<Qt::endl;
                in<<static_cast<QString>("Угол ВС: ")<<angle_b<<Qt::endl;
                in<<static_cast<QString>("Угол СA: ")<<angle_c<<Qt::endl;
                in<<static_cast<QString>("Периметр: ")<<perimeter<<Qt::endl;
                in<<static_cast<QString>("Площадь: ")<<square<<Qt::endl;

                in<<"----------------------------------------------------------"<<Qt::endl;

            }
        }
    }
}
