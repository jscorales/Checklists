//
//  AllListsViewController.h
//  Checklists
//
//  Created by Junel Corales on 5/3/15.
//  Copyright (c) 2015 Junel Corales. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ListDetailViewController.h"

@class DataModel;

@interface AllListsViewController : UITableViewController <ListDetailViewControllerDelegate, UINavigationControllerDelegate>

@property (nonatomic, strong) DataModel *dataModel;

@end
