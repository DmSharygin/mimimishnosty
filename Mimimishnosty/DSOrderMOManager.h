//
//  DSOrderMOManager.h
//  Mimimishnosty
//
//  Created by Dmitry Sharygin on 02.04.17.
//  Copyright © 2017 Dmitry Sharygin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DSOrder_MO+CoreDataClass.h"

@interface DSOrderMOManager : NSObject

- (void) createNewOrderWithItems:(NSArray *) items;
- (NSInteger) totalPriceOfOrder:(DSOrder_MO *) order;

@end
