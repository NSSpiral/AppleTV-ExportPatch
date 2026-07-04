/* Runtime dump - MLGeniusPlaylistController
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MLGeniusPlaylistController : NSObject
{
    void * _echo;
    void * _echo_library;
    void * _echo_cluster_playlist;
    NSMutableData * _sharedBlobMutableData;
}

+ (char)hasGeniusDataAvailable;
+ (char)hasGeniusFeatureEnabled;
+ (unsigned int)defaultMinTrackCount;
+ (unsigned int)defaultTrackCount;
+ (char)useFakeGeniusData;
+ (void)ignoreUnusedWarnings;
+ (void)populateContainer:(NSObject *)arg0 withSeedTrack:(unsigned int)arg1 completionBlock:(id /* block */)arg2;
+ (NSArray *)playlistControllerWithSeedTracks:(unsigned int)arg0 error:(id *)arg1;

- (void)dealloc;
- (MLGeniusPlaylistController *)init;
- (void).cxx_destruct;
- (char)_onBackgroundQueue_fakePopulateContainer:(NSObject *)arg0 withSeedTrack:(unsigned int)arg1 error:(id *)arg2;
- (char)_onBackgroundQueue_populateContainer:(NSObject *)arg0 seedTrack:(NSObject *)arg1 error:(id *)arg2;
- (char)_createClusterPlaylistWithSeedTracks:(unsigned int)arg0 error:(id *)arg1;
- (id)_onBackgroundQueue_tracksFromClusterForPlaylistItemMax:(unsigned int)arg0 error:(id *)arg1;
- (NSObject *)_debugGetTracksStartingAtTrackWithPersistentID:(unsigned long long)arg0 maxTracks:(unsigned int)arg1 stride:(int)arg2;
- (char)_canIncludeTrackInGeniusContainer:(NSObject *)arg0;
- (NSNumber *)tracksFromClusterForCount:(unsigned int)arg0 error:(id *)arg1;
- (NSData *)_sharedBlobMutableData;

@end
