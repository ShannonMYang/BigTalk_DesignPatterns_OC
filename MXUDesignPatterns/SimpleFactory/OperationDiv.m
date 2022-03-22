//
//  OperationDiv.m
//  MXUDesignPatterns
//
//  Created by yxk on 2022/3/21.
//

#import "OperationDiv.h"

@implementation OperationDiv

- (CGFloat)getResult {
    // 除法类，分母不能为0
    NSParameterAssert(self.numberB != 0);
    return self.numberA / self.numberB;
}

@end
