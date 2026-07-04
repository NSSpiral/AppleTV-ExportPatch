/* Runtime dump - SCRCRegularExpression
 * Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCRegularExpression : NSObject

+ (struct URegularExpression *)createRegularExpressionFromString:(NSString *)arg0;
+ (NSString *)matchedRangesForString:(NSString *)arg0 withRegularExpression:(struct URegularExpression *)arg1;

@end
