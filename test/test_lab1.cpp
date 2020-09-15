#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, average1
){
ASSERT_DOUBLE_EQ(69.1919,average(83.838383, 54.545454));
}
TEST(task1, average2
){
ASSERT_DOUBLE_EQ(3.0,average(2.0, 4.0));
}
TEST(task1, good1
){
ASSERT_EQ(1,good(5.5, 30.25));
}
TEST(task1, good2
){
ASSERT_EQ(0,good(342.123, 234.123));
}
TEST(task1, improve1
){
ASSERT_DOUBLE_EQ(5.32475,improve(10.1, 5.55));
}
TEST(task1, improve2
){
ASSERT_DOUBLE_EQ(22.2632,improve(44.404, 5.4321));
}
TEST(task1, iter1
){
ASSERT_DOUBLE_EQ(2.33069,iter(44.404, 5.4321));

}
TEST(task1, iter2
){
ASSERT_DOUBLE_EQ(72.2664,iter(8321.1234, 5222.4321));

}
TEST(task1, calc1
){
ASSERT_DOUBLE_EQ(91.2202,calc(8321.1234));

}
TEST(task1, calc2
){
ASSERT_DOUBLE_EQ(111.111,calc(12345.6789));

}
