/* Runtime dump - NSComplexRegularExpressionCheckingResult
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSComplexRegularExpressionCheckingResult : NSRegularExpressionCheckingResult
{
    NSRegularExpression * _regularExpression;
    NSArray * _rangeArray;
}

- (char)_adjustRangesWithOffset:(int)arg0;
- (NSRegularExpression *)regularExpression;
- (NSComplexRegularExpressionCheckingResult *)initWithRanges:(struct _NSRange *)arg0 count:(unsigned int)arg1 regularExpression:(NSRegularExpression *)arg2;
- (NSArray *)rangeArray;
- (NSComplexRegularExpressionCheckingResult *)initWithRangeArray:(NSArray *)arg0 regularExpression:(NSRegularExpression *)arg1;
- (void)dealloc;
- (struct _NSRange)range;
- (unsigned int)numberOfRanges;
- (struct _NSRange)rangeAtIndex:(unsigned int)arg0;

@end
