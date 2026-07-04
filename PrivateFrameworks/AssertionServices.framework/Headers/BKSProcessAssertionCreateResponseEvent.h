/* Runtime dump - BKSProcessAssertionCreateResponseEvent
 * Image: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
 */

@interface BKSProcessAssertionCreateResponseEvent : BKSProcessAssertionEvent
{
    char _success;
}

@property (nonatomic) char success;

- (char)success;
- (NSString *)description;
- (BKSProcessAssertionCreateResponseEvent *)initWithXPCDictionary:(NSDictionary *)arg0;
- (void)setSuccess:(char)arg0;
- (void)encodeWithXPCDictionary:(NSDictionary *)arg0;

@end
