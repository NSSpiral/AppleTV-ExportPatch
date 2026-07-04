/* Runtime dump - NSRegularExpressionCheckingResult
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSRegularExpressionCheckingResult : NSTextCheckingResult

@property (readonly) NSRegularExpression * regularExpression;
@property (readonly) NSArray * rangeArray;

- (NSSet *)resultByAdjustingRangesWithOffset:(int)arg0;
- (NSRegularExpression *)regularExpression;
- (NSRegularExpressionCheckingResult *)initWithRanges:(struct _NSRange *)arg0 count:(unsigned int)arg1 regularExpression:(NSRegularExpression *)arg2;
- (NSArray *)rangeArray;
- (NSRegularExpressionCheckingResult *)initWithRangeArray:(NSArray *)arg0 regularExpression:(NSRegularExpression *)arg1;
- (NSRegularExpressionCheckingResult *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (unsigned long long)resultType;

@end
