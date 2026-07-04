/* Runtime dump - NSCorrectionCheckingResult
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCorrectionCheckingResult : NSSubstitutionCheckingResult
{
    NSArray * _alternativeStrings;
}

- (NSSet *)resultByAdjustingRangesWithOffset:(int)arg0;
- (NSCorrectionCheckingResult *)initWithRange:(struct _NSRange)arg0 replacementString:(NSString *)arg1 alternativeStrings:(NSArray *)arg2;
- (void)dealloc;
- (NSCorrectionCheckingResult *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (NSArray *)alternativeStrings;
- (unsigned long long)resultType;

@end
