/* Runtime dump - PLImageView
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLImageView : UIImageView
{
    NSString * _name;
    UIView * _borderView;
    PLVideoView * _videoView;
    PLPhotoTilePlaceholderView * _placeholderView;
    UIView * _leftAccessoryView;
    UIView * _bottomRightAccessoryView;
    struct CGSize _leftAccessoryViewOffset;
    UILabel * _textBadge;
    id _shadowEnabled;
    id _suppressShadowDrawing;
    id _borderViewIsVisible;
    id _drawsBorder;
    float _aspectRatio;
    double _lastBorderAlphaTime;
    double _lastShadowAlphaTime;
    float _transitionProgress;
    char _edgeAntialiasingEnabled;
    PLTiledLayer * _fullSizeImageTiledLayer;
    int _fullSizeImageOrientation;
    char _showsPlaceholder;
    float _accessoryViewsAlpha;
    float _placeholderScale;
}

@property (copy, nonatomic) NSString * name;
@property (nonatomic) char dimmed;
@property (nonatomic) char borderAndAccessoriesVisible;
@property (nonatomic) float borderAndAccessoriesAlpha;
@property (nonatomic) char drawsBorder;
@property (nonatomic) char shadowEnabled;
@property (nonatomic) float transitionProgress;
@property (retain, nonatomic) PLVideoView * videoView;
@property (retain, nonatomic) UIView * leftAccessoryView;
@property (nonatomic) struct CGSize leftAccessoryViewOffset;
@property (retain, nonatomic) UIView * bottomRightAccessoryView;
@property (nonatomic) float accessoryViewsAlpha;
@property (readonly, nonatomic) char showsPlaceholder;
@property (nonatomic) float placeholderScale;
@property (readonly, nonatomic) struct CGSize placeholderSize;

+ (void)initialize;
+ (struct CGSize)badgeOffset;
+ (NSString *)textBadgeForString:(NSString *)arg0 photoSize:(struct CGSize)arg1;
+ (char)shouldDrawShadows;

- (PLVideoView *)videoView;
- (void)setVideoView:(PLVideoView *)arg0;
- (PLImageView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setImage:(UIImage *)arg0;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)setEdgeAntialiasingEnabled:(char)arg0;
- (void)setTransitionProgress:(float)arg0;
- (float)transitionProgress;
- (char)isDimmed;
- (void)setDimmed:(char)arg0;
- (void)setBorderAndAccessoriesVisible:(char)arg0;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0 allowRounding:(char)arg1;
- (void)setPlaceholderScale:(float)arg0;
- (void)setBorderAndAccessoriesAlpha:(float)arg0;
- (void)setBorderAndAccessoriesAlpha:(float)arg0 forced:(char)arg1;
- (void)updateFullSizeImageVisibleArea;
- (char)isBorderAndAccessoriesVisible;
- (void)setFullSizeImageJPEGData:(NSData *)arg0 size:(struct CGSize)arg1 orientation:(int)arg2;
- (char)showsPlaceholder;
- (void)setShowsPlaceholder:(char)arg0;
- (void)setShadowEnabled:(char)arg0;
- (char)isShadowEnabled;
- (void)setTextBadgeString:(NSString *)arg0;
- (void)renderSnapshotInContext:(struct CGContext *)arg0;
- (void)setDrawsBorder:(char)arg0;
- (struct CGRect)_leftAccessoryViewFrame;
- (struct CGRect)_bottomRightAccessoryViewFrame;
- (void)_updateShadowPath;
- (struct CGAffineTransform)_transformForFullSizeImageTiledLayer;
- (void)_setShadowEnabled:(char)arg0 force:(char)arg1;
- (void)_updatePlaceholderAlpha;
- (void)_updatePlaceholderLayout;
- (struct CGSize)placeholderSize;
- (void)setLeftAccessoryView:(UIView *)arg0 animated:(char)arg1;
- (void)setBottomRightAccessoryView:(UIView *)arg0 animated:(char)arg1;
- (void)parentDidLayout;
- (float)borderAndAccessoriesAlpha;
- (char)drawsBorder;
- (void)setLeftAccessoryView:(UIView *)arg0;
- (void)setLeftAccessoryViewOffset:(struct CGSize)arg0;
- (void)setBottomRightAccessoryView:(UIView *)arg0;
- (void)setAccessoryViewsAlpha:(float)arg0;
- (UIView *)leftAccessoryView;
- (struct CGSize)leftAccessoryViewOffset;
- (UIView *)bottomRightAccessoryView;
- (float)accessoryViewsAlpha;
- (float)placeholderScale;
- (NSString *)textBadgeString;

@end
