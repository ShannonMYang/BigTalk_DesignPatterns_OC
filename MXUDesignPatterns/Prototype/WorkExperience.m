//
//  WorkExperience.m
//  MXUDesignPatterns
//
//  Created by 木熹鱼 on 2022/3/28.
//

#import "WorkExperience.h"

@implementation WorkExperience

- (id)copyWithZone:(NSZone *)zone {
    WorkExperience *workExperience = [[self class] allocWithZone:zone];
    workExperience.workDate = [self.workDate copy];
    workExperience.company = [self.company copy];
    return workExperience;
}

@end
