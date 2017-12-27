//
//  NSData+zip.h
//  LCategory
//
//  Created by 李帅兵 on 2017/12/27.
//

#import <Foundation/Foundation.h>

@interface NSData (zip)
/**
 *  @brief  GZIP压缩
 *
 *  @param level 压缩级别
 *
 *  @return 压缩后的数据
 */
- (NSData *)gzippedDataWithCompressionLevel:(float)level;

/**
 *  @brief  GZIP压缩 压缩级别 默认-1
 *
 *  @return 压缩后的数据
 */
- (NSData *)gzippedData;

/**
 *  @brief  GZIP解压
 *
 *  @return 解压后数据
 */
- (NSData *)gunzippedData;

- (BOOL)isGzippedData;
@end
