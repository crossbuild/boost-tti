#if !defined(TEST_HAS_MEMBER_DATA_HPP)
#define TEST_HAS_MEMBER_DATA_HPP

#include "TestStructs.hpp"
#include <boost/tti/TTIntrospection.hpp>

TTI_HAS_MEMBER_DATA(AnInt)
TTI_HAS_MEMBER_DATA(aMember)
TTI_TRAIT_HAS_MEMBER_DATA(CMember,cMem)
TTI_HAS_MEMBER_DATA(someDataMember)
TTI_HAS_MEMBER_DATA(IntBT)
TTI_TRAIT_HAS_MEMBER_DATA(NestedData,NestedCT)
TTI_TRAIT_HAS_MEMBER_DATA(AOther,OtherAT)
TTI_HAS_MEMBER_DATA(ONestStr)

#endif // TEST_HAS_MEMBER_DATA_HPP
