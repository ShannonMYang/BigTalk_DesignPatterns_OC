//
//  DecorateTests.m
//  MXUDesignPatternsTests
//
//  Created by yxk on 2022/3/23.
//

#import <XCTest/XCTest.h>

#import "Person.h"
#import "Finery.h"
#import "Sneakers.h"
#import "BigTrouser.h"
#import "TShirts.h"

@interface DecorateTests : XCTestCase

@end

@implementation DecorateTests

- (void)testDecorate
{
    Person *xc = [[Person alloc] initWithName:@"小菜"];
    NSLog(@"第一种装扮~");
    Sneakers *sn = [[Sneakers alloc] initWithDecorate:xc];
    TShirts *ts = [[TShirts alloc] initWithDecorate:sn];
    BigTrouser *bi = [[BigTrouser alloc] initWithDecorate:ts];
    [bi show];
    
    Finery *fi = [[Finery alloc] initWithDecorate:xc];
    NSLog(@"第二种装扮~");
    fi = [[BigTrouser alloc] initWithDecorate:fi];
    fi = [[TShirts alloc] initWithDecorate:fi];
    fi = [[Sneakers alloc] initWithDecorate:fi];
    [fi show];
}

@end
