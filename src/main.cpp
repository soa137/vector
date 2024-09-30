#include <iostream>
#include "vector3D.h"
#include "vector3D_.h"


int main()
{
        Vector3D vec;
        // for(int i = 0; i < vec.getLength(); ++i)
        // {
        //         std::cout << "x: " << vec[i] << '\n';
        // }
        vec.print();

        Vector3D vec2(1,2,3);
        vec2.print();

        std::cout << "Copying Vector3D:\n";
        Vector3D vec3(vec2); // вызывает версию l-value
        std::cout << "vec3:\n";
        vec3.print();
        std::cout << "vec2:\n";
        vec2.print();

        vec = vec3; // вызывает версию l-value
        std::cout << "vec:\n";
        vec.print();
        std::cout << "vec3:\n";
        vec3.print();

        std::cout << "Moving Vector3D\n";
        Vector3D vec4(std::move(vec2)); // вызывает версию r-value
        std::cout << "vec4:\n";
        vec4.print();
        // std::cout << "vec2:\n";
        // std::cout << "vec2 is " << (static_cast<bool>(&vec2) ? "not null\n " : "null\n");
        // if(&vec2 != 0)
        // {
        //         vec2.print();
        // }

        std::cout << "Moving by assignment Vector3D\n";
        vec = std::move(vec4); // вызывает версию r-value
        std::cout << "vec:\n";
        vec.print();
        // std::cout << "vec4:\n";
        // if(&vec4 != 0)
        // {
        //         vec4.print();
        // }
        Vector3D_ vec_;
        vec_.print();

        Vector3D_ vec2_(3,2,1);
        vec2_.print();

        std::cout << "Copying Vector3D_:\n";
        Vector3D_ vec3_(vec2_); // вызывает версию l-value
        std::cout << "vec3_:\n";
        vec3_.print();
        std::cout << "vec2_:\n";
        vec2_.print();

        vec_ = vec3_; // вызывает версию l-value
        std::cout << "vec_:\n";
        vec_.print();
        std::cout << "vec3_:\n";
        vec3_.print();

        std::cout << "Moving Vector3D_\n";
        Vector3D_ vec4_(std::move(vec2_)); // вызывает версию r-value
        std::cout << "vec4_:\n";
        vec4_.print();
        std::cout << "vec2_:\n";
        // std::cout << "vec2 is " << (static_cast<bool>(&vec2) ? "not null\n " : "null\n");
        // if(&vec2_ != 0)
        // {
        //         vec2_.print();
        // }

        std::cout << "Moving by assignment Vector3D_\n";
        vec_ = std::move(vec4_); // вызывает версию r-value
        std::cout << "vec_:\n";
        vec_.print();
        // std::cout << "vec4_:\n";
        // if(&vec4_ != 0)
        // {
        //         vec4_.print();
        // }

        std::cout << "Vector normalization Vector3D_\n";
        auto vec5_ = std::make_shared<Vector3D_>(3,2,1);
        std::cout << "vec5_:\n";
        normalization(vec5_);


        return 0;
} 