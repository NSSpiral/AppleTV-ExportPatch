/* Runtime dump - NSSubstitutionCheckingResult
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSSubstitutionCheckingResult : NSTextCheckingResult
{
    struct _NSRange _range;
    NSString * _replacementString;
}

- (NSSet *)resultByAdjustingRangesWithOffset:(int)arg0;
- (char)_adjustRangesWithOffset:(int)arg0;
- (NSString *)replacementString;
- (NSSubstitutionCheckingResult *)initWithRange:(struct _NSRange)arg0 replacementString:(NSString *)arg1;
- (void)dealloc;
- (NSSubstitutionCheckingResult *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (struct _NSRange)range;

@end
