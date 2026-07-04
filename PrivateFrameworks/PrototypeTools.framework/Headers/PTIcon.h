/* Runtime dump - PTIcon
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTIcon : UIView
{
    UIImage * _image;
    NSString * _title;
    _UILegibilityLabel * _label;
    _UILegibilityView * _iconLegibilityView;
    UIImageView * _imageView;
    PTIconSettings * _iconSettings;
    struct __CFRunLoopObserver * _runLoopObserver;
    struct ? _imageStatistics;
}

@property (retain, nonatomic) UIImage * image;
@property (copy, nonatomic) NSString * title;
@property (retain, nonatomic) _UILegibilityLabel * label;
@property (retain, nonatomic) _UILegibilityView * iconLegibilityView;
@property (retain, nonatomic) UIImageView * imageView;
@property (retain, nonatomic) PTIconSettings * iconSettings;
@property (nonatomic) struct ? imageStatistics;
@property (nonatomic) struct __CFRunLoopObserver * runLoopObserver;

+ (UIImage *)iconWithImage:(UIImage *)arg0 title:(NSString *)arg1;
+ (NSString *)iconWithImageName:(UIImage *)arg0 title:(NSString *)arg1;

- (void)setImage:(UIImage *)arg0;
- (PTIcon *)init;
- (void)layoutSubviews;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (UIImage *)image;
- (_UILegibilityLabel *)label;
- (UIImageView *)imageView;
- (void)setLabel:(_UILegibilityLabel *)arg0;
- (struct CGRect)labelFrame;
- (struct __CFRunLoopObserver *)runLoopObserver;
- (void)setRunLoopObserver:(struct __CFRunLoopObserver *)arg0;
- (void).cxx_destruct;
- (void)setImageView:(UIImageView *)arg0;
- (void)setImageStatistics:(struct ?)arg0;
- (struct ?)imageStatistics;
- (_UILegibilityView *)iconLegibilityView;
- (void)setIconLegibilityView:(_UILegibilityView *)arg0;
- (PTIconSettings *)iconSettings;
- (void)setIconSettings:(PTIconSettings *)arg0;

@end
