/* Runtime dump - TSURegularExpression
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSURegularExpression : NSObject <NSCopying, NSCoding>
{
    NSString * _expressionString;
    void * _reserved;
}

+ (void)initialize;
+ (NSString *)regularExpressionWithString:(NSString *)arg0;

- (void)dealloc;
- (TSURegularExpression *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (TSURegularExpression *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (TSURegularExpression *)copyWithZone:(struct _NSZone *)arg0;
- (TSURegularExpression *)initWithExpressionString:(NSString *)arg0;
- (TSURegularExpression *)initWithExpressionString:(NSString *)arg0 options:(unsigned int)arg1;
- (NSString *)expressionString;
- (unsigned int)numberOfSubexpressions;
- (struct _NSRange)matchedRangeForCString:(char *)arg0 range:(struct _NSRange)arg1 subexpressionRanges:(struct _NSRange *)arg2 count:(unsigned int)arg3;
- (struct _NSRange)matchedRangeForString:(NSString *)arg0 range:(struct _NSRange)arg1 subexpressionRanges:(struct _NSRange *)arg2 count:(unsigned int)arg3;
- (char *)getBytesForString:(SEL)arg0 lossByte:(id)arg1;

@end
