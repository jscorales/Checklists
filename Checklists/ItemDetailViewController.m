//
//  AddItemViewController.m
//  Checklists
//
//  Created by Junel Corales on 5/2/15.
//  Copyright (c) 2015 Junel Corales. All rights reserved.
//

#import "ItemDetailViewController.h"
#import "ChecklistItem.h"

@implementation ItemDetailViewController

- (void) viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    
    if (self.itemToEdit != nil) {
        self.title = @"Edit Item";
        self.textField.text = self.itemToEdit.text;
        self.doneButton.enabled = YES;
    }

    [self.textField becomeFirstResponder];
}

- (IBAction) cancel {
    //[self.presentingViewController dismissViewControllerAnimated:YES completion:nil];
    [self.delegate itemDetailViewControllerDidCancel:self];
}

- (IBAction) done {
    NSLog(@"Contents of the text field: %@", self.textField.text);
    //[self.presentingViewController dismissViewControllerAnimated:YES completion:nil];
    
    if (self.itemToEdit == nil) {
        ChecklistItem *item = [[ChecklistItem alloc] init];
        item.text = self.textField.text;
        item.checked = NO;
        [self.delegate itemDetailViewController:self didFinishAddingItem:item];
    }
    else {
        self.itemToEdit.text = self.textField.text;
        [self.delegate itemDetailViewController:self didFinishEditingItem:self.itemToEdit];
    }
}

- (NSIndexPath*) tableView:(UITableView *)tableView willSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    return nil;
}

- (BOOL) textField:(UITextField *)textField shouldChangeCharactersInRange:(NSRange)range replacementString:(NSString *)string {
    NSString *newText = [textField.text stringByReplacingCharactersInRange:range withString:string];
    
    self.doneButton.enabled = [newText length] > 0;
    
    return YES;
}

@end
