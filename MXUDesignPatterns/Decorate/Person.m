//
//  Person.m
//  MXUDesignPatterns
//
//  Created by yxk on 2022/3/23.
//

#import "Person.h"

@interface Person()

@property (nonatomic, copy) NSString *name;

@end

@implementation Person

- (instancetype)initWithName:(NSString *)name {
    self = [super init];
    if (self) {
        self.name = name;
    }
    return self;
}

- (void)show {
    NSLog(@"~装饰者：%@", self.name);
}

@end
