# Cat Counter  
## This project is for a prospective company
### My Instructions:  
#### 1.) Write a program in C++ that counts the number of occurrences of the word “cat” in incoming text. The program should support two text entry modes: 1) console input, and 2) file input.  
#### 2.) Write a unit test for your cat counter.  
#### 3.) Track your work in a Git repository. Deliver your answer as a Git repository on a publicly-accessible website (such as Github) or a zipped folder containing your git repository  

### Unit Test

```
#include "CppUnitTest.h"
#include "TestProject.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

TEST_CLASS(UnitTest1)
{
public:

    TEST_METHOD(TestCatCountMethod)
    {
        std::string exampletext = "cat cat cat";
        Assert::AreEqual(CatCount(exampletext), 3);
    }
};
```

