//
//  ResumeDeepCopy.m
//  MXUDesignPatterns
//
//  Created by 木熹鱼 on 2022/3/28.
//

#import "ResumeDeepCopy.h"

@implementation ResumeDeepCopy

- (id)copyWithZone:(NSZone *)zone {
    Resume *resume = [[[self class] allocWithZone:zone] init];
    resume.name = [self.name copy];
    resume.sex = [self.sex copy];
    resume.age = [self.age copy];
    resume.workExperience = [self.workExperience copy];
    return resume;
}

@end
