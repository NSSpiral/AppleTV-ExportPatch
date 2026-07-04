/* Runtime dump - SettingsMainMenuViewController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BRListControl, BRMenuItem;
@interface SettingsMainMenuViewController : BRViewController
{
    NSArray * _appliances;
}

@property (retain, nonatomic) NSArray * appliances;

- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)controlWasActivated;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (NSArray *)appliances;
- (void)setAppliances:(NSArray *)arg0;
- (void)_reloadMenuItems;
- (id)AppliancesBinding;
- (void)updateBoundAppliances;
- (void)_updateAppliances;
- (id)_menuItemForAppliance:(id)arg0;
- (int)_accessModeForAppliance:(id)arg0;
- (void)_updateAppliancesList;
- (id)_previewForAppliance:(id)arg0;
- (void)bindAppliancesBindingToObject:(NSObject *)arg0 withKeyPath:(NSString *)arg1 options:(NSDictionary *)arg2;
- (SettingsMainMenuViewController *)init;
- (void).cxx_destruct;

@end
