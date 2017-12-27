//
//  NSMutableString+Safe.m
//  iOS-Category
//
//  Created by 庄BB的MacBook on 2017/8/24.
//  Copyright © 2017年 BBFC. All rights reserved.
//

#import "NSMutableString+Safe.h"

@implementation NSMutableString (Safe)
- (void)safeInsertString:(NSString *)aString atIndex:(NSUInteger)loc
{
    if (aString == nil) {
        return;
    } else if (loc > self.length) {
        return;
    } else {
        [self insertString:aString atIndex:loc];
    }
}

- (void)safeAppendString:(NSString *)aString
{
    if (aString == nil) {
        return;
    } else {
        [self appendString:aString];
    }
}


@end
