/* Runtime dump - PlaylistsController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/MusicCollectionController.h>

@class BRListControl, BRMenuItem, BRTypeaheadPhraseAccumulator;
@interface PlaylistsController : MusicCollectionController
{
    ATVDataType * _mediaTypeForQuery;
    ATVDataCollection * _folder;
    NSArray * _filteredPlaylists;
    Class _mediaTypeControllerClass;
}

+ (PlaylistsController *)playlistsControllerWithDataClient:(NSObject *)arg0 dataClientType:(unsigned int)arg1 mediaType:(NSObject *)arg2 mediaTypeControllerClass:(Class)arg3;

- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (NSString *)list:(BRListControl *)arg0 itemIDForIndexPath:(NSIndexPath *)arg1;
- (NSIndexPath *)list:(BRListControl *)arg0 indexPathForItemID:(NSObject *)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didPlayItemAtIndexPath:(NSIndexPath *)arg1;
- (float)list:(BRListControl *)arg0 heightForItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (NSArray *)providersForContextMenu;
- (NSError *)errorForNoContent;
- (NSObject *)newDataQuery;
- (NSString *)newPreviewQueryForIndexPath:(NSIndexPath *)arg0;
- (NSString *)newPlayQueryForIndexPath:(NSIndexPath *)arg0;
- (void)playQueryComplete:(id)arg0;
- (char)dataQueryComplete:(ATVDataQuery *)arg0;
- (char)typeaheadPhraseAccumulator:(BRTypeaheadPhraseAccumulator *)arg0 phraseChanged:(NSString *)arg1;
- (void *)dataItemAtIndexPath:(NSIndexPath *)arg0;
- (int)typeaheadSelectionOffset;
- (PlaylistsController *)initWithMediaType:(NSObject *)arg0 folder:(ATVDataCollection *)arg1 dataClient:(ATVDataClient *)arg2 dataClientType:(unsigned int)arg3 mediaTypeControllerClass:(Class)arg4;
- (void)_cloudPreparePlaylistHierarcy:(id)arg0;
- (void)_preparePlaylistHierarcy:(id)arg0;
- (NSObject *)filterForCurrentMediaType;
- (int)_firstLevelChildernOfPlaylistAtIndex:(int)arg0 inArray:(NSArray *)arg1 totalChildern:(int *)arg2;
- (char)_cloudFolderHasPlaylist:(id)arg0 inTree:(id)arg1;
- (NSArray *)currentItems;
- (void)dealloc;

@end
