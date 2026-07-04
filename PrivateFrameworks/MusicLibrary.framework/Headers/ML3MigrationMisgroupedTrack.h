/* Runtime dump - ML3MigrationMisgroupedTrack
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3MigrationMisgroupedTrack : NSObject
{
    long long _persistentID;
    long long _albumArtistPID;
}

@property (readonly, nonatomic) long long persistentID;
@property (readonly, nonatomic) long long albumArtistPID;

- (long long)persistentID;
- (ML3MigrationMisgroupedTrack *)initWithPersistentID:(long long)arg0 albumArtistPID:(long long)arg1;
- (long long)albumArtistPID;

@end
