//
//  Pursuit.m
//  MXUDesignPatterns
//
//  Created by 木熹鱼 on 2022/3/24.
//

#import "Pursuit.h"

@interface Pursuit()

@property (nonatomic, strong) SchoolGirl *schoolGirl;

@end

@implementation Pursuit

- (instancetype)initWithSchoolGirl:(SchoolGirl *)schoolGirl
{
    self = [super init];
    if (self) {
        self.schoolGirl = schoolGirl;
    }
    return self;
}

- (void)giveDolls
{
    NSLog(@"%@，送你洋娃娃~", self.schoolGirl.name);
}

- (void)giveFlowers
{
    NSLog(@"%@，送你鲜花~", self.schoolGirl.name);
}

- (void)giveChocolate
{
    NSLog(@"%@，送你巧克力~", self.schoolGirl.name);
}

@end
