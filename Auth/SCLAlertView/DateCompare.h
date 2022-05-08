//
//  DateCompare.h
//  Demo
//
//  Created by Bao Nguyen on 07/05/2022.
//  Copyright © 2022 baontq. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (Compare)

-(BOOL) isLaterThanOrEqualTo:(NSDate*)date;
-(BOOL) isEarlierThanOrEqualTo:(NSDate*)date;
-(BOOL) isLaterThan:(NSDate*)date;
-(BOOL) isEarlierThan:(NSDate*)date;

@end
