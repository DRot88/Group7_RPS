#ifndef TOOL_HPP
#define TOOL_HPP

class Tool {
  protected:
    int strength;
    char type;
  public:
    Tool();
    virtual ~Tool();
    void setStrength(int str);
    int getStrength();
    virtual char getType();
    // virtual void fight(*tool); // potentially pure virtual function
};

#endif