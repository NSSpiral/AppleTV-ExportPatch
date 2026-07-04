/* Runtime dump - MPMovie
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMovie : NSObject
{
    MPAVItem * _item;
    NSURL * _url;
    int _movieSourceType;
    double _startPlaybackTime;
    double _endPlaybackTime;
    char _explicitlySetMovieSourceType;
    char _movieIsUnplayable;
    double _lastKnownDuration;
    struct CGSize _lastKnownNaturalSize;
    unsigned int _lastKnownType;
}

@property (readonly, nonatomic) NSURL * url;
@property (readonly, nonatomic) AVAsset * asset;
@property (readonly, nonatomic) AVPlayerItem * playerItem;
@property (readonly, nonatomic) unsigned int movieMediaTypes;
@property (nonatomic) int movieSourceType;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double playableDuration;
@property (readonly, nonatomic) struct CGSize naturalSize;
@property (nonatomic) double startPlaybackTime;
@property (nonatomic) double endPlaybackTime;

+ (MPMovie *)movieWithURL:(NSString *)arg0 options:(NSDictionary *)arg1 error:(id *)arg2;
+ (MPMovie *)movieWithAsset:(AVAsset *)arg0 error:(id *)arg1;
+ (MPMovie *)movieWithPlayerItem:(AVPlayerItem *)arg0 error:(id *)arg1;

- (unsigned int)movieMediaTypes;
- (void)setMovieSourceType:(int)arg0;
- (int)movieSourceType;
- (double)playableDuration;
- (void)setEndPlaybackTime:(double)arg0;
- (double)endPlaybackTime;
- (AVPlayerItem *)playerItem;
- (void)setStartPlaybackTime:(double)arg0;
- (double)startPlaybackTime;
- (NSObject *)_MPArrayQueueItem;
- (NSURL *)_initWithURL:(NSString *)arg0 options:(NSDictionary *)arg1 error:(id *)arg2;
- (NSSet *)_initWithAsset:(AVAsset *)arg0 error:(id *)arg1;
- (NSObject *)_initWithPlayerItem:(AVPlayerItem *)arg0 error:(id *)arg1;
- (void)_sharedInit;
- (void)_durationAvailableNotification:(NSNotification *)arg0;
- (void)_naturalSizeAvailableNotification:(NSNotification *)arg0;
- (void)_typeAvailableNotification:(NSNotification *)arg0;
- (void)_determineMediaType;
- (void)dealloc;
- (double)duration;
- (NSURL *)url;
- (void).cxx_destruct;
- (AVAsset *)asset;
- (struct CGSize)naturalSize;

@end
