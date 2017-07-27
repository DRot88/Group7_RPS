#ifndef ROCK_HPP
#define ROCK_HPP

class Rock : public Tool {
  private:
    char type;
  public:
    Rock(); // default – set strength to 1, set type to ‘r’
    Rock(int str, char r); // sets user defined strength
    virtual void fight(); // temp double strength against Scissors, half strength vs Paper
};


#endif