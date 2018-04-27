#ifndef INTERVIEW_TEST_TEST_H
#define INTERVIEW_TEST_TEST_H

class Test
{
 public:
  virtual bool runTest() = 0;
};



class ExampleTest : public Test
{
 public:
  bool runTest() override {
    return false;
  }
};

#endif //INTERVIEW_TEST_TEST_H
