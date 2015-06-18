//
//  ViewController.h
//  TableViewTest
//
//  Created by ammar on 18/06/2015.
//  Copyright (c) 2015 ammar. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITableViewDataSource,UITableViewDelegate>

@property IBOutlet UITableView *table;
@property (strong, nonatomic) IBOutlet UIImageView *imgv;

@end

