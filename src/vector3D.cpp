#include "vector3D.h"
#include <iostream>



   //Конструктор копирования
   Vector3D::Vector3D(const Vector3D &arr)
    {
        m_array = new float[SIZE];
        for(int i = 0 ; i < SIZE; ++i)
            m_array[i] = arr.m_array[i];
    }

    //Оператор присваивания копированием
    Vector3D& Vector3D::operator=(const Vector3D &arr)
    {
        if(&arr == this)
            return *this;

        delete[] m_array;

        m_array = new float[SIZE];

        for(int i = 0; i < SIZE; ++i)
            m_array[i] = arr.m_array[i];

        return *this;
    }

    //Конструктор перемещения
    Vector3D::Vector3D(Vector3D &&arr)
        : m_array(arr.m_array)
    {
        arr.m_array = nullptr;
    }

    //Оператор присваивания перемещением
    Vector3D& Vector3D::operator=(Vector3D &&arr)
    {
        if (&arr == this)
            return *this;

        delete[] m_array;

        m_array = arr.m_array;

        arr.m_array = nullptr;

        return *this;
    }

    void Vector3D::print()
    {
        std::cout << "Vector3D ( ";
        for(int i = 0; i < SIZE; ++i)
            std::cout << m_array[i] << " ";
        std::cout << ")\n";
    };
