/* Runtime dump - ML3MutableDatabaseImport
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3MutableDatabaseImport : ML3DatabaseImport

@property (copy, nonatomic) NSString * libraryPath;
@property (copy, nonatomic) NSData * trackData;
@property (copy, nonatomic) NSData * playlistData;
@property (retain, nonatomic) NSFileHandle * fileHandle;
@property (copy, nonatomic) NSString * syncAnchor;
@property (nonatomic) char resetSync;
@property (nonatomic) char sagaEnabled;
@property (nonatomic) long long storeAccountID;
@property (nonatomic) long long preferredVideoQuality;
@property (nonatomic) unsigned int homeSharingBasePlaylistID;
@property (nonatomic) char tracksAreLibraryOwnedContent;
@property (nonatomic) char playlistsAreLibraryOwnedContent;
@property (nonatomic) char pendingMatch;

- (void)setLibraryPath:(NSString *)arg0;
- (void)setTrackData:(NSData *)arg0;
- (void)setPlaylistData:(NSData *)arg0;
- (void)setFileHandle:(NSFileHandle *)arg0;
- (void)setSyncAnchor:(NSString *)arg0;
- (void)setResetSync:(char)arg0;
- (void)setSagaEnabled:(char)arg0;
- (void)setStoreAccountID:(long long)arg0;
- (void)setPreferredVideoQuality:(long long)arg0;
- (void)setHomeSharingBasePlaylistID:(unsigned int)arg0;
- (void)setTracksAreLibraryOwnedContent:(char)arg0;
- (void)setPlaylistsAreLibraryOwnedContent:(char)arg0;
- (void)setPendingMatch:(char)arg0;

@end
