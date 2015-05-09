//
//  ChecklistItem.h
//  Checklists
//
//  Created by Junel Corales on 4/27/15.
//  Copyright (c) 2015 Junel Corales. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ChecklistItem : NSObject <NSCoding>

@property (nonatomic, copy) NSString *text;
@property (nonatomic, assign) BOOL checked;

@end
