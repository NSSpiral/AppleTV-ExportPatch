/* Runtime dump - BRPosterOverlayControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRImageControl, BRTextControl;
@interface BRPosterOverlayControl : BRControl
{
    float _coverPercentage;
    int _overlayFlowMode;
    BRTextControl * _title;
    BRTextControl * _subtitle;
    BRImageControl * _badge;
    NSString * _badgeName;
    BRImageControl * _backgroundImage;
    NSString * _backgroundName;
    BRImageControl * _image;
    NSString * _imageName;
    UIColor * _overlayBackgroundColor;
    struct CGRect _cachedTitleFrame;
    struct CGRect _cachedSubtitleFrame;
    struct CGRect _cachedBadgeFrame;
    struct CGRect _cachedImageFrame;
    struct CGRect _cachedSafeFrame;
}

@property (nonatomic) float coverPercentage;
@property (nonatomic) int overlayFlowMode;
@property (retain, nonatomic) BRTextControl * title;
@property (retain, nonatomic) BRTextControl * subtitle;
@property (retain, nonatomic) BRImageControl * badge;
@property (retain, nonatomic) NSString * badgeName;
@property (retain, nonatomic) BRImageControl * backgroundImage;
@property (retain, nonatomic) NSString * backgroundName;
@property (retain, nonatomic) BRImageControl * image;
@property (retain, nonatomic) NSString * imageName;
@property (nonatomic) struct CGRect cachedTitleFrame;
@property (nonatomic) struct CGRect cachedSubtitleFrame;
@property (nonatomic) struct CGRect cachedBadgeFrame;
@property (nonatomic) struct CGRect cachedImageFrame;
@property (nonatomic) struct CGRect cachedSafeFrame;
@property (copy, nonatomic) UIColor * overlayBackgroundColor;

- (void)layoutSubcontrols;
- (float)coverPercentage;
- (int)overlayFlowMode;
- (NSString *)badgeName;
- (NSString *)backgroundName;
- (struct CGRect)drawingBoundsWithFrame:(NSObject *)arg0;
- (char)isHorizontalFlowMode;
- (void)_performFlowTextThenBadgeInFrame:(struct CGRect)arg0 withBounds:(struct CGSize)arg1 setFrame:(struct CGRect)arg2;
- (void)_performFlowBadgeThenTextInFrame:(struct CGRect)arg0 withBounds:(struct CGSize)arg1 setFrame:(struct CGRect)arg2;
- (void)_performFlowTopToBottomInFrame:(struct CGRect)arg0 withBounds:(struct CGSize)arg1 horizontalLayout:(NSObject *)arg2 setFrame:(struct CGRect)arg3;
- (void)_performFlowCustomInFrame:(struct CGRect)arg0 withBounds:(struct CGSize)arg1 setFrame:(struct CGRect)arg2;
- (void)clearCachedSafeFrame;
- (struct CGRect)badgeFrameWithSize:(NSObject *)arg0 setFrame:(SEL)arg1;
- (struct CGRect)cachedTitleFrame;
- (void)setCachedTitleFrame:(struct CGRect)arg0;
- (struct CGRect)cachedBadgeFrame;
- (struct CGRect)cachedSubtitleFrame;
- (void)setCachedSubtitleFrame:(struct CGRect)arg0;
- (void)setCachedBadgeFrame:(struct CGRect)arg0;
- (float)horizontalPaddingFactor;
- (void)setOverlayFlowMode:(int)arg0;
- (NSObject *)overlayID;
- (void)setTitle:(BRTextControl *)arg0 withAttributes:(NSDictionary *)arg1;
- (void)setSubtitle:(BRTextControl *)arg0 withAttributes:(NSDictionary *)arg1;
- (void)decorateImageInContext:(struct CGContext *)arg0 rect:(struct CGRect)arg1;
- (struct CGRect)titleFrameWithSize:(NSObject *)arg0 setFrame:(SEL)arg1;
- (struct CGRect)subtitleFrameWithSize:(NSObject *)arg0 setFrame:(SEL)arg1;
- (void)setCoverPercentage:(float)arg0;
- (void)setBadgeName:(NSString *)arg0;
- (void)setBackgroundName:(NSString *)arg0;
- (struct CGRect)cachedImageFrame;
- (void)setCachedImageFrame:(struct CGRect)arg0;
- (struct CGRect)cachedSafeFrame;
- (void)setCachedSafeFrame:(struct CGRect)arg0;
- (UIColor *)overlayBackgroundColor;
- (void)setOverlayBackgroundColor:(UIColor *)arg0;
- (void)setImage:(BRImageControl *)arg0;
- (void)setBackgroundColor:(UIColor *)arg0;
- (UIColor *)backgroundColor;
- (void)setTitle:(BRTextControl *)arg0;
- (BRTextControl *)title;
- (BRImageControl *)image;
- (BRImageControl *)backgroundImage;
- (BRTextControl *)subtitle;
- (void)setBackgroundImage:(BRImageControl *)arg0;
- (void)setSubtitle:(BRTextControl *)arg0;
- (void).cxx_destruct;
- (void)setImageName:(NSString *)arg0;
- (void)setBadge:(BRImageControl *)arg0;
- (BRImageControl *)badge;
- (NSString *)imageName;

@end
