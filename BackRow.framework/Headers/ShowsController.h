/* Runtime dump - ShowsController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/VideoController.h>

@protocol BRTabControlDelegate;

@class BRControl, BRListControl, BRMenuItem, BRTabControl, BRTabControlItem;
@interface ShowsController : VideoController <BRTabControlDelegate>
{
    ATVDataType * _mediaType;
    NSArray * _tvShowsSortedByShowName;
    NSMutableArray * _unwatchedItemsByShow;
    NSMutableArray * _itemsByShow;
    NSNumber * _showID;
    NSString * _showName;
    char _unwatchedShows;
    NSMutableArray * _showItems;
    char _playAllItems;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)controllerForATVMediaType:(NSObject *)arg0 collection:(RadioArtworkCollection *)arg1 dataClient:(ATVDataClient *)arg2 dataClientType:(unsigned int)arg3 playAllItems:(char)arg4;
+ (ShowsController *)showsControllerForShowWithID:(int)arg0 name:(NSString *)arg1 unwatched:(char)arg2 mediaType:(ATVDataType *)arg3 dataClient:(ATVDataClient *)arg4 dataClientType:(unsigned int)arg5;
+ (ShowsController *)showsControllerForCollection:(id)arg0 mediaType:(ATVDataType *)arg1 playAllItems:(char)arg2 dataClient:(ATVDataClient *)arg3 dataClientType:(unsigned int)arg4;

- (void)wasPopped;
- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (BRControl *)list:(BRListControl *)arg0 sectionHeaderForSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didPlayItemAtIndexPath:(NSIndexPath *)arg1;
- (float)list:(BRListControl *)arg0 heightForSectionHeader:(long)arg1;
- (float)list:(BRListControl *)arg0 heightForItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (void)tabControl:(BRTabControl *)arg0 didSelectTabItem:(BRTabControlItem *)arg1;
- (void)tabControl:(BRTabControl *)arg0 willSelectTabItem:(BRTabControlItem *)arg1;
- (void)tabControlDidChangeNumberOfTabItems:(BRTabControl *)arg0;
- (NSError *)errorForNoContent;
- (NSObject *)newDataQuery;
- (NSString *)newPreviewQueryForIndexPath:(NSIndexPath *)arg0;
- (char)dataQueryComplete:(ATVDataQuery *)arg0;
- (NSObject *)newPreDataQuery;
- (char)preDataQueryComplete:(id)arg0;
- (void *)dataItemAtIndexPath:(NSIndexPath *)arg0;
- (ShowsController *)initWithMediaType:(ATVDataType *)arg0 dataClient:(ATVDataClient *)arg1 dataClientType:(unsigned int)arg2;
- (NSObject *)_initWithMediaType:(ATVDataType *)arg0 dataClient:(ATVDataClient *)arg1 dataClientType:(unsigned int)arg2;
- (int)_lastSelectedTabControlItemKind;
- (void)_updateDisplayPlaylists;
- (int)_currentlySelectedTabControlItemKind;
- (NSArray *)_currentItems;
- (void)_mediaItemPropertySet:(NSSet *)arg0;
- (int)_convertIdentifierToTabControlItemKind:(unsigned int)arg0;
- (ShowsController *)initWithShowsCollection:(NSArray *)arg0 mediaType:(ATVDataType *)arg1 playAllItems:(char)arg2 dataClient:(ATVDataClient *)arg3 dataClientType:(unsigned int)arg4;
- (ShowsController *)initWithShowID:(NSNumber *)arg0 name:(NSString *)arg1 unwatched:(char)arg2 mediaType:(ATVDataType *)arg3 dataClient:(ATVDataClient *)arg4 dataClientType:(unsigned int)arg5;
- (NSString *)_titleKey;
- (NSString *)_tabItemPreferenceKey;
- (NSObject *)newDataQueryWithoutSort;
- (void)_updatePreviewForRow:(int)arg0 inData:(NSData *)arg1;
- (long)_lastUnwatchedMediaItemRowIndex;
- (id)defaultIndexPathToSelect;
- (id)_menuItemForShow:(NSNotification *)arg0;
- (id)_menuItemForEpisode:(id)arg0;
- (NSString *)typeaheadPropertyName;
- (id)_getUnwatchedItemsByShow:(char)arg0;
- (NSDictionary *)_getDictionary:(NSDictionary *)arg0 showID:(NSNumber *)arg1;
- (NSArray *)currentItems;
- (void)dealloc;
- (void).cxx_destruct;

@end
