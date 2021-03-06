/** @file list4802.cpp */
/** Listing 48-2. The point<int> Specialization */
template<>
class point<int>
{
public:
  typedef int value_type;
  point(int x, int y) : x_(x), y_(y) {}
  point() : x_(), y_() {}
  int x() const { return x_; }
  int y() const { return y_; }
  void move_absolute(int x, int y) {
    x_ = x;
    y_ = y;
  }
  void move_relative(int dx, int dy) {
    x_ += dx;
    y_ += dy;
  }
private:
  int x_;
  int y_;
};
