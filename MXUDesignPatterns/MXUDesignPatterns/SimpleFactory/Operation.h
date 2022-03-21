//
//  Operation.h
//  MXUDesignPatterns
//
//  Created by yxk on 2022/3/21.
//

#import <Foundation/Foundation.h>

//NS_ASSUME_NONNULL_BEGIN

// 运算类型
typedef NS_ENUM(NSUInteger, OperationType) {
    OperationTypeAdd,  // 加法
    OperationTypeSub,  // 减法
    OperationTypeMul,  // 乘法
    OperationTypeDiv,  // 除法
};

// 运算抽象类
@interface Operation : NSObject

// 操作数A
@property (nonatomic, assign) CGFloat numberA;
// 操作数B
@property (nonatomic, assign) CGFloat numberB;

/**
 获取运算结果
 
 @return 运算结果
 */
- (CGFloat)getResult;

@end

//NS_ASSUME_NONNULL_END
