//
//  DSOrdersCell.h
//  Mimimishnosty
//
//  Created by Dmitry Sharygin on 15.04.17.
//  Copyright © 2017 Dmitry Sharygin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DSOrdersCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *orderDateLabel;
@property (weak, nonatomic) IBOutlet UILabel *priceLabel;

@end
