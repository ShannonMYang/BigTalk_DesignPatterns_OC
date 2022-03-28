//
//  Resume.h
//  MXUDesignPatterns
//
//  Created by 木熹鱼 on 2022/3/28.
//

#import <Foundation/Foundation.h>
#import "WorkExperience.h"

NS_ASSUME_NONNULL_BEGIN

/**
 简历抽象类，有两个具体子类
 ResumeShallowCopy 子类实现浅拷贝
 ResumeDeepCopy 子类深拷贝
 */
@interface Resume : NSObject<NSCopying>

// 姓名
@property (nonatomic, strong) NSString *name;

// 性别
@property (nonatomic, strong) NSString *sex;

// 年龄
@property (nonatomic, strong) NSString *age;

// 工作经历
@property (nonatomic, strong) WorkExperience *workExperience;

/**
 初始化方法
 
 @param name 姓名
 
 @return 实例对象
 */
- (instancetype)initWithName:(NSString *)name;

/**
 设置个人信息
 
 @param sex 性别
 @param age 年龄
 */
- (void)setPersonalInfoWithSex:(NSString *)sex age:(NSString *)age;

/**
 设置工作经历
 
 @param workDate 时间区间
 @param company 公司
 */
- (void)setWorkExperienceWithDate:(NSString *)workDate company:(NSString *)company;

/**
 显示
 */
- (void)display;

@end

NS_ASSUME_NONNULL_END
