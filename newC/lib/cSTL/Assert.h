#ifndef _NEWC_ASSERT_H__
#  define _NEWC_ASSERT_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include <assert.h>

#ifndef assert
	struct Make_Assert {
        // http://www.runoob.com/cprogramming/c-standard-library-assert-h.html
        void (*assert)(int ); // 
    };
#endif /* assert */

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _NEWC_ASSERT_H__ */