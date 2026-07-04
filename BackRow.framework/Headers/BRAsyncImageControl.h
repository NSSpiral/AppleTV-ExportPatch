/* Runtime dump - BRAsyncImageControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRAsyncTask, BRTextControl, BRWaitSpinnerControl;
@interface BRAsyncImageControl : BRControl
{
    <BRImageProxy> * _imageProxy;
    BRWaitSpinnerControl * _spinner;
    ATVImage * _image;
    ATVImage * _defaultImage;
    int _altImageProxySize;
    <BRImageProxy> * _altImageProxy;
    BRAsyncTask * _imageProcessingTask;
    NSString * _imageID;
    char _cropAndFill;
    char _useLoadingSpinner;
    char _loadFailure;
    char _imageLoadRequested;
    char _useLoadFailureImage;
    char _loadOnActivation;
    char _okToLoadImage;
    char _useFadeInAnimation;
    int _requestedSize;
    NSMutableDictionary * _badges;
    float _badgeUnfocusedOpacity;
    float _badgeFocusedOpacity;
    BRTextControl * _titleControl;
    struct ? _titleInsetWidth;
    struct ? _titleOffsetHeight;
    double _activationDelayDuration;
    NSTimer * _activationDelayTimer;
    char _imageAlignsToBottom;
    char _displaysTitleOnlyOnFocus;
    char _titleUnderImageBaseline;
    int _imageContentMode;
    int _defaultImageContentMode;
    id _willDisposeImageBlock;
    int _maxTitleLines;
    struct ? _preferredImageSize;
    struct CGRect _currentImageRect;
}

@property (nonatomic) int imageContentMode;
@property (nonatomic) int defaultImageContentMode;
@property (nonatomic) char imageAlignsToBottom;
@property (nonatomic) struct ? preferredImageSize;
@property (nonatomic) struct CGRect currentImageRect;
@property (copy, nonatomic) id willDisposeImageBlock;
@property (nonatomic) char displaysTitleOnlyOnFocus;
@property (nonatomic) int maxTitleLines;
@property (nonatomic) char titleUnderImageBaseline;

+ (NSObject *)imageControlWithImageProxy:(<BRImageProxy> *)arg0;
+ (UIImage *)imageControlWithImage:(ATVImage *)arg0;

- (void)layoutSubcontrols;
- (struct ?)preferredImageSize;
- (void)setPreferredImageSize:(struct ?)arg0;
- (struct CGSize)_preferredImageSize;
- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (void)setDefaultImage:(ATVImage *)arg0;
- (void)windowMaxBoundsChanged;
- (void)controlWasFocused;
- (void)controlWasUnfocused;
- (struct CGRect)focusCursorFrame;
- (void)_imageUpdated:(id)arg0;
- (void)_imageUnavailable:(id)arg0;
- (void)setCropAndFill:(char)arg0;
- (NSArray *)accessibilityTraitsList;
- (void)setLoadImageOnActivation:(char)arg0;
- (BRAsyncImageControl *)initWithImageProxy:(<BRImageProxy> *)arg0;
- (void)setUseLoadingSpinner:(char)arg0;
- (void)setUseLoadFailureImage:(char)arg0;
- (void)setBadgeControl:(BRControl<ATVButtonImageControl> *)arg0 badgePosition:(int)arg1 badgeInset:(struct ?)arg2;
- (void)setDefaultImageContentMode:(int)arg0;
- (void)setDisplaysTitleOnlyOnFocus:(char)arg0;
- (void)setTitleUnderImageBaseline:(char)arg0;
- (void)setMaxTitleLines:(int)arg0;
- (void)setTitle:(NSString *)arg0 insetWidth:(struct ?)arg1 offsetHeight:(int)arg2;
- (void)setImageContentMode:(int)arg0;
- (void)setAltImageProxy:(<BRImageProxy> *)arg0 altSize:(int)arg1;
- (void)setUseFadeInAnimation:(char)arg0;
- (void)_performActivation;
- (void)setWillDisposeImageBlock:(id /* block */)arg0;
- (void)addActivationDelay:(double)arg0;
- (void)_disposeImage:(UIImage *)arg0;
- (void)_fetchPreferredSizeImage;
- (void)_performDeactivation;
- (void)_updateTitleVisibilityByAnimating:(char)arg0;
- (NSObject *)_badgeKeyForBadgePosition:(int)arg0;
- (struct CGRect)currentImageRect;
- (void)_updateImageRect;
- (void)_fetchCachedThumbnailImage;
- (NSArray *)_badgeKeys;
- (int)maxTitleLines;
- (char)isTitleUnderImageBaseline;
- (int)defaultImageContentMode;
- (char)imageAlignsToBottom;
- (void)setCurrentImageRect:(struct CGRect)arg0;
- (void)setImageAlignsToBottom:(char)arg0;
- (void)cancelImageLoading;
- (void)setUnfocusedBadgeOpacity:(float)arg0;
- (float)unfocusedBadgeOpacity;
- (void)setFocusedBadgeOpacity:(float)arg0;
- (float)focusedBadgeOpacity;
- (int)imageContentMode;
- (id /* block */)willDisposeImageBlock;
- (char)displaysTitleOnlyOnFocus;
- (id)_getImageFromImageManagerNamed:(id)arg0 withSize:(struct CGSize)arg1;
- (NSObject *)_imageOfSize:(int)arg0;
- (void)_checkImageSize:(NSObject *)arg0;
- (void)_startImageProcessingTaskForImage:(UIImage *)arg0;
- (void)_cropImage:(UIImage *)arg0;
- (void)_scaleImage:(UIImage *)arg0;
- (void)_imageTaskComplete:(id)arg0;
- (void)_setImageID:(UIImage *)arg0;
- (void)_enableFadeInAnimation;
- (void)_handleActivationDelayTimer:(NSObject *)arg0;
- (void)_enableSpinner;
- (void)_updateContents;
- (void)dealloc;
- (void)setImage:(ATVImage *)arg0;
- (BRAsyncImageControl *)init;
- (BRAsyncImageControl *)initWithImage:(ATVImage *)arg0;
- (ATVImage *)image;
- (NSString *)accessibilityLabel;
- (char)isAccessibilityElement;
- (<BRImageProxy> *)imageProxy;
- (void)setImageProxy:(<BRImageProxy> *)arg0;
- (void)loadImage;
- (void)_setImage:(UIImage *)arg0;
- (NSString *)accessibilitySecondaryLabel;

@end
