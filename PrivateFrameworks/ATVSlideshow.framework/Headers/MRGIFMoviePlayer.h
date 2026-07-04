/* Runtime dump - MRGIFMoviePlayer
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRGIFMoviePlayer : NSObject
{
    NSString * _path;
    struct CGSize _size;
    struct CGImageSource * _imageSource;
    struct CGImage * _currentImage;
    unsigned long _currentIndex;
    unsigned long _numberOfImages;
    double _nextImageTime;
    double _playTimeOffset;
    float _imageDuration;
    char _isPlaying;
}

@property (nonatomic) char isPlaying;
@property (readonly) struct CGImage * currentImage;

- (void)dealloc;
- (struct CGImage *)currentImage;
- (void)setTime:(double)arg0;
- (void)cleanup;
- (void)setIsPlaying:(char)arg0;
- (MRGIFMoviePlayer *)initWithPath:(NSString *)arg0 andSize:(struct CGSize)arg1;
- (void)getNextImage;
- (char)isPlaying;

@end
