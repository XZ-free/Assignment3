//AI for gramar improve of comment and debug is used in this assignment
//it is used in previous and will be used in furutre assignments.
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <cmath>
#include <algorithm>
#include "particle.h"
//using namespace std;

class particle
{
private:
    std::string type{"N/A"};
    double restmass{0.0};
    double charge{0.0};
    double velocity{0.0};
    double beta_value{0.0};
public:
    


}



struct Lepton {
    string type;
    double restmass, charge, velocity, beta_value
};


void computeStatistics(const vector<double>& prices, double& mean, double& stddev, double& std_err) {
    int n = prices.size();
    if (n == 0) {
        mean = 0.0;
        stddev = 0.0;
        std_err = 0.0;
        return;
    }
    double sum = 0.0, sumSq = 0.0;
    for (double price : prices) {
        sum += price;
        sumSq += price * price;
    }
    mean = sum / n;
    stddev = sqrt((sumSq / n) - (mean * mean));
    std_err = stddev / sqrt(n); // 修改 1
}

void printBooks(const vector<Book>& books) {
    for (const auto& book : books) {
        cout << book.price << "\t" << book.subject << "\t" << book.author << "\t" << book.title << endl;
    }
}

int main() {
    //main part to be  here
    return 0;
}