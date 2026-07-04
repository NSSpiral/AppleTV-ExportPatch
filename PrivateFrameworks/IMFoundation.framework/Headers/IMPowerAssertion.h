/* Runtime dump - IMPowerAssertion
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMPowerAssertion : NSObject
{
    unsigned int _assertion;
    NSString * _identifier;
}

- (void)dealloc;
- (NSString *)description;
- (IMPowerAssertion *)initWithIdentifier:(NSString *)arg0;
- (IMPowerAssertion *)initWithIdentifier:(NSString *)arg0 timeout:(double)arg1;

@end
