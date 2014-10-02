//
//  DetailViewController.h
//  Getraenkebestellung
//
//  Created by Deutsch on 02.10.14.
//  Copyright (c) 2014 Deutsch. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

