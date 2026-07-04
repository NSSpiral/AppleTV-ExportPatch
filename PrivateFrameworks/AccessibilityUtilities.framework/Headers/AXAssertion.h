/* Runtime dump - AXAssertion
 * Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXAssertion : NSObject
{
    NSString * _assertionType;
    NSString * _identifier;
}

@property (retain, nonatomic) NSString * assertionType;
@property (retain, nonatomic) NSString * identifier;

+ (NSObject *)assertionWithType:(NSObject *)arg0 identifier:(NSString *)arg1;

- (void)dealloc;
- (NSString *)description;
- (NSString *)identifier;
- (void)setIdentifier:(NSString *)arg0;
- (AXAssertion *)initWithType:(NSString *)arg0 identifier:(NSString *)arg1;
- (void)setAssertionType:(NSString *)arg0;
- (void)_notifyServerAssertionWasAcquired;
- (void)_notifyServerAssertionWasRelinquished;
- (NSString *)assertionType;
- (char)_hasValidAssertionType;

@end
