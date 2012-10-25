//
//  MoodSpotsViewController.h
//  MoodSpots
//
//  Created by Bram Gotink on 19/10/12.
//  Copyright (c) 2012 KU Leuven Ariadne. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WheelView.h"
#import "WheelOverlay.h"
#import "StringArrayPickerView.h"

@interface NewMoodViewController : UIViewController

@property (strong, nonatomic) IBOutlet WheelView *wheelImage;
@property (strong, nonatomic) IBOutlet WheelOverlay *wheelOverlay;

@property (strong, nonatomic) IBOutlet UIScrollView *scrollView;
@property (strong, nonatomic) IBOutlet StringArrayPickerView *actionSelector;

- (IBAction)handleWheelTap:(UIGestureRecognizer *) sender;

@end
