//
//  Person.h
//  Task01_ObjC
//
//  Created by Student003 on 5/4/17.
//  Copyright © 2017 Student003. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IDPRandom.m"
#import "IDPPerson.h"
#import "IDPConstants.m"

typedef NS_ENUM(NSUInteger, IDPGender) {
    IDPMale,
    IDPFemale
};

@interface IDPPerson : NSObject
@property (nonatomic, assign)IDPGender  gender;
@property (nonatomic, copy)NSString     *name;
@property (nonatomic, copy)NSNumber     *weight;
@property (nonatomic, assign)NSInteger  age;

@property (nonatomic, readonly, copy)NSArray        *children;

//- (instancetype)initWithName:(NSString *)name gender:(IDPGender)gender weight:(NSNumber *)weight age:(NSUInteger)age;
- (NSArray *)initArrayWithObjectsCount:(NSUInteger) count;
- (IDPPerson *)giveBirth;
- (void)makeWarNotLove;
- (void)addChild:(IDPPerson *)child;
- (void)removeLastChild;
- (void)removeChildAtIndex:(NSUInteger)index;
- (void)sayHi;
- (void)genderCheck;

@end
