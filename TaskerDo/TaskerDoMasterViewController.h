//
//  TaskerDoMasterViewController.h
//  TaskerDo
//
//  Created by michaelp. on 4/5/13.
//  Copyright (c) 2013 michaelp. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TaskerDoDetailViewController;

@interface TaskerDoMasterViewController : UITableViewController

@property (strong, nonatomic) TaskerDoDetailViewController *detailViewController;

@end
