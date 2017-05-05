//
//  Person.h
//  Task01_ObjC
//
//  Created by Student003 on 5/4/17.
//  Copyright © 2017 Student003. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, Gender) {
    Male,
    Female
};

@interface Person : NSObject
@property Gender                        gender;
@property (nonatomic, copy) NSString    *name;
@property (nonatomic, copy) NSNumber    *weight;
@property NSInteger                     age;

@property (nonatomic, readonly, copy) NSArray        *children;

- (instancetype)initWithName:(NSString *)name gender:(Gender)gender weight:(NSNumber *)weight age:(NSUInteger)age;
- (NSArray *)initArrayWithObjectsCount:(NSUInteger) count;
- (Person *)giveBirth;
- (void)makeWarNotLove;
- (void)addChild:(Person *)child;
- (void)removeLastChild;
- (void)removeChildAtIndex:(NSUInteger)index;
- (void)sayHi;
- (void)genderCheck;

@end
