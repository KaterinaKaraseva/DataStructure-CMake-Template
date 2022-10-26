#include <gtest.h>
#include "../lib_stack/stack.h"

TEST(test_lib_stack, can_crate_stack) {
  ASSERT_NO_THROW(Stack<int> s1(10));
}

TEST(test_lib_stack, can_crate_stack_with_negative_size) {
  ASSERT_ANY_THROW(Stack<int> s1(-5));
}

TEST(test_lib_stack, can_correctly_get_top) {
  Stack s(5);
  S.push(3);
  int res;
  res = s.top();
  EXPECT_EQ(res, 3);
  EXPECT_FALSE(s.isEmpty());
}

TEST(test_lib_stack, can_correctly_pop_top) {
  Stack s(5);
  S.push(3);
  int res;
  res = s.pop();
  EXPECT_EQ(res, 3);
  EXPECT_TRUE(s.isEmpty());
}

TEST(test_lib_stack, can_get_top) {
  ASSERT_NO_THROW(s.top());

}

TEST(test_lib_stack, cant_get_pop_when_stack_has_empty) {
  Stack s(5);
  ASSERT_ANY_THROW(s.pop());

}