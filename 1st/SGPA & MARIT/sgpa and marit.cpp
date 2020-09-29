#include<iostream>
#include "Informations.cpp"
#include "Results.cpp"

int main()
{
    Informations s1,s2,s3;
    s1.input();
    s2.input();
    s3.input();
    int roll;
    Results Rs(s1,s2,s3);
    std::cout<<"Enter Student ID to find :";
    std::cin>>roll;
    Rs.finds(roll);
    return 0;
}
