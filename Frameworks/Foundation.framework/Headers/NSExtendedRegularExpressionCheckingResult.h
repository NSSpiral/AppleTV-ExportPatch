/* Runtime dump - NSExtendedRegularExpressionCheckingResult
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSExtendedRegularExpressionCheckingResult : NSRegularExpressionCheckingResult
{
    NSRegularExpression * _regularExpression;
    id _ranges;
}

- (char)_adjustRangesWithOffset:(int)arg0;
- (NSRegularExpression *)regularExpression;
- (NSExtendedRegularExpressionCheckingResult *)initWithRanges:(struct _NSRange *)arg0 count:(unsigned int)arg1 regularExpression:(NSRegularExpression *)arg2;
- (NSArray *)rangeArray;
- (NSExtendedRegularExpressionCheckingResult *)initWithRangeArray:(NSArray *)arg0 regularExpression:(NSRegularExpression *)arg1;
- (void)dealloc;
- (struct _NSRange)range;
- (unsigned int)numberOfRanges;
- (struct _NSRange)rangeAtIndex:(unsigned int)arg0;

@end
