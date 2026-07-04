/* Runtime dump - MusicItemsController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/MusicController.h>

@class BRGenre, BRListControl, BRMenuItem;
@interface MusicItemsController : MusicController
{
    ATVDataCollection * _album;
    ATVDataCollection * _artist;
    ATVDataCollection * _musicVideoArtist;
    ATVDataCollection * _composer;
    ATVDataCollection * _playlist;
    NSString * _genre;
    NSNumber * _albumID;
    char _displaysMusicVideosOnly;
    char _displayAudiobooksOnly;
    char _displayCompilationTracksOnly;
    char _sortItemsByName;
    char _refreshList;
}

+ (MusicItemsController *)songsControllerForArtist:(id)arg0 byGenre:(BRGenre *)arg1 dataClient:(ATVDataClient *)arg2 dataClientType:(unsigned int)arg3;
+ (MusicItemsController *)allSongsControllerByGenre:(id)arg0 displayCompilationsOnly:(char)arg1 dataClient:(ATVDataClient *)arg2 dataClientType:(unsigned int)arg3;
+ (MusicItemsController *)audiobooksControllerForAlbum:(id)arg0 dataClient:(ATVDataClient *)arg1 dataClientType:(unsigned int)arg2;
+ (MusicItemsController *)songsControllerForAlbum:(id)arg0 byGenre:(BRGenre *)arg1 displayCompilationsOnly:(char)arg2 dataClient:(ATVDataClient *)arg3 dataClientType:(unsigned int)arg4;
+ (MusicItemsController *)songsControllerForComposer:(id)arg0 dataClient:(ATVDataClient *)arg1 dataClientType:(unsigned int)arg2;
+ (NSObject *)songsControllerForAlbumWithID:(int)arg0 dataClient:(ATVDataClient *)arg1 dataClientType:(unsigned int)arg2;
+ (MusicItemsController *)songsControllerForPlaylist:(id)arg0 dataClient:(ATVDataClient *)arg1 dataClientType:(unsigned int)arg2;
+ (NSObject *)controllerForATVMediaType:(NSObject *)arg0 collection:(RadioArtworkCollection *)arg1 dataClient:(ATVDataClient *)arg2 dataClientType:(unsigned int)arg3 playAllItems:(char)arg4;
+ (NSObject *)allSongsControllerWithDataClient:(NSObject *)arg0 dataClientType:(unsigned int)arg1;
+ (NSObject *)allMusicVideosControllerWithDataClient:(NSObject *)arg0 dataClientType:(unsigned int)arg1;
+ (MusicItemsController *)musicVideosControllerForArtist:(id)arg0 dataClient:(ATVDataClient *)arg1 dataClientType:(unsigned int)arg2;

- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (NSString *)list:(BRListControl *)arg0 itemIDForIndexPath:(NSIndexPath *)arg1;
- (NSIndexPath *)list:(BRListControl *)arg0 indexPathForItemID:(NSObject *)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didPlayItemAtIndexPath:(NSIndexPath *)arg1;
- (float)list:(BRListControl *)arg0 heightForItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (void)wasExhumed;
- (NSError *)errorForNoContent;
- (NSObject *)newDataQuery;
- (void)_setDisplaysAudiobooksOnly:(char)arg0;
- (MusicItemsController *)initWithArtist:(ATVDataCollection *)arg0 byGenre:(BRGenre *)arg1 dataClient:(ATVDataClient *)arg2 dataClientType:(unsigned int)arg3;
- (void)setSortItemsByName:(char)arg0;
- (NSObject *)newPreDataQuery;
- (char)preDataQueryComplete:(id)arg0;
- (void *)dataItemAtIndexPath:(NSIndexPath *)arg0;
- (int)typeaheadSelectionOffset;
- (NSObject *)indexPathForDataItem:(void *)arg0;
- (MusicItemsController *)initWithGenre:(NSString *)arg0 displayCompilationsOnly:(char)arg1 dataClient:(ATVDataClient *)arg2 dataClientType:(unsigned int)arg3;
- (void)_setDisplaysMusicVideosOnly:(char)arg0;
- (MusicItemsController *)initWithAlbum:(ATVDataCollection *)arg0 byGenre:(BRGenre *)arg1 displayCompilationsOnly:(char)arg2 dataClient:(ATVDataClient *)arg3 dataClientType:(unsigned int)arg4;
- (MusicItemsController *)initWithAlbumID:(NSNumber *)arg0 dataClient:(ATVDataClient *)arg1 dataClientType:(unsigned int)arg2;
- (MusicItemsController *)initWithComposer:(ATVDataCollection *)arg0 dataClient:(ATVDataClient *)arg1 dataClientType:(unsigned int)arg2;
- (MusicItemsController *)initWithPlaylist:(ATVDataCollection *)arg0 dataClient:(ATVDataClient *)arg1 dataClientType:(unsigned int)arg2;
- (MusicItemsController *)initWithMusiVideoArtist:(id)arg0 dataClient:(ATVDataClient *)arg1 dataClientType:(unsigned int)arg2;
- (MusicItemsController *)initWithAudiobookAlbum:(id)arg0 dataClient:(ATVDataClient *)arg1 dataClientType:(unsigned int)arg2;
- (char)_shuffleEnabled;
- (void)_setPreviewForMedia:(NSObject *)arg0;
- (void)_playerUpdated:(id)arg0;
- (void)_registerForPlayerNotifications;
- (void)dealloc;
- (char)shouldShowSearch;

@end
