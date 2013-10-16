//
//  DetailViewController.h
//  Forester-iOS
//
//  Created by Christian Høj on 16/10/13.
//  Copyright (c) 2013 Christian Høj. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Forest.h"

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) Forest* detailItem;

@property (weak, nonatomic) IBOutlet UITextField *forestName;
@property (weak, nonatomic) IBOutlet UITextField *forestLocation;
@property (weak, nonatomic) IBOutlet UITextField *forestSize;
@property (weak, nonatomic) IBOutlet UITextField *forestPrice;
@property (weak, nonatomic) IBOutlet UILabel *forestValue;

@end
