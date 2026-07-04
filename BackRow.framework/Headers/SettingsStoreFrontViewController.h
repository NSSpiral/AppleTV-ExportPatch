/* Runtime dump - SettingsStoreFrontViewController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BRListControl, BRMediaMenuView, BRMenuItem;
@interface SettingsStoreFrontViewController : BRViewController
{
    BRMediaMenuView * _menu;
    NSArray * _sortedStoreFronts;
    ATVStoreFrontLocale * _currentStoreFront;
    unsigned int _currentIndex;
    unsigned int _pendingIndex;
}

- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (id)StoreFrontLocaleBinding;
- (void)bindStoreFrontLocaleBindingToObject:(NSObject *)arg0 withKeyPath:(NSString *)arg1 options:(NSDictionary *)arg2;
- (void)updateBoundCurrentStoreFrontLocale;
- (id)AvailableStoreFrontsBinding;
- (void)updateBoundStoreLocales;
- (void)bindAvailableStoreFrontsBindingToObject:(NSObject *)arg0 withKeyPath:(NSString *)arg1 options:(NSDictionary *)arg2;
- (id)_accessibilityLanguageForStoreFront:(id)arg0;
- (SettingsStoreFrontViewController *)init;
- (void).cxx_destruct;

@end
