#include <iostream>

class shapes
{
public:
    shapes()
    {
        num_sides = 0;
        shape_name = "Неизвестная фигура";
    }
    int get_num_sides() { return num_sides; }
    std::string get_shape_name() { return shape_name; }
protected:
    int num_sides;
    std::string shape_name;
};
class triangles : public shapes
{
public:
    triangles()
    {
        num_sides = 3;
        shape_name = "Треугольник";
    }  
};
class quadrangles :public shapes
{
public:
    quadrangles()
    {
        num_sides = 4;
        shape_name = "Четырехугольник";
    }
};

int main()
{
    shapes shape;
    triangles triangle;
    quadrangles quadrangle;
    std::cout << " Количество сторон: " << std::endl;
    std::cout << shape.get_shape_name() << " " << shape.get_num_sides() << std::endl;
    std::cout << triangle.get_shape_name() << " " << triangle.get_num_sides() << std::endl;
    std::cout << quadrangle.get_shape_name() << " " << quadrangle.get_num_sides() << std::endl;
}