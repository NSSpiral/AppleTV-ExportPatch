/* Runtime dump - MEInternetRadioGenreController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRDataQueryController.h>

@class BRControl, BRListControl, BRMenuItem;
@interface MEInternetRadioGenreController : BRDataQueryController
{
    ATVDataCollection * _radioCategory;
    NSArray * _stations;
}

+ (NSString *)menuForRadioCategory:(NSString *)arg0 stations:(NSArray *)arg1;

- (NSArray *)accessibilityScreenContent;
- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didPlayItemAtIndexPath:(NSIndexPath *)arg1;
- (void)_playerStateChanged:(NSNotification *)arg0;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (NSArray *)providersForContextMenu;
- (NSArray *)cancelProviderForContextMenu;
- (void)_handleContextMenuSelection:(id /* block */)arg0;
- (NSString *)newPreviewQueryForIndexPath:(NSIndexPath *)arg0;
- (void *)dataItemAtIndexPath:(NSIndexPath *)arg0;
- (void)_showSpinner:(char)arg0 delay:(char)arg1;
- (BRControl *)controlForContextMenuStart;
- (BRControl *)controlForContextMenuPositioning;
- (void)_stationsQueryComplete:(id)arg0;
- (NSString *)_initWithRadioCategory:(ATVDataCollection *)arg0 stations:(NSArray *)arg1;
- (void)dealloc;
- (void).cxx_destruct;

@end
