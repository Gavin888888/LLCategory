//
//  NSMutableString+Safe.h
//  iOS-Category
//
//  Created by 庄BB的MacBook on 2017/8/24.
//  Copyright © 2017年 BBFC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMutableString (Safe)

/**
 插入字符串

 @param aString 带插入的字符串
 @param loc 索引位置
 */
- (void)safeInsertString:(NSString *)aString atIndex:(NSUInteger)loc;

/**
 追加字符串

 @param aString 待加入字符串
 */
- (void)safeAppendString:(NSString *)aString;

@end
