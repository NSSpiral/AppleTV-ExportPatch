/* Runtime dump - SBFPasscodeLockAssertionTracker
 * Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFPasscodeLockAssertionTracker : NSObject
{
    struct __MKBAssertion * _mkbAssertion;
    NSMutableSet * _assertions;
}

- (void)dealloc;
- (SBFPasscodeLockAssertionTracker *)init;
- (NSString *)description;
- (void)addAssertion:(MPMediaLibraryConnectionAssertion *)arg0;
- (void)removeAssertion:(MPMediaLibraryConnectionAssertion *)arg0;
- (NSDictionary *)mkbAssertionOptions;
- (char)hasActiveAssertions;

@end
