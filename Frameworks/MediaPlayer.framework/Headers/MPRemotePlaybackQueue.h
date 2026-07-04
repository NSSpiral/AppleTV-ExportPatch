/* Runtime dump - MPRemotePlaybackQueue
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPRemotePlaybackQueue : NSObject
{
    struct _MRSystemAppPlaybackQueue * _mediaRemotePlaybackQueue;
    NSDictionary * _userInfo;
}

@property (readonly, nonatomic) NSDictionary * userInfo;
@property (readonly, nonatomic) char requestingImmediatePlayback;
@property (readonly, nonatomic) char shouldOverrideManuallyCuratedQueue;

+ (NSOperationQueue *)queueWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue *)arg0;

- (MPRemotePlaybackQueue *)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue *)arg0;
- (char)isRequestingImmediatePlayback;
- (char)shouldOverrideManuallyCuratedQueue;
- (char)verifyWithError:(id *)arg0;
- (void)dealloc;
- (MPRemotePlaybackQueue *)init;
- (NSDictionary *)userInfo;
- (void).cxx_destruct;

@end
