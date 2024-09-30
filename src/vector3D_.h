#pragma once

#include <iostream>
#include <memory>
#include<math.h>
 
#define SIZE 3

class Vector3D_
{
private:
    std::unique_ptr<float[]> m_array;
public:
    Vector3D_()
    {
        m_array = std::make_unique<float[]>(SIZE);
    }
    Vector3D_(float x, float y, float z)
        :m_array (new float[SIZE])
    {
        m_array[0] = x;
        m_array[1] = y;
        m_array[2] = z;
    }
    // ~Vector3D_()
    // {
    //     delete[] m_array;
    // }

    //Конструктор копирования
    Vector3D_(const Vector3D_ &arr);

    //Оператор присваивания копированием
    Vector3D_& operator=(const Vector3D_ &arr);

    //Конструктор перемещения
    Vector3D_(Vector3D_ &&arr);

    //Оператор присваивания перемещением
    Vector3D_& operator=(Vector3D_ &&arr);

    // операция нормализация
    friend void normalization(std::shared_ptr<Vector3D_> &v)
     {
        float x = v->m_array.get()[0];
        float y = v->m_array.get()[1];
        float z = v->m_array.get()[2];

        float v_length = sqrt(x*x + y*y + z*z);

        for(int i = 0; i < SIZE; ++i)
            v->m_array.get()[i] /= v_length;
        v.get()->print();
     }

    void print();
};