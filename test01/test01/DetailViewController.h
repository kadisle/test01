//
//  DetailViewController.h
//  test01
//
//  Created by kadis on 16/7/28.
//  Copyright © 2016年 kadis. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

