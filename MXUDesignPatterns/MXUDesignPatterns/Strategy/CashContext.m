//
//  CashContext.m
//  MXUDesignPatterns
//
//  Created by 木熹鱼 on 2022/3/21.
//

#import "CashContext.h"

@interface CashContext()

@property (nonatomic, strong) id<CashSuper> cashSuper;

@end

@implementation CashContext

- (instancetype)initWithCashSuper:(id<CashSuper>)cashSuper {
    self = [super init];
    if (self) {
        self.cashSuper = cashSuper;
    }
    return self;
}

- (CGFloat)getResult:(CGFloat)money {
    return [self.cashSuper acceptCash:money];
}

@end
