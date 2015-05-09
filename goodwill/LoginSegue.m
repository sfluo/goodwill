//
//  LoginSegue.m
//  goodwill
//
//  Created by Shoufu Luo on 5/9/15.
//  Copyright (c) 2015 gopintu. All rights reserved.
//

#import "LoginSegue.h"

@implementation LoginSegue

- (void) perform
{
    // Add your own animation code here.
    [[self sourceViewController] presentModalViewController:[self destinationViewController] animated:NO];
}

@end
