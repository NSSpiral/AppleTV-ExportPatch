/* Runtime dump - PSBundleController
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSBundleController : NSObject
{
    PSListController * _parent;
}

- (void)load;
- (void)unload;
- (PSBundleController *)initWithParentListController:(BRController *)arg0;
- (id)specifiersWithSpecifier:(id)arg0;
- (PSBundleController *)initWithParentListController:(BRController *)arg0 properties:(NSDictionary *)arg1;

@end
