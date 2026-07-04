/* Runtime dump - NSTransitInformationCheckingResult
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSTransitInformationCheckingResult : NSTextCheckingResult
{
    struct _NSRange _range;
    NSDictionary * _components;
    id _underlyingResult;
}

@property (readonly) void * underlyingResult;

- (NSSet *)resultByAdjustingRangesWithOffset:(int)arg0;
- (char)_adjustRangesWithOffset:(int)arg0;
- (void *)underlyingResult;
- (NSTransitInformationCheckingResult *)initWithRange:(struct _NSRange)arg0 components:(NSDictionary *)arg1;
- (NSTransitInformationCheckingResult *)initWithRange:(struct _NSRange)arg0 components:(NSDictionary *)arg1 underlyingResult:(void *)arg2;
- (void)dealloc;
- (NSTransitInformationCheckingResult *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (struct _NSRange)range;
- (NSDictionary *)components;
- (unsigned long long)resultType;

@end
