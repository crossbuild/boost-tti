#include "TestHasMemberData.hpp"
#include <boost/mpl/assert.hpp>

int main()
  {
  
  // Wrong data signature for aMember
  
  BOOST_MPL_ASSERT(( tti::has_member_data_aMember<AnotherType,int> ));
  
  return 0;

  }
