//
//  NSDictionary+Category.h
//  LCategory
//
//  Created by 李帅兵 on 2017/12/27.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (Category)

/**
 通过key取value

 @param key 键
 @return 值
 */
- (id)safeObjectForKey:(NSString *)key;

/**
 设置 key value

 @param object 值
 @param key 键
 */
- (void)safeSetObject:(id)object forKey:(id)key;

/**
 通过value获取key

 @param value 值
 @return 键
 */
- (id)safeKeyForValue:(id)value;

/**
 转json字符串

 @return json字符串
 */
- (NSString *)toJSONStringForDictionary;
@end
