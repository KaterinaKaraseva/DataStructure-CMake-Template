#include <gtest.h>
#include "../lib_queue/queue.h"

TEST(test_lib_queue, can_create_queue) {
  ASSERT_NO_THROW(Queue<int> s1(5));
}

TEST(test_lib_queue, can_create_with_negative_size) {
  ASSERT_ANY_THROW(Queue<int> s1(-5));
}