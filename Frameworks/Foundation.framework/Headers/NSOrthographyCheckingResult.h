/* Runtime dump - NSOrthographyCheckingResult
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSOrthographyCheckingResult : NSTextCheckingResult
{
    struct _NSRange _range;
    NSOrthography * _orthography;
}

- (NSSet *)resultByAdjustingRangesWithOffset:(int)arg0;
- (char)_adjustRangesWithOffset:(int)arg0;
- (NSOrthography *)orthography;
- (NSOrthographyCheckingResult *)initWithRange:(struct _NSRange)arg0 orthography:(NSOrthography *)arg1;
- (void)dealloc;
- (NSOrthographyCheckingResult *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (struct _NSRange)range;
- (unsigned long long)resultType;

@end
