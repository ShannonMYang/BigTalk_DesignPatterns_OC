//
//  CashRebate.m
//  MXUDesignPatterns
//
//  Created by 木熹鱼 on 2022/3/21.
//

#import "CashRebate.h"

@interface CashRebate()

@property (nonatomic, assign) CGFloat moneyRebate;

@end

@implementation CashRebate

- (instancetype)initWithMoneyWithRebate:(CGFloat)moneyRebate {
    self = [super init];
    if (self) {
        self.moneyRebate = moneyRebate;
    }
    return self;
}

- (CGFloat)acceptCash:(CGFloat)cash {
    return cash * self.moneyRebate;
}

@end
