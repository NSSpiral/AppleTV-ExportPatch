/* Runtime dump - MusicAlbumsController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/MusicCollectionController.h>

@class BRGenre, BRListControl, BRMenuItem;
@interface MusicAlbumsController : MusicCollectionController
{
    ATVDataCollection * _artist;
    NSNumber * _artistID;
    NSString * _genre;
    char _displaysCompilationsOnly;
    char _displaysAudiobooksOnly;
    ATVDataQuery * _focusedItemQuery;
}

@property (retain, nonatomic) ATVDataQuery * focusedItemQuery;

+ (MusicAlbumsController *)allAlbumsControllerByGenre:(id)arg0 dataClient:(ATVDataClient *)arg1 dataClientType:(unsigned int)arg2;
+ (NSObject *)allAlbumsControllerWithDataClient:(NSObject *)arg0 dataClientType:(unsigned int)arg1;
+ (NSObject *)allCompilationsControllerWithDataClient:(NSObject *)arg0 dataClientType:(unsigned int)arg1;
+ (NSObject *)allAudiobooksControllerWithDataClient:(NSObject *)arg0 dataClientType:(unsigned int)arg1;
+ (MusicAlbumsController *)albumsControllerForArtist:(id)arg0 byGenre:(BRGenre *)arg1 dataClient:(ATVDataClient *)arg2 dataClientType:(unsigned int)arg3;
+ (NSObject *)albumsControllerForArtistID:(NSObject *)arg0 dataClient:(ATVDataClient *)arg1 dataClientType:(unsigned int)arg2;

- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (float)list:(BRListControl *)arg0 heightForItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (NSError *)errorForNoContent;
- (NSObject *)newDataQuery;
- (NSString *)newPreviewQueryForIndexPath:(NSIndexPath *)arg0;
- (NSString *)newPlayQueryForIndexPath:(NSIndexPath *)arg0;
- (void)playQueryComplete:(id)arg0;
- (MusicAlbumsController *)initWithGenre:(NSString *)arg0 dataClient:(ATVDataClient *)arg1 dataClientType:(unsigned int)arg2;
- (void)_setDisplaysCompilationsOnly:(char)arg0;
- (void)_setDisplaysAudiobooksOnly:(char)arg0;
- (MusicAlbumsController *)initWithArtist:(ATVDataCollection *)arg0 byGenre:(BRGenre *)arg1 dataClient:(ATVDataClient *)arg2 dataClientType:(unsigned int)arg3;
- (MusicAlbumsController *)initWithArtistID:(NSNumber *)arg0 dataClient:(ATVDataClient *)arg1 dataClientType:(unsigned int)arg2;
- (int)_headerCount;
- (void)setFocusedItemQuery:(ATVDataQuery *)arg0;
- (void)_albumDetailQueryComplete:(id)arg0 forAlbum:(MSASAlbum *)arg1;
- (NSObject *)newPreDataQuery;
- (char)preDataQueryComplete:(id)arg0;
- (void *)dataItemAtIndexPath:(NSIndexPath *)arg0;
- (int)typeaheadSelectionOffset;
- (ATVDataQuery *)focusedItemQuery;
- (void)dealloc;
- (char)shouldShowSearch;

@end
