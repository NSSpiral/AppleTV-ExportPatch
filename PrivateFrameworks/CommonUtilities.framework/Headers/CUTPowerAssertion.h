/* Runtime dump - CUTPowerAssertion
 * Image: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
 */

@interface CUTPowerAssertion : NSObject
{
    unsigned int _assertion;
    NSString * _identifier;
    NSArray * _stack;
}

- (void)dealloc;
- (NSString *)description;
- (CUTPowerAssertion *)initWithIdentifier:(NSString *)arg0;
- (CUTPowerAssertion *)initWithIdentifier:(NSString *)arg0 timeout:(double)arg1;

@end
