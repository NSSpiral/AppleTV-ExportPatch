/* Runtime dump - ATVImageHeaderView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl, BRImageControl;
@interface ATVImageHeaderView : BRControl
{
    char _shouldDisplayGradient;
    struct ? _preferredWidth;
    ATVImage * _image;
    BRImageControl * _imageView;
    BRImageControl * _imageViewMask;
    <BRImageProxy> * _imageProxy;
    <NSObject> * _imageNotificationToken;
    BRControl * _overlay;
    NSMutableArray * _mutableOverlays;
    struct CGSize _proxyPixelBounds;
    struct ? _overlayMargins;
    struct UIEdgeInsets _proxyInsets;
}

@property (nonatomic) struct ? preferredWidth;
@property (retain, nonatomic) ATVImage * image;
@property (nonatomic) char shouldDisplayGradient;
@property (readonly, copy, nonatomic) NSArray * overlays;
@property (copy, nonatomic) NSArray * buttons;
@property (retain, nonatomic) BRImageControl * imageView;
@property (retain, nonatomic) BRImageControl * imageViewMask;
@property (retain, nonatomic) <BRImageProxy> * imageProxy;
@property (retain, nonatomic) <NSObject> * imageNotificationToken;
@property (nonatomic) struct CGSize proxyPixelBounds;
@property (nonatomic) struct UIEdgeInsets proxyInsets;
@property (retain, nonatomic) BRControl * overlay;
@property (nonatomic) struct ? overlayMargins;
@property (retain, nonatomic) NSMutableArray * mutableOverlays;

- (void)layoutSubcontrols;
- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (void)_imageUpdated:(id)arg0;
- (void)setPreferredWidth:(struct ?)arg0;
- (char)shouldDisplayGradient;
- (void)setImageProxy:(<BRImageProxy> *)arg0 pixelBounds:(struct CGSize)arg1 alignmentRectInsets:(struct UIEdgeInsets)arg2;
- (void)setShouldDisplayGradient:(char)arg0;
- (void)setOverlayMargins:(struct ?)arg0;
- (<NSObject> *)imageNotificationToken;
- (void)setImageNotificationToken:(<NSObject> *)arg0;
- (void)_loadImage;
- (void)_cancelImageLoad;
- (void)setProxyPixelBounds:(struct CGSize)arg0;
- (void)setProxyInsets:(struct UIEdgeInsets)arg0;
- (void)setImageViewMask:(BRImageControl *)arg0;
- (BRImageControl *)imageViewMask;
- (NSMutableArray *)mutableOverlays;
- (struct CGSize)proxyPixelBounds;
- (struct UIEdgeInsets)proxyInsets;
- (struct ?)overlayMargins;
- (void)_setImageLoadedFromProxy:(NSObject *)arg0;
- (void)removeOverlays;
- (void)setMutableOverlays:(NSMutableArray *)arg0;
- (struct ?)preferredWidth;
- (void)setImage:(ATVImage *)arg0;
- (ATVImageHeaderView *)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (ATVImage *)image;
- (NSString *)accessibilityLabel;
- (BRImageControl *)imageView;
- (void).cxx_destruct;
- (NSArray *)buttons;
- (void)setImageView:(BRImageControl *)arg0;
- (<BRImageProxy> *)imageProxy;
- (void)setImageProxy:(<BRImageProxy> *)arg0;
- (void)setButtons:(NSArray *)arg0;
- (void)_setImage:(UIImage *)arg0;
- (NSArray *)overlays;
- (void)removeOverlay:(NSObject *)arg0;
- (void)addOverlay:(NSObject *)arg0;
- (BRControl *)overlay;
- (void)setOverlay:(BRControl *)arg0;

@end
