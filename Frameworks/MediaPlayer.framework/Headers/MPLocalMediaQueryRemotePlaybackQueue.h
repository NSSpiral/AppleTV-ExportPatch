/* Runtime dump - MPLocalMediaQueryRemotePlaybackQueue
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPLocalMediaQueryRemotePlaybackQueue : MPRemotePlaybackQueue
{
    MPMediaQuery * _mediaQuery;
    MPMediaItem * _firstItem;
    unsigned int _shuffleType;
    unsigned int _repeatType;
}

@property (readonly, nonatomic) MPMediaQuery * mediaQuery;
@property (readonly, nonatomic) MPMediaItem * firstItem;
@property (readonly, nonatomic) unsigned int shuffleType;
@property (readonly, nonatomic) unsigned int repeatType;

- (unsigned int)repeatType;
- (unsigned int)shuffleType;
- (MPLocalMediaQueryRemotePlaybackQueue *)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue *)arg0;
- (char)verifyWithError:(id *)arg0;
- (MPMediaQuery *)mediaQuery;
- (NSString *)description;
- (MPMediaItem *)firstItem;
- (void).cxx_destruct;

@end
