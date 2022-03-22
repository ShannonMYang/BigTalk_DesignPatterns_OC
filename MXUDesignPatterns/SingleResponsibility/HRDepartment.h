//
//  HRDepartment.h
//  MXUDesignPatterns
//
//  Created by yxk on 2022/3/22.
//

#import <Foundation/Foundation.h>
#import "Employee.h"

NS_ASSUME_NONNULL_BEGIN

// 人事部门类
@interface HRDepartment : NSObject

// 判断是否晋升
- (BOOL)willGetPromotionThisYear:(Employee *)employee;

@end

NS_ASSUME_NONNULL_END
