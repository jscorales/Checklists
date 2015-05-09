//
//  ListDetailViewController.h
//  Checklists
//
//  Created by Junel Corales on 5/9/15.
//  Copyright (c) 2015 Junel Corales. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ListDetailViewController;
@class Checklist;

@protocol ListDetailViewControllerDelegate <NSObject>

- (void) listDetailViewControllerDidCancel: (ListDetailViewController *)controller;
- (void) listDetailViewController:(ListDetailViewController *)controller didFinishAddingItem:(Checklist *)checklist;
- (void) listDetailViewController:(ListDetailViewController *)controller didFinishEditingItem:(Checklist *)checklist;

@end

@interface ListDetailViewController : UITableViewController <UITextFieldDelegate>

@property (weak, nonatomic) id <ListDetailViewControllerDelegate> delegate;
@property (strong, nonatomic) Checklist *checklistToEdit;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *doneButton;
@property (weak, nonatomic) IBOutlet UITextField *textField;

- (IBAction) cancel;
- (IBAction) done;

@end
