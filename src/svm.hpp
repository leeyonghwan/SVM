#ifndef SVM_HPP
#define SVM_HPP

#include <string>
#include <vector>

class svm {

public:
    svm();
    ~svm();

   void train();
   void run();

public: 
 

private:
    double b;
    std::vector<double> w_vector;
    std::vector<int> ys;
    std::vector<double> alpha_s;

private:
    double dot();

    double function_f();
    double function_g();
};

#endif