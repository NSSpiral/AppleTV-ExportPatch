/* Runtime dump - ML3StoreItemPlaylistData
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3StoreItemPlaylistData : NSObject
{
    SSLookupItem * _lookupItem;
    NSData * _playlistData;
    NSDictionary * _parsedPlaylistImportProperties;
}

@property (readonly, nonatomic) NSData * playlistData;
@property (readonly, nonatomic) NSDictionary * parsedPlaylistImportProperties;

- (void).cxx_destruct;
- (NSDictionary *)parsedPlaylistImportProperties;
- (NSObject *)_playlistPropertiesForLookupItem:(NSObject *)arg0;
- (NSArray *)_playlistPropertiesFromPlaylistData:(NSData *)arg0;
- (ML3StoreItemPlaylistData *)initWithLookupItem:(SSLookupItem *)arg0;
- (ML3StoreItemPlaylistData *)initWithPlaylistData:(NSData *)arg0;
- (NSData *)playlistData;

@end
