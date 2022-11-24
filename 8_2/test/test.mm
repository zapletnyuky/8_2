#include "Header.h"
#import <XCTest/XCTest.h>

@interface teest : XCTestCase

@end

@implementation teest

- (void)testLab {
    srand((unsigned)time(NULL));
    char str[BUFSIZ];
    const char ch = 'a';
    trim_end(str, ch);
    
    XCTAssertEqual(0, 0);
    
}

@end
