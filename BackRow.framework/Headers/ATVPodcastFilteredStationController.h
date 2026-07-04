/* Runtime dump - ATVPodcastFilteredStationController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BRListControl, BRMediaMenuView, BRMenuItem, BRMetadataPreviewControl;
@interface ATVPodcastFilteredStationController : BRViewController
{
    BRMediaMenuView * _mediaMenuView;
    BRMetadataPreviewControl * _metadataControl;
    NSArray * _shows;
}

@property (copy, nonatomic) NSArray * shows;

- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (void)controlWasActivated;
- (float)list:(BRListControl *)arg0 heightForItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (NSArray *)providersForContextMenu;
- (NSArray *)cancelProviderForContextMenu;
- (NSObject *)_blueDotParamsForSelectedItem;
- (void)_markAsWatched;
- (void)_markAsUnwatched;
- (void)_markAsWatched:(char)arg0 blueDotParams:(id)arg1;
- (NSArray *)shows;
- (void)setShows:(NSArray *)arg0;
- (void)_markAllAsWatched;
- (void)_markAllAsUnwatched;
- (id)_allBlueDotParams;
- (ATVPodcastFilteredStationController *)initWithTitle:(NSString *)arg0 shows:(NSArray *)arg1;
- (void)_updateDetail:(id)arg0;
- (ATVPodcastFilteredStationController *)init;
- (void).cxx_destruct;

@end
