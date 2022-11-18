#include<iostream>
using namespace std;
const double PI=3.1415;
class Triangle{
	public:
		double base;
		double height;
		double getArea(){
			return (base*height)/2;
		}
};
class Circle{
	public:
		double radius;
		double getArea(){
			return radius*radius*PI;
		}
};
class TriangularPrism:public Triangle{
	public:
		double Height;
		double getVolume(){
			return Height*getArea();
		}
};
class Cylinder:public Circle{
	public:
		double height;	
		double getVolume(){
			return height*getArea();
		}
};
class Shape{
	private:
		Triangle triangle;
		Circle circle;
		TriangularPrism triangularprism;	
		Cylinder cylinder;
	public:
		void Calculate(){
			triangle.base=1;
			triangle.height=2;
			
			circle.radius=2;
			
			triangularprism.base=10;
			triangularprism.height=10;
			triangularprism.Height=10;
			
			cylinder.radius=10;
			cylinder.height=10;
			
			cout<<"�����ε����="<<triangle.getArea()<<endl;
			cout<<"Բ�ε����="<<circle.getArea()<<endl;
			cout<<"�����������="<<triangularprism.getVolume()<<endl;
			cout<<"Բ��������="<<cylinder.getVolume()<<endl;			 
		}
};
int main(){
	Shape shape;
	shape.Calculate();
	return 0;	
}
