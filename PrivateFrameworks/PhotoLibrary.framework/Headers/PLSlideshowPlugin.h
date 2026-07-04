/* Runtime dump - PLSlideshowPlugin
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLSlideshowPlugin : NSObject
{
    <PLSlideshowPluginDelegate> * _delegate;
    struct NSObject * _album;
    NSArray * _albumAssets;
    double _secondsPerSlide;
    char _shuffleAlbum;
    char _shouldRepeat;
}

@property (nonatomic) <PLSlideshowPluginDelegate> * delegate;
@property (retain, nonatomic) NSObject<PLAlbumProtocol> * album;
@property (retain, nonatomic) NSArray * albumAssets;
@property (readonly, nonatomic) NSArray * displayedPhotos;
@property (readonly, nonatomic) PLManagedAsset * currentPhoto;
@property (nonatomic) double secondsPerSlide;
@property (nonatomic) char shuffleAlbum;
@property (nonatomic) char shouldRepeat;

- (void)dealloc;
- (void)setDelegate:(<PLSlideshowPluginDelegate> *)arg0;
- (<PLSlideshowPluginDelegate> *)delegate;
- (double)secondsPerSlide;
- (void)slideshowViewDidDisappear;
- (void)stopSlideshow;
- (char)shouldRepeat;
- (NSObject *)newSlideshowView;
- (void)slideshowViewWillAppear;
- (void)slideshowViewDidAppear;
- (void)pauseSlideshow;
- (void)setSecondsPerSlide:(double)arg0;
- (void)setShuffleAlbum:(char)arg0;
- (void)setShouldRepeat:(char)arg0;
- (void)setAlbumAssets:(NSArray *)arg0;
- (PLManagedAsset *)currentPhoto;
- (NSArray *)displayedPhotos;
- (void)resumeSlideshow;
- (NSArray *)albumAssets;
- (char)shuffleAlbum;
- (void)setAlbum:(struct NSObject *)arg0;
- (struct NSObject *)album;

@end
