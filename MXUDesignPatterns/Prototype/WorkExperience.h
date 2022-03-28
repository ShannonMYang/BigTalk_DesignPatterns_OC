//
//  WorkExperience.h
//  MXUDesignPatterns
//
//  Created by 木熹鱼 on 2022/3/28.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WorkExperience : NSObject<NSCopying>

// 时间区间
@property (nonatomic, strong) NSString *workDate;
// 公司
@property (nonatomic, strong) NSString *company;

@end

NS_ASSUME_NONNULL_END
