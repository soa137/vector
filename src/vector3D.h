#pragma once

#include <iostream>
 
#define SIZE 3

class Vector3D
{
private:
    float* m_array;
public:
    Vector3D()
    {
        m_array = new float[SIZE]{};
    }
    Vector3D(float x, float y, float z)
        :m_array (new float[SIZE])
    {
        m_array[0] = x;
        m_array[1] = y;
        m_array[2] = z;
    }
    ~Vector3D()
    {
        delete[] m_array;
    }

    //Конструктор копирования
    // Vector3D(const Vector3D &arr) = delete;
    //Конструктор копирования
    Vector3D(const Vector3D &arr);
    //Оператор присваивания копированием
    // Vector3D& operator=(const Vector3D &arr) = delete;
    //Оператор присваивания копированием
    Vector3D& operator=(const Vector3D &arr);

    //Конструктор перемещения
    Vector3D(Vector3D &&arr);

    //Оператор присваивания перемещением
    Vector3D& operator=(Vector3D &&arr);

    // int getLength () const { return SIZE; };

    // float& operator[] (int index ) { return m_array[index]; };

    // const float& operator[] (int index ) const { return m_array[index]; };

    void print();
};