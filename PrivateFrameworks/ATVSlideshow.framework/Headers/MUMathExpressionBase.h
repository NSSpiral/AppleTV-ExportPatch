/* Runtime dump - MUMathExpressionBase
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MUMathExpressionBase : NSObject
{
    NSMutableDictionary * _indicesForVariables;
    NSError * _lastError;
}

+ (NSString *)parserErrorToString:(struct ? *)arg0;

- (void)dealloc;
- (MUMathExpressionBase *)init;
- (void)_cleanup;
- (NSError *)lastError;
- (void)setLastError:(struct ? *)arg0;
- (void)finalize;

@end
