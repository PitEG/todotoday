struct Date {
  int day;
  int month;
  int year;

  bool operator==(const Date& other) const {
    if (day != other.day) { return false; }
    if (month != other.month) { return false; }
    if (year != other.year) { return false; }
    return true;
  }

  bool operator!=(const Date& other) const {
    return !(*this == other);
  }
};
