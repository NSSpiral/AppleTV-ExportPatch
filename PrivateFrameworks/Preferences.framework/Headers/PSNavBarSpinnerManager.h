/* Runtime dump - PSNavBarSpinnerManager
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSNavBarSpinnerManager : NSObject
{
    NSMutableDictionary * _savedRightItems;
    NSMutableDictionary * _savedLeftItems;
    NSMutableDictionary * _navigationItems;
}

+ (PSNavBarSpinnerManager *)sharedSpinnerManager;

- (void)dealloc;
- (PSNavBarSpinnerManager *)init;
- (void)startAnimatingInNavItem:(NSObject *)arg0 forIdentifier:(NSString *)arg1 hideBackButton:(char)arg2;
- (void)startAnimatingInNavItem:(NSObject *)arg0 forIdentifier:(NSString *)arg1;
- (void)stopAnimatingForIdentifier:(NSString *)arg0;

@end
