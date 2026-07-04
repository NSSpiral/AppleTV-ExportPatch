/* Runtime dump - MPiTunesStoreTracklistPlaybackQueue
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPiTunesStoreTracklistPlaybackQueue : MPRemotePlaybackQueue
{
    NSArray * _storeIDs;
    unsigned int _shuffleType;
}

@property (readonly, nonatomic) NSArray * storeIDs;
@property (readonly, nonatomic) unsigned int shuffleType;

- (unsigned int)shuffleType;
- (MPiTunesStoreTracklistPlaybackQueue *)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue *)arg0;
- (char)verifyWithError:(id *)arg0;
- (NSArray *)storeIDs;
- (NSString *)description;
- (void).cxx_destruct;

@end
