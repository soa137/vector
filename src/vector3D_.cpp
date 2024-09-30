#include "vector3D_.h"
#include <iostream>




   //Конструктор копирования
   Vector3D_::Vector3D_(const Vector3D_ &arr)
    {
        //std::cout << "Copy constructor Vector3D_:\n";
        m_array = std::make_unique<float[]>(SIZE);
        for(int i = 0 ; i < SIZE; ++i)
            m_array[i] = arr.m_array[i];
    }

    //Оператор присваивания копированием
    Vector3D_& Vector3D_::operator=(const Vector3D_ &arr)
    {
        //std::cout << "Copy by assignment Vector3D_:\n";
        if(&arr == this)
            return *this;


        for(int i = 0; i < SIZE; ++i)
            m_array.get()[i] = arr.m_array.get()[i];

        return *this;
    }

    //Конструктор перемещения
    Vector3D_::Vector3D_(Vector3D_ &&arr)
        : m_array(std::move(arr.m_array))
    {
        //std::cout << "Moving constructor Vector3D_:\n";
    }

    //Оператор присваивания перемещением
    Vector3D_& Vector3D_::operator=(Vector3D_ &&arr)
    {
        //std::cout << "Moving by assignment Vector3D_:\n";
        if (&arr == this)
            return *this;

        m_array = std::move(arr.m_array);

        return *this;
    }

    void Vector3D_::print()
    {
        std::cout << "Vector3D_ ( ";
        for(int i = 0; i < SIZE; ++i)
            std::cout << m_array.get()[i] << " ";
        std::cout << ")\n";
    }

    
     
