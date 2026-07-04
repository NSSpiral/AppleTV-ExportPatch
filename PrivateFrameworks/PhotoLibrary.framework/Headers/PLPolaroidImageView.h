/* Runtime dump - PLPolaroidImageView
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLPolaroidImageView : PLImageView
{
    UIView * _posterView;
    UILabel * _nameLabel;
    float _thinBorderWidth;
    char _polaroidBorderVisible;
    struct CGRect _roi;
}

@property (retain, nonatomic) UIImage * posterImage;

+ (Class)layerClass;

- (void)setPosterImage:(UIImage *)arg0;
- (PLPolaroidImageView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setName:(NSString *)arg0;
- (void)setTransitionProgress:(float)arg0;
- (void)setBorderAndAccessoriesVisible:(char)arg0;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0 allowRounding:(char)arg1;
- (void)setPosterImage:(UIImage *)arg0 regionOfInterest:(struct CGRect)arg1;
- (void)renderSnapshotInContext:(struct CGContext *)arg0;
- (float)_tunedProgress;
- (void)_updatePolaroidFramePath:(char)arg0;
- (void)_adjustLabel;
- (UIImage *)posterImage;

@end
