/* Runtime dump - NSLinkCheckingResult
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSLinkCheckingResult : NSTextCheckingResult
{
    struct _NSRange _range;
    NSURL * _url;
}

- (NSSet *)resultByAdjustingRangesWithOffset:(int)arg0;
- (char)_adjustRangesWithOffset:(int)arg0;
- (NSLinkCheckingResult *)initWithRange:(struct _NSRange)arg0 URL:(NSString *)arg1;
- (void)dealloc;
- (NSLinkCheckingResult *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (NSURL *)URL;
- (struct _NSRange)range;
- (unsigned long long)resultType;

@end
