/* Runtime dump - VideoController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRDataQueryController.h>

@class BRListControl, BRTabControl;
@interface VideoController : BRDataQueryController
{
    ATVDataCollection * _mediaItemsCollection;
    char _displayPlaylistsMenuItem;
}

+ (int)getWatchedState:(NSObject *)arg0;

- (NSString *)list:(BRListControl *)arg0 itemIDForIndexPath:(NSIndexPath *)arg1;
- (NSIndexPath *)list:(BRListControl *)arg0 indexPathForItemID:(NSObject *)arg1;
- (BRTabControl *)tabControl;
- (NSArray *)providersForContextMenu;
- (NSArray *)cancelProviderForContextMenu;
- (void)setMediaItemsCollection:(ATVDataCollection *)arg0;
- (void)setDisplayPlaylistsMenuItem:(char)arg0;
- (void)addTabControlToListHeader;
- (NSObject *)tabControlItem:(NSObject *)arg0 withIdentifier:(unsigned int)arg1;
- (NSString *)tabControlItemForIdentifier:(unsigned int)arg0;
- (ATVDataCollection *)mediaItemsCollection;
- (char)displayPlaylistsMenuItem;
- (NSString *)controllerIdentifier;
- (NSArray *)unwatchedItems;
- (unsigned int)identifierForTabControlItem:(NSObject *)arg0;
- (void)_handleContextMenuMarkWatchedSelection:(id)arg0;
- (void)_handleContextMenuMarkUnwatchedSelection:(id)arg0;
- (NSString *)_listIdentifier;
- (NSArray *)currentItems;
- (void).cxx_destruct;

@end
