/* Runtime dump - NSGrammarCheckingResult
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSGrammarCheckingResult : NSTextCheckingResult
{
    struct _NSRange _range;
    NSArray * _details;
}

- (NSSet *)resultByAdjustingRangesWithOffset:(int)arg0;
- (char)_adjustRangesWithOffset:(int)arg0;
- (id)grammarDetails;
- (NSGrammarCheckingResult *)initWithRange:(struct _NSRange)arg0 details:(NSArray *)arg1;
- (void)dealloc;
- (NSGrammarCheckingResult *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (struct _NSRange)range;
- (unsigned long long)resultType;

@end
