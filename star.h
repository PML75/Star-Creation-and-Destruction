#include <iomanip>
#include <iostream>
#include <string>

class Star {
 public:

    Star(std::string nStar, double nRadius) : star_name_(nStar), solar_radius_(nRadius) {
      std::cout << "The star " << GetName() << " was born" << std::endl;
    }
    ~Star() {
      std::cout << std::fixed << std::setprecision(2) << "The star " << GetName() << " has gone supernova. It was " << solar_radius_ * solar_radius_ << " times the volume of our sun." << std::endl;
    }
    std::string GetName() const {
      return star_name_;
    }
    

  private:
    std::string star_name_;
    double solar_radius_;
};
