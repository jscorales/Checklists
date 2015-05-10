//
//  DataModel.h
//  Checklists
//
//  Created by Junel Corales on 5/9/15.
//  Copyright (c) 2015 Junel Corales. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DataModel : NSObject

@property (nonatomic, strong) NSMutableArray *lists;

- (void) saveChecklists;
- (NSInteger) indexOfSelectedChecklist;
- (void) setIndexOfSelectedChecklist:(NSInteger)index;

@end
