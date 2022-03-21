//
//  CashReturn.m
//  MXUDesignPatterns
//
//  Created by 木熹鱼 on 2022/3/21.
//

#import "CashReturn.h"

@interface CashReturn()

@property (nonatomic, assign) CGFloat moneyCondition;
@property (nonatomic, assign) CGFloat moneyReturn;

@end

@implementation CashReturn

- (instancetype)initWithMoneyCondition:(CGFloat)moneyCondition
                           moneyReturn:(CGFloat)moneyReturn {
    self = [super init];
    if (self) {
        self.moneyCondition = moneyCondition;
        self.moneyReturn = moneyReturn;
    }
    return self;
}

- (CGFloat)acceptCash:(CGFloat)cash {
    return cash >= self.moneyCondition ? cash - floor(cash / self.moneyCondition) * self.moneyReturn : cash;
}

@end
