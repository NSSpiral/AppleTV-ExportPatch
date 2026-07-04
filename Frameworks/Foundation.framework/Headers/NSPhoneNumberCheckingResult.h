/* Runtime dump - NSPhoneNumberCheckingResult
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPhoneNumberCheckingResult : NSTextCheckingResult
{
    struct _NSRange _range;
    NSString * _phoneNumber;
    id _underlyingResult;
}

@property (readonly) void * underlyingResult;

- (NSSet *)resultByAdjustingRangesWithOffset:(int)arg0;
- (char)_adjustRangesWithOffset:(int)arg0;
- (void *)underlyingResult;
- (NSPhoneNumberCheckingResult *)initWithRange:(struct _NSRange)arg0 phoneNumber:(NSString *)arg1;
- (NSPhoneNumberCheckingResult *)initWithRange:(struct _NSRange)arg0 phoneNumber:(NSString *)arg1 underlyingResult:(void *)arg2;
- (void)dealloc;
- (NSPhoneNumberCheckingResult *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (struct _NSRange)range;
- (NSString *)phoneNumber;
- (unsigned long long)resultType;

@end
