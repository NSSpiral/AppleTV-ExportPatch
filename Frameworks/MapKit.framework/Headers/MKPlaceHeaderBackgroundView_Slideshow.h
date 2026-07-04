/* Runtime dump - MKPlaceHeaderBackgroundView_Slideshow
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceHeaderBackgroundView_Slideshow : MKPlaceHeaderBackgroundView
{
    NSTimer * _timer;
    NSMutableArray * _images;
    int _nextImageIndex;
    unsigned int _iteration;
    NSArray * _slides;
    struct ? _slideShowFlags;
}

+ (char)canDisplayImagesForMapItem:(NSObject *)arg0;

- (void)prepareForPresentation;
- (void)pauseBackgroundAnimation;
- (void)addSlideShowImage:(UIImage *)arg0;
- (void)loadBusinessImages:(unsigned int)arg0;
- (void)showNextImage;
- (void)clearSlideShowImages;
- (void)preloadBackgroundContent;
- (void)loadBackgroundContent;
- (void)startBackgroundAnimation;
- (id)nextSlide;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg0;
- (void)reset;
- (void)resume;
- (void)present;
- (void).cxx_destruct;
- (void)pause;
- (KNSlide *)currentSlide;

@end
