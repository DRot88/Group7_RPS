#ifndef TOOL_HPP
#define TOOL_HPP

class Tool {
  protected:
    int strength;
  public:
    Tool();
    void setStrength(int str);
    int getStrength();
    // virtual void fight(*tool); // potentially pure virtual function
};

#endif