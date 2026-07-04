/* Runtime dump - ML3MigrationMisgroupedAlbum
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3MigrationMisgroupedAlbum : NSObject
{
    NSMutableArray * _misgroupedTracks;
    long long _albumPID;
    long long _albumArtistPID;
}

@property (readonly, nonatomic) long long albumPID;
@property (readonly, nonatomic) long long albumArtistPID;
@property (readonly, nonatomic) NSArray * misgroupedTracks;

- (void).cxx_destruct;
- (ML3MigrationMisgroupedAlbum *)initWithAlbumPID:(long long)arg0 albumArtistPID:(long long)arg1;
- (void)addMisgroupedTrack:(NSObject *)arg0;
- (NSArray *)misgroupedTracks;
- (long long)albumArtistPID;
- (long long)albumPID;

@end
