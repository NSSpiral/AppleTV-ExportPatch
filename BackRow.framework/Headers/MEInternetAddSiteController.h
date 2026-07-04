/* Runtime dump - MEInternetAddSiteController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BRControl, BRListControl, BRMediaMenuView, BRMenuItem;
@interface MEInternetAddSiteController : BRViewController
{
    BRMediaMenuView * _addSiteListViewControl;
    NSArray * _currentSiteData;
    ATVImage * _trashCanImage;
}

- (void)wasPopped;
- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (BRControl *)list:(BRListControl *)arg0 sectionHeaderForSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (float)list:(BRListControl *)arg0 heightForSectionHeader:(long)arg1;
- (float)list:(BRListControl *)arg0 heightForItemAtIndexPath:(NSIndexPath *)arg1;
- (NSIndexPath *)list:(BRListControl *)arg0 willFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (void)wasExhumed;
- (void)loadSiteData;
- (NSObject *)createMediaMenuView;
- (MEInternetAddSiteController *)init;
- (void).cxx_destruct;

@end
