//
//  ChecklistItem.m
//  Checklists
//
//  Created by Junel Corales on 4/27/15.
//  Copyright (c) 2015 Junel Corales. All rights reserved.
//

#import "ChecklistItem.h"

@implementation ChecklistItem

- (id) initWithCoder:(NSCoder *)aDecoder {
    self = [super init];
    if (self) {
        self.text = [aDecoder decodeObjectForKey:@"Text"];
        self.checked = [aDecoder decodeBoolForKey:@"Checked"];
    }
    
    return self;
}

- (void) encodeWithCoder:(NSCoder *)aCoder {
    [aCoder encodeObject:self.text forKey:@"Text"];
    [aCoder encodeBool:self.checked forKey:@"Checked"];
}
@end
