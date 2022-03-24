//
//  Proxy.m
//  MXUDesignPatterns
//
//  Created by 木熹鱼 on 2022/3/24.
//

#import "Proxy.h"

#import "Pursuit.h"

@interface Proxy()

@property (nonatomic, strong) Pursuit *pursuit;

@end

@implementation Proxy

- (instancetype)initWithSchoolGirl:(SchoolGirl *)schoolGirl
{
    self = [super init];
    if (self) {
        self.pursuit = [[Pursuit alloc] initWithSchoolGirl:schoolGirl];
    }
    return self;
}

- (void)giveDolls
{
    [self.pursuit giveDolls];
}

- (void)giveFlowers
{
    [self.pursuit giveFlowers];
}

- (void)giveChocolate
{
    [self.pursuit giveChocolate];
}

@end
