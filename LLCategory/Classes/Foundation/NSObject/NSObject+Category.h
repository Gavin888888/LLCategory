//
//  NSObject+Category.h
//  LCategory
//
//  Created by 李帅兵 on 2017/12/27.
//

#import <Foundation/Foundation.h>

@interface NSObject (Category)
/**
 获取类的所有属性
 
 @return 属性集合
 */
- (NSArray *)getProperties;

/**
 重写方法

 @param origSel 原始方法
 @param altSel 新方法
 @return 结果
 */
+ (BOOL)overrideMethod:(SEL)origSel withMethod:(SEL)altSel;

/**
 方法欺骗

 @param origSel 原始方法
 @param altSel 新方法
 @return 结果
 */
+ (BOOL)exchangeMethod:(SEL)origSel withMethod:(SEL)altSel;

// try catch
+ (NSException *)tryCatch:(void(^)())block;
+ (NSException *)tryCatch:(void(^)())block finally:(void(^)())aFinisheBlock;

/**
 *  在主线程运行block
 *
 *  @param aInMainBlock 被运行的block
 */
+ (void)performInMainThreadBlock:(void(^)())aInMainBlock;
/**
 *  延时在主线程运行block
 *
 *  @param aInMainBlock 被运行的block
 *  @param delay        延时时间
 */
+ (void)performInMainThreadBlock:(void(^)())aInMainBlock afterSecond:(NSTimeInterval)delay;
/**
 *  在非主线程运行block
 *
 *  @param aInThreadBlock 被运行的block
 */
+ (void)performInThreadBlock:(void(^)())aInThreadBlock;
/**
 *  延时在非主线程运行block
 *
 *  @param aInThreadBlock 被运行的block
 *  @param delay          延时时间
 */
+ (void)performInThreadBlock:(void(^)())aInThreadBlock afterSecond:(NSTimeInterval)delay;
@end
