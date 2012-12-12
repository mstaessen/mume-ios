//
//  InputViewController.h
//  MoodSpots
//
//  Created by Thypo on 11/29/12.
//  Copyright (c) 2012 KU Leuven Ariadne. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface InputViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, strong) IBOutlet UITableView *tableView;
@property (nonatomic, strong) NSString *selectedLocation;
@property (nonatomic, strong) NSString *selectedActivity;
@property (nonatomic, strong) NSString *selectedPerson;
@property (nonatomic, strong) NSArray *selectedMoods;

@end