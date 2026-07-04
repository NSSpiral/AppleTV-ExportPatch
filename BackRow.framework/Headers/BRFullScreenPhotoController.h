/* Runtime dump - BRFullScreenPhotoController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRController.h>

@class BREvent;
@interface BRFullScreenPhotoController : BRController
{
    long _startIndex;
    long _currentIndex;
    <BRPhotoProviderForCollection> * _provider;
    <BRFullScreenPhotoControllerDelegate> * _delegate;
    char _isNetworkDependent;
    NSMutableArray * _prefetchImageIDs;
    NSString * _lastPrefetchAssetID;
    char _initialLayoutCompleted;
    int _startTouchXPosition;
    float _curTouchOffset;
    char _imagePrefetchDisabled;
    long _numPrefetchInProgress;
}

@property (readonly, nonatomic) <BRPhotoProviderForCollection> * provider;

+ (BRFullScreenPhotoController *)fullScreenPhotoControllerForProvider:(NSObject *)arg0 startIndex:(long)arg1;

- (char)brEventAction:(BREvent *)arg0;
- (void)layoutSubcontrols;
- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (void)_playerStateChanged:(NSNotification *)arg0;
- (char)isNetworkDependent;
- (void)setIsNetworkDependent:(char)arg0;
- (char)isValidAfterDataUpdate;
- (BRFullScreenPhotoController *)initWithProvider:(<BRPhotoProviderForCollection> *)arg0 startIndex:(long)arg1;
- (void)_prefetchImageWritten:(id)arg0;
- (long)_switchToImageControlForIndex:(long)arg0 usingSwipeTransition:(char)arg1;
- (void)_prefetchNextImage;
- (void)_nextSlideWithTransition;
- (void)_previousSlideWithTransition;
- (void)_previousSlide;
- (void)_nextSlide;
- (void)_handleSelection;
- (void)_setImageLayerTargetBounds;
- (void)setImagePrefetchDisabled:(char)arg0;
- (char)imagePrefetchDisabled;
- (void)dealloc;
- (void)reload;
- (NSString *)accessibilityLabel;
- (long)currentIndex;
- (char)isAccessibilityElement;
- (void)setControllerDelegate:(NSObject *)arg0;
- (<BRPhotoProviderForCollection> *)provider;

@end
