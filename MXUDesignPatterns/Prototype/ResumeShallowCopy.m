//
//  ResumeShallowCopy.m
//  MXUDesignPatterns
//
//  Created by 木熹鱼 on 2022/3/28.
//

#import "ResumeShallowCopy.h"

@implementation ResumeShallowCopy

- (id)copyWithZone:(NSZone *)zone {
    Resume *resume = [[[self class] allocWithZone:zone] init];
    resume.name = self.name;
    resume.sex = self.sex;
    resume.age = self.age;
    resume.workExperience = self.workExperience;
    return resume;
}

@end
