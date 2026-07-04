/* Runtime dump - SBUIKeyboardEnablementManager
 * Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIKeyboardEnablementManager : NSObject
{
    NSHashTable * _disabledContexts;
    char _disabled;
}

+ (SBUIKeyboardEnablementManager *)sharedInstance;

- (void)dealloc;
- (SBUIKeyboardEnablementManager *)init;
- (NSString *)description;
- (void)disableAutomaticAppearanceForContext:(NSObject *)arg0;
- (void)enableAutomaticAppearanceForContext:(NSObject *)arg0;

@end
