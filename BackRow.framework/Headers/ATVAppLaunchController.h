/* Runtime dump - ATVAppLaunchController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BRControl, BRListControl, BRMenuItem;
@interface ATVAppLaunchController : BRViewController
{
    NSArray * _installedBundleIDs;
    NSArray * _installedAppNames;
}

- (void)wasPushed;
- (void)_activateBundleIdentifierAtIndexPath:(NSIndexPath *)arg0;
- (void)_activateApplicationWithBundleID:(NSString *)arg0;
- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (BRControl *)list:(BRListControl *)arg0 sectionHeaderForSection:(long)arg1;
- (NSString *)list:(BRListControl *)arg0 itemIDForIndexPath:(NSIndexPath *)arg1;
- (NSIndexPath *)list:(BRListControl *)arg0 indexPathForItemID:(NSObject *)arg1;
- (void)listWasActivated:(id)arg0;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didPlayItemAtIndexPath:(NSIndexPath *)arg1;
- (ATVAppLaunchController *)init;
- (void).cxx_destruct;

@end
