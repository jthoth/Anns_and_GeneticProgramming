//
// Created by thoth on 8/5/19.
//

#include <gtest/gtest.h>
#include "../src/Neuron.h"

using testing::Eq;

namespace {
 class ClassDeclaration : public testing::Test{
 public:
     Neuron obj;
     ClassDeclaration(){
        obj;
     }
 };

 TEST_F(ClassDeclaration, CheckYourName){
     ASSERT_EQ("", "");
 }

 TEST_F(ClassDeclaration, CheckYourName2){
    ASSERT_EQ("", "");
 }

}