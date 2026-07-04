/* Runtime dump - FMFRefreshBarButtonItem
 * Image: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
 */

@interface FMFRefreshBarButtonItem : UIBarButtonItem
{
    NSSet * _locations;
    FMFRefreshWrapperButton * _wrapperButton;
    FMFTintedActivityIndicatorView * _aiv;
    UIImageView * _imageView;
    id _locateNotification;
}

@property (retain, nonatomic) NSSet * locations;
@property (retain, nonatomic) FMFRefreshWrapperButton * wrapperButton;
@property (retain, nonatomic) FMFTintedActivityIndicatorView * aiv;
@property (retain, nonatomic) UIImageView * imageView;
@property (retain, nonatomic) id locateNotification;

- (void)dealloc;
- (void)setLocations:(NSSet *)arg0;
- (FMFRefreshBarButtonItem *)initWithTarget:(NSObject *)arg0 action:(SEL)arg1;
- (NSString *)accessibilityLabel;
- (UIImageView *)imageView;
- (char)isAnimating;
- (void)stopAnimating;
- (void)startAnimating;
- (void)setImageInsets:(struct UIEdgeInsets)arg0;
- (NSString *)accessibilityHint;
- (void).cxx_destruct;
- (void)setImageView:(UIImageView *)arg0;
- (void)locatingInProgressChanged:(NSNotification *)arg0;
- (void)removeLocationForHandle:(id)arg0;
- (void)setAiv:(FMFTintedActivityIndicatorView *)arg0;
- (void)setWrapperButton:(FMFRefreshWrapperButton *)arg0;
- (FMFRefreshWrapperButton *)wrapperButton;
- (void)localTapped;
- (FMFTintedActivityIndicatorView *)aiv;
- (void)_updateLocateInProgress;
- (char)anyLocationIsUpdating;
- (void)updateLocations;
- (NSNotification *)locateNotification;
- (void)setLocateNotification:(NSNotification *)arg0;
- (NSSet *)locations;
- (void)addLocation:(NSObject *)arg0;

@end
