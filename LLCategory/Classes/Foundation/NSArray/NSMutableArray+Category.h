//
//  NSMutableArray+Category.h
//  LCategory
//
//  Created by 李帅兵 on 2017/12/27.
//

#import <Foundation/Foundation.h>

@interface NSMutableArray (Category)

/**
 设置数据数据 可覆盖该索引位置的数据

 @param obj 数据
 @param idx 索引
 */
- (void)safeSetObject:(id)obj atIndexedSubscript:(NSUInteger)idx;

/**
 插入数据

 @param object 数据
 @param index 索引
 */
- (void)safeInsertObject:(id)object atIndex:(NSUInteger)index;

/**
 插入一组数据

 @param objects 数据
 @param indexs 索引
 */
- (void)safeInsertObjects:(NSArray *)objects atIndexes:(NSIndexSet *)indexs;

/**
 删除数据

 @param index 索引
 */
- (void)safeRemoveObjectAtIndex:(NSUInteger)index;

/**
 删除一个范围的数据

 @param range 范围
 */
- (void)safeRemoveObjectsInRange:(NSRange)range;
@end
