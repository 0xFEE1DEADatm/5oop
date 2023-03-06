#include"Norm.h"
#include"Complex.h"
#include"Vector3D.h"

int main()
{
    int choice1, choice2;
    double x, y, z;
    double x1, y1, z1, x2, y2, z2;
    char end = 'd';

    do 
    {
        std::cout << " Select action: \n";
        std::cout << "1. complex number \n2. vectors " << std::endl;
        std::cin >> choice1;
        system("cls");
        switch (choice1)
        {
        case 1: 
        {
            std::cout << " Enter x, y:\n";
            std::cin >> x >> y;
            Complex c(x, y);
            std::cout << " Select action : \n";
            std::cout << "1. module \n2. norma" << std::endl;
            std::cin >> choice2;
            switch (choice2)
            {
            case 1:
            {
                std::cout << c.module() << std::endl;
                break;
            }
            case 2:
            {
                std::cout << c.norma() << std::endl;
                break;
            }  
            }
        }
        case 2: 
        {
            std::cout << " Enter the vector coordinates in the 3d space:\n";
            std::cin >> x1 >> x2 >> y1 >> y2 >> z1 >> z2;
            Vector3D v(x1, y1, z1);
            std::cout << " Select action : \n";
            std::cout << "1. module \n2. norma" << std::endl;
            std::cin >> choice2;
            switch (choice2)
            {
            case 1:
            {
                std::cout << v.module() << std::endl;
                break;
            }
            case 2:
            {
                std::cout << v.norma() << std::endl;
                break;
            }
            }
        }
        }
        std::cout << "If you want to shut down, enter:(a/A):";
        std::cin >> end;
    } while (end != 'a' && end != 'A');
    return 0;

}
