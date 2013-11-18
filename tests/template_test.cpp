extern "C" {
#include "template/template.h"
}

#include "gtest/gtest.h"

TEST(TemplateTest, ReturnValue) {
  //EXPECT_EQ(1, 1);
  EXPECT_EQ(run_template(), 0);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
