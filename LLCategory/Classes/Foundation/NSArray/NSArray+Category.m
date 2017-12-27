//
//  NSArray+Category.m
//  LCategory
//
//  Created by 李帅兵 on 2017/12/27.
//

#import "NSArray+Category.h"

@implementation NSArray (Category)
- (id)safeObjectAtIndex:(NSUInteger)index
{
    if (index >= self.count) {
        return nil;
    } else {
        return [self objectAtIndex:index];
    }
}
- (NSUInteger)safeIndexOfObject:(id)anObject
{
    if (anObject == nil) {
        return NSNotFound;
    } else {
        return [self indexOfObject:anObject];
    }
}
- (NSArray *)safeSubarrayWithRange:(NSRange)range
{
    NSUInteger location = range.location;
    NSUInteger length = range.length;
    if (location + length > self.count) {
        //超过了边界,就获取从loction开始所有的item
        if ((location + length) > self.count) {
            length = (self.count - location);
            return [self safeSubarrayWithRange:NSMakeRange(location, length)];
        }
        
        return nil;
    }
    else {
        return [self subarrayWithRange:range];
    }
}
- (NSString *)toJSONStringForArray
{
    NSData *paramsJSONData = [NSJSONSerialization dataWithJSONObject:self options:0 error:nil];
    return [[NSString alloc] initWithData:paramsJSONData encoding:NSUTF8StringEncoding];
}
@end
