//
//  VolunteerFactory.m
//  MXUDesignPatterns
//
//  Created by 木熹鱼 on 2022/3/25.
//

#import "VolunteerFactory.h"

#import "Volunteer.h"

@implementation VolunteerFactory

- (id<ILeiFeng>)createLeiFeng
{
    return [[Volunteer alloc] init];
}

@end
