//
//  TaskerDoDetailViewController.h
//  TaskerDo
//
//  Created by michaelp. on 4/5/13.
//  Copyright (c) 2013 michaelp. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TaskerDoDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
