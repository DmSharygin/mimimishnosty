//
//  DSPlaceOrderCell.h
//  Mimimishnosty
//
//  Created by Dmitry Sharygin on 12.04.17.
//  Copyright © 2017 Dmitry Sharygin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DSPlaceOrderCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *deliveryLabel;

@property (weak, nonatomic) IBOutlet UILabel *totalPrice;


- (IBAction)actionPlaceOrder:(UIButton *)sender;


@end
