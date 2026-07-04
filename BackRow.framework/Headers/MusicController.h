/* Runtime dump - MusicController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRDataQueryController.h>

@class BRGenre;
@interface MusicController : BRDataQueryController

+ (MusicController *)newSongsQueryWithPropertiesForArtist:(id)arg0;
+ (MusicController *)newItemsQueryForAlbum:(id)arg0;
+ (void)addPropertiesForSongsQuery:(NSObject *)arg0;
+ (MusicController *)newItemsQueryForPlaylist:(id)arg0;
+ (MusicController *)songsAndMusicVideosFilterWithAudiobook:(char)arg0;
+ (void)addGenre:(BRGenre *)arg0 toQuery:(NSObject *)arg1;
+ (void)addPropertiesForAlbumQuery:(NSObject *)arg0 withDetailedData:(char)arg1;
+ (NSDictionary *)newSongsQueryWithProperties;
+ (void)addiTunesLPFilterToQuery:(NSObject *)arg0;
+ (MusicController *)albumMenuItemForAlbum:(id)arg0 displaysArtistName:(char)arg1;
+ (MusicController *)previewForAlbum:(id)arg0 preview:(AVConferencePreview *)arg1;
+ (MusicController *)addDetailedPropertiesIfNeededToAlbum:(id)arg0 usingClient:(NSObject *)arg1 withCompletionHandler:(id /* block */)arg2;
+ (MusicController *)newSongsQueryWithPropertiesForComposer:(id)arg0;
+ (MusicController *)artistMenuItemForArtist:(id)arg0;
+ (MusicController *)newSongsQueryForArtist:(id)arg0;
+ (NSObject *)newSongsQuery;
+ (MusicController *)newSongsQueryForComposer:(id)arg0;
+ (NSObject *)newSongsQueryForAlbumID:(NSObject *)arg0;
+ (NSDictionary *)newMusicVideosQueryWithProperties:(char)arg0;
+ (MusicController *)songMenuItemForSong:(id)arg0 displaysArtist:(char)arg1 displaySpeakerIfPlaying:(char)arg2;
+ (NSObject *)newSongsQueryWithPropertiesForAlbumID:(NSObject *)arg0;
+ (NSDictionary *)newAudiobooksQueryWithProperties:(char)arg0;
+ (NSObject *)newMusicVideosQueryWithPropertiesForArtistID:(NSObject *)arg0;
+ (NSDictionary *)newPlaylistsQueryWithProperties:(char)arg0;
+ (MusicController *)songMenuItemForSong:(id)arg0 displaySpeakerIfPlaying:(char)arg1;
+ (MusicController *)songMenuItemForSong:(id)arg0;
+ (MusicController *)songMenuItemForSong:(id)arg0 displaysArtist:(char)arg1;
+ (MusicController *)albumMenuItemForAlbum:(id)arg0;
+ (MusicController *)playlistMenuItemForPlaylist:(id)arg0;
+ (NSObject *)previewForMediaItem:(NSObject *)arg0 preview:(AVConferencePreview *)arg1;

- (NSArray *)providersForContextMenu;
- (NSArray *)cancelProviderForContextMenu;
- (MusicController *)initWithDataClient:(ATVDataClient *)arg0 dataClientType:(unsigned int)arg1;
- (void)_handleContextMenuSelection:(id /* block */)arg0;
- (NSObject *)searchControllerForClient:(NSObject *)arg0 clientType:(unsigned int)arg1 textEntryClient:(NSString *)arg2;
- (char)shouldShowSearch;

@end
