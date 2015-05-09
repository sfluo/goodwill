//
//  MoreViewController.h
//  goodwill
//
//  Created by Shoufu Luo on 5/9/15.
//  Copyright (c) 2015 gopintu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MoreViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (weak, nonatomic) IBOutlet UITableView    *tableView;

@end
