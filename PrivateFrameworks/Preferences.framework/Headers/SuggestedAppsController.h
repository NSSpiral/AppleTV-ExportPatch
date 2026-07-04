/* Runtime dump - SuggestedAppsController
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface SuggestedAppsController : NSObject
{
    NSArray * _specifiers;
}

@property (readonly, retain, nonatomic) NSArray * specifiers;

- (void)dealloc;
- (NSArray *)specifiers;
- (void)reloadSpecifiers;
- (void)setMyApps:(id)arg0 specifier:(PSSpecifier *)arg1;
- (id)myApps:(id)arg0;
- (void)setAppStore:(NSObject *)arg0 specifier:(PSSpecifier *)arg1;
- (NSObject *)appStore:(NSObject *)arg0;

@end
