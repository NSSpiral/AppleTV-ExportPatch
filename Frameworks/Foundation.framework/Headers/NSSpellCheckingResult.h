/* Runtime dump - NSSpellCheckingResult
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSSpellCheckingResult : NSTextCheckingResult
{
    struct _NSRange _range;
}

- (NSSet *)resultByAdjustingRangesWithOffset:(int)arg0;
- (char)_adjustRangesWithOffset:(int)arg0;
- (NSSpellCheckingResult *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (struct _NSRange)range;
- (NSSpellCheckingResult *)initWithRange:(struct _NSRange)arg0;
- (unsigned long long)resultType;

@end
