/* Runtime dump - MPMediaLibraryDataProviderSystemML3
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaLibraryDataProviderSystemML3 : MPMediaLibraryDataProviderML3
{
    <MPArtworkDataSource> * _completeMyCollectionArtworkDataSource;
    long long _currentRevision;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (char)_isGeniusEnabled;
+ (NSError *)_localizedGeniusErrorForError:(NSError *)arg0;
+ (NSError *)_localizedCloudGeniusErrorForError:(NSError *)arg0;

- (NSObject *)errorResolverForItem:(NSObject *)arg0;
- (<MPArtworkDataSource> *)completeMyCollectionArtworkDataSource;
- (MPMediaLibraryDataProviderSystemML3 *)initWithLibrary:(ML3MusicLibrary *)arg0;
- (char)isGeniusEnabled;
- (void)seedPlaylistWithIdentifier:(long long)arg0 withItemWithIdentifier:(long long)arg1 completionBlock:(id /* block */)arg2;
- (void)releaseGeniusClusterPlaylist:(void *)arg0;
- (void *)createGeniusClusterPlaylistWithSeedItemIdentifiers:(long long *)arg0 count:(unsigned int)arg1 error:(id *)arg2;
- (long long *)generateItemIdentifiersForGeniusClusterPlaylist:(void *)arg0 count:(unsigned int *)arg1 error:(id *)arg2;
- (void)updateEntitesToCurrentRevision;
- (char)supportsEntityChangeTrackingForMediaEntityType:(int)arg0 collectionGroupingType:(int)arg1 dataProviderClass:(Class *)arg2;
- (void)_initInstanceVariableOnce;
- (void)_seedCloudPlaylistWithTrack:(NSObject *)arg0 container:(NSObject *)arg1 completionBlock:(id /* block */)arg2;
- (long long)_currentRevision;
- (void).cxx_destruct;

@end
