//
//  Checklist.h
//  Checklists
//
//  Created by Junel Corales on 5/3/15.
//  Copyright (c) 2015 Junel Corales. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Checklist : NSObject <NSCoding>

@property (nonatomic, copy) NSString *name;
@property (nonatomic, strong) NSMutableArray *items;

@end
