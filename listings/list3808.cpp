/** @file list3808.cpp */
/** Listing 38-8. Declaring and Defining Static Data Members */
#include <iostream>
#include <ostream>

class rational {
public:
  rational();
  rational(int num);
  rational(int num, int den);
  int numerator() const { return numerator_; }
  int denominator() const { return denominator_; }
  // Some useful constants
  static const rational zero;
  static const rational one;
  static const rational pi;
private:
  void reduce();
  int numerator_;
  int denominator_;
};

rational::rational() : numerator_(0), denominator_(1) {}
rational::rational(int num) : numerator_(num), denominator_(1) {}
rational::rational(int num, int den)
: numerator_(num), denominator_(den)
{
  reduce();
}

std::ostream& operator<<(std::ostream& out, rational const& r);

const rational rational::zero;
const rational rational::one(1);
const rational rational::pi(355, 113);

int main()
{
  std::cout << "pi = " << rational::pi << '\n';
}
