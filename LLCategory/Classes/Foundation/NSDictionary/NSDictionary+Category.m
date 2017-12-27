//
//  NSDictionary+Category.m
//  LCategory
//
//  Created by 李帅兵 on 2017/12/27.
//

#import "NSDictionary+Category.h"

@implementation NSDictionary (Category)
- (id)safeObjectForKey:(NSString *)key {
    if (key == nil || [self isKindOfClass:[NSNull class]]) {
        return nil;
    }
    id object = [self objectForKey:key];
    if (object==nil || object == [NSNull null]) {
        return @"";
    }
    return object;
}
- (void)safeSetObject:(id)object forKey:(id)key {
    if ([key isKindOfClass:[NSNull class]]) {
        return;
    }
    if ([object isKindOfClass:[NSNull class]]) {
        [self setValue:@"" forKey:key];
    }else{
        [self setValue:object forKey:key];
    }
}
- (id)safeKeyForValue:(id)value {
    for (id key in self.allKeys) {
        if ([value isEqual:[self objectForKey:key]]) {
            return key;
        }
    }
    return nil;
}
- (NSString *)toJSONStringForDictionary
{
    NSData *paramsJSONData = [NSJSONSerialization dataWithJSONObject:self options:0 error:nil];
    return [[NSString alloc] initWithData:paramsJSONData encoding:NSUTF8StringEncoding];
}

@end
