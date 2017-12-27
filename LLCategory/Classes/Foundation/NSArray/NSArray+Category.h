//
//  NSArray+Category.h
//  LCategory
//
//  Created by 李帅兵 on 2017/12/27.
//

#import <Foundation/Foundation.h>

@interface NSArray (Category)
/**
 安全返回
 
 @param index 索引
 @return 取到的值
 */
- (id)safeObjectAtIndex:(NSUInteger)index;
/**
 取出一个范围的值
 
 @param range 范围
 @return 数组中该范围的值
 */
- (NSArray *)safeSubarrayWithRange:(NSRange)range;
/**
 通过对象找索引
 
 @param anObject 对象
 @return 对象在数组中的索引
 */
- (NSUInteger)safeIndexOfObject:(id)anObject;
/**
 数组转json字符串
 
 @return json字符串
 */
- (NSString *)toJSONStringForArray;
@end
