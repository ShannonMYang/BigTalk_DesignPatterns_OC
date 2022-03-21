//
//  OperationFactory.m
//  MXUDesignPatterns
//
//  Created by yxk on 2022/3/21.
//

#import "OperationFactory.h"

#import "OperationAdd.h"
#import "OperationSub.h"
#import "OperationMul.h"
#import "OperationDiv.h"

@implementation OperationFactory

+ (Operation *)createOperation:(OperationType)operationType {
    switch (operationType) {
        case OperationTypeAdd:
            return [[OperationAdd alloc] init];
        case OperationTypeSub:
            return [[OperationSub alloc] init];
        case OperationTypeMul:
            return [[OperationMul alloc] init];
        case OperationTypeDiv:
            return [[OperationDiv alloc] init];
        default:
            return nil;
    }
}

@end
