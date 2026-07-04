/* Runtime dump - QLProgressView
 * Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLProgressView : UIView
{
    int _backgroundColorType;
    UIActivityIndicatorView * _progressIndicator;
    UILabel * _loadingTextLabel;
}

@property (copy) NSString * loadingText;
@property int backgroundColorType;

- (void)setBackgroundColorType:(int)arg0;
- (int)backgroundColorType;
- (void)setLoadingText:(NSString *)arg0;
- (NSString *)loadingText;
- (void)dealloc;
- (QLProgressView *)init;
- (void)layoutSubviews;
- (void)_update;

@end
