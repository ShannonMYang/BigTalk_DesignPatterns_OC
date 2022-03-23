//
//  Finery.m
//  MXUDesignPatterns
//
//  Created by yxk on 2022/3/23.
//

#import "Finery.h"

@interface Finery()

@property (nonatomic, strong) Person *component;

@end

@implementation Finery

- (instancetype)initWithDecorate:(Person *)component {
    self = [super init];
    if (self) {
        self.component = component;
    }
    return self;
}

- (void)show {
    if (self.component) {
        [self.component show];
    }
}

@end
