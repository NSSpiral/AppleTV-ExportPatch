/* Runtime dump - MRRenderArguments
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRRenderArguments : NSObject
{
    MRRenderer * _renderer;
    NSOperationQueue * _preloadQueue;
    NSDictionary * _forcedState;
    double _unalteredTime;
    double _displayLinkTimestamp;
    float _morphingProgress;
    int _thumbnailPolicy;
    unsigned char _currentLayoutIndex;
    char _isPreloading;
    char _freezesSizeOfImageRequests;
    char _skipsAnimations;
}

@property (readonly, retain) MRRenderer * renderer;
@property (retain) NSOperationQueue * preloadQueue;
@property (retain) NSDictionary * forcedState;
@property double unalteredTime;
@property double displayLinkTimestamp;
@property float morphingProgress;
@property int thumbnailPolicy;
@property unsigned char currentLayoutIndex;
@property (readonly) char isPreloading;
@property char freezesSizeOfImageRequests;
@property (nonatomic) char skipsAnimations;

- (void)dealloc;
- (void)cleanup;
- (NSOperationQueue *)preloadQueue;
- (double)unalteredTime;
- (id)copyForPreloading;
- (char)isPreloading;
- (NSDictionary *)forcedState;
- (unsigned char)currentLayoutIndex;
- (void)setCurrentLayoutIndex:(unsigned char)arg0;
- (void)setForcedState:(NSDictionary *)arg0;
- (char)skipsAnimations;
- (int)thumbnailPolicy;
- (void)setThumbnailPolicy:(int)arg0;
- (void)setPreloadQueue:(NSOperationQueue *)arg0;
- (void)setDisplayLinkTimestamp:(double)arg0;
- (void)setSkipsAnimations:(char)arg0;
- (void)setUnalteredTime:(double)arg0;
- (void)setMorphingProgress:(float)arg0;
- (void)setFreezesSizeOfImageRequests:(char)arg0;
- (double)displayLinkTimestamp;
- (float)morphingProgress;
- (char)freezesSizeOfImageRequests;
- (MRRenderer *)renderer;
- (MRRenderArguments *)initWithRenderer:(MRRenderer *)arg0;

@end
