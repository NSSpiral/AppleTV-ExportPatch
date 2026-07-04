/* Runtime dump - SFURegularExpression
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface SFURegularExpression : NSObject <NSCopying, NSCoding>
{
    NSString * _expressionString;
    void * _reserved;
}

+ (void)initialize;
+ (NSString *)regularExpressionWithString:(NSString *)arg0;

- (void)dealloc;
- (SFURegularExpression *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SFURegularExpression *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (SFURegularExpression *)copyWithZone:(struct _NSZone *)arg0;
- (SFURegularExpression *)initWithExpressionString:(NSString *)arg0;
- (SFURegularExpression *)initWithExpressionString:(NSString *)arg0 options:(unsigned int)arg1;
- (NSString *)expressionString;
- (unsigned long)numberOfSubexpressions;
- (struct _NSRange)matchedRangeForCString:(char *)arg0 range:(struct _NSRange)arg1 subexpressionRanges:(struct _NSRange *)arg2 count:(unsigned int)arg3;
- (struct _NSRange)matchedRangeForString:(NSString *)arg0 range:(struct _NSRange)arg1 subexpressionRanges:(struct _NSRange *)arg2 count:(unsigned int)arg3;
- (char *)getBytesForString:(SEL)arg0 lossByte:(id)arg1;

@end
