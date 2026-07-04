/* Runtime dump - CPRegularExpression
 * Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@interface CPRegularExpression : NSObject <NSCopying, NSCoding>
{
    NSString * _expressionString;
    void * _reserved;
}

+ (void)initialize;
+ (NSString *)regularExpressionWithString:(NSString *)arg0;
+ (char *)getBytesForString:(SEL)arg0 lossByte:(id)arg1;

- (void)dealloc;
- (CPRegularExpression *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (CPRegularExpression *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (CPRegularExpression *)copyWithZone:(struct _NSZone *)arg0;
- (CPRegularExpression *)initWithExpressionString:(NSString *)arg0;
- (CPRegularExpression *)initWithExpressionString:(NSString *)arg0 options:(unsigned int)arg1;
- (NSString *)expressionString;
- (unsigned int)numberOfSubexpressions;
- (struct _NSRange)matchedRangeForCString:(char *)arg0 range:(struct _NSRange)arg1 subexpressionRanges:(struct _NSRange *)arg2 count:(unsigned int)arg3;
- (struct _NSRange)matchedRangeForString:(NSString *)arg0 range:(struct _NSRange)arg1 subexpressionRanges:(struct _NSRange *)arg2 count:(unsigned int)arg3;

@end
