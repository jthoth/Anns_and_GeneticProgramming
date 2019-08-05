//
// Created by thoth on 8/5/19.
//
//
// Created by thoth on 8/5/19.
//

#include <gtest/gtest.h>
#include "../src/LogicsGates/And.h"
#include "../src/LogicsGates/Or.h"
#include "../src/LogicsGates/Not.h"
#include "../src/LogicsGates/NAnd.h"


using testing::Eq;

namespace {
    class ClassAndDeclaration : public testing::Test{
    public:
        And obj;
        ClassAndDeclaration(){
            obj;
        }
    };

    TEST_F(ClassAndDeclaration, ShouldBeFalseinput_0x0){
        std::vector<float> input = {0, 0, 1}; // x1, x2, for_bias
        float output = obj.forward(input);
        ASSERT_EQ(output, 0);
    }
    TEST_F(ClassAndDeclaration, ShouldBeFalseinput_0x1){
        std::vector<float> input = {0, 1, 1}; // x1, x2, for_bias
        float output = obj.forward(input);
        ASSERT_EQ(output, 0);
    }
    TEST_F(ClassAndDeclaration, ShouldBeFalseinput_1x0){
        std::vector<float> input = {1, 0, 1}; // x1, x2, for_bias
        float output = obj.forward(input);
        ASSERT_EQ(output, 0);
    }
    TEST_F(ClassAndDeclaration, ShouldBeTrueinput_1x1){
        std::vector<float> input = {1, 1, 1}; // x1, x2, for_bias
        float output = obj.forward(input);
        ASSERT_EQ(output, 1);
    }
}

namespace {
    class ClassOrDeclaration : public testing::Test{
    public:
        Or obj;
        ClassOrDeclaration(){
            obj;
        }
    };

    TEST_F(ClassOrDeclaration, ShouldBeFalseinput_0x0){
        std::vector<float> input = {0, 0, 1}; // x1, x2, for_bias
        float output = obj.forward(input);
        ASSERT_EQ(output, 0);
    }
    TEST_F(ClassOrDeclaration, ShouldBeTrueinput_0x1){
        std::vector<float> input = {0, 1, 1}; // x1, x2, for_bias
        float output = obj.forward(input);
        ASSERT_EQ(output, 1);
    }
    TEST_F(ClassOrDeclaration, ShouldBeTrueinput_1x0){
        std::vector<float> input = {1, 0, 1}; // x1, x2, for_bias
        float output = obj.forward(input);
        ASSERT_EQ(output, 1);
    }
    TEST_F(ClassOrDeclaration, ShouldBeTrueinput_1x1){
        std::vector<float> input = {1, 1, 1}; // x1, x2, for_bias
        float output = obj.forward(input);
        ASSERT_EQ(output, 1);
    }
}

namespace {
    class ClassNotDeclaration : public testing::Test{
    public:
        Not obj;
        ClassNotDeclaration(){
            obj;
        }
    };

    TEST_F(ClassNotDeclaration, ShouldBeTrueinput_0){
        std::vector<float> input = {0, 1}; // x1, for_bias
        float output = obj.forward(input);
        ASSERT_EQ(output, 1);
    }
    TEST_F(ClassNotDeclaration, ShouldBeFalseinput_1){
        std::vector<float> input = {1, 1}; // x1, for_bias
        float output = obj.forward(input);
        ASSERT_EQ(output, 0);
    }
}

namespace {
    class ClassNAndDeclaration : public testing::Test{
    public:
        NAnd obj;
        ClassNAndDeclaration(){
            obj;
        }
    };

    TEST_F(ClassNAndDeclaration, ShouldBeTrueinput_0x0){
        std::vector<float> input = {0, 0, 1}; // x1, x2, for_bias
        float output = obj.forward(input);
        ASSERT_EQ(output, 1);
    }
    TEST_F(ClassNAndDeclaration, ShouldBeTrueinput_0x1){
        std::vector<float> input = {0, 1, 1}; // x1, x2, for_bias
        float output = obj.forward(input);
        ASSERT_EQ(output, 1);
    }
    TEST_F(ClassNAndDeclaration, ShouldBeTrueinput_1x0){
        std::vector<float> input = {1, 0, 1}; // x1, x2, for_bias
        float output = obj.forward(input);
        ASSERT_EQ(output, 1);
    }
    TEST_F(ClassNAndDeclaration, ShouldBeFalseinput_1x1){
        std::vector<float> input = {1, 1, 1}; // x1, x2, for_bias
        float output = obj.forward(input);
        ASSERT_EQ(output, 0);
    }
}