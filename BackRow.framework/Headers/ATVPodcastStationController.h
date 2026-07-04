/* Runtime dump - ATVPodcastStationController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BRListControl, BRMediaMenuView, BRMenuItem, BRMetadataPreviewControl;
@interface ATVPodcastStationController : BRViewController
{
    NSDictionary * _station;
    BRMediaMenuView * _mediaMenuView;
    BRMetadataPreviewControl * _metadataControl;
    NSDictionary * _collectionIdToShows;
    char _isGrouped;
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
- (int)_watchStateWithGroupedShows:(id)arg0;
- (void)_markAllAsWatched;
- (void)_markAllAsUnwatched;
- (id)_allBlueDotParams;
- (void)_selectCollection:(id)arg0;
- (void)_updateDetail:(id)arg0;
- (ATVPodcastStationController *)initWithStation:(NSDictionary *)arg0;
- (ATVPodcastStationController *)init;
- (void).cxx_destruct;

@end
