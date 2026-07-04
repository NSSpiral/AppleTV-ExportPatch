/* Runtime dump - NSSimpleRegularExpressionCheckingResult
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSSimpleRegularExpressionCheckingResult : NSRegularExpressionCheckingResult
{
    NSRegularExpression * _regularExpression;
    id _ranges;
}

- (char)_adjustRangesWithOffset:(int)arg0;
- (NSRegularExpression *)regularExpression;
- (NSSimpleRegularExpressionCheckingResult *)initWithRanges:(struct _NSRange *)arg0 count:(unsigned int)arg1 regularExpression:(NSRegularExpression *)arg2;
- (NSArray *)rangeArray;
- (NSSimpleRegularExpressionCheckingResult *)initWithRangeArray:(NSArray *)arg0 regularExpression:(NSRegularExpression *)arg1;
- (void)dealloc;
- (struct _NSRange)range;
- (unsigned int)numberOfRanges;
- (struct _NSRange)rangeAtIndex:(unsigned int)arg0;

@end
