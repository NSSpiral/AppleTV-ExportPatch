/* Runtime dump - FMFNoLocationView
 * Image: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
 */

@interface FMFNoLocationView : UIView
{
    char _blockLabelUpdates;
    <FMFNoLocationViewDelegate> * _delegate;
    NSLayoutConstraint * _topInsetConstraint;
    NSLayoutConstraint * _bottomInsetConstraint;
    UIImage * _offlineProfileImage;
    UIImageView * _offlineProfileImageView;
    UIImageView * _personImageView;
    UILabel * _detailsLabel;
    UIView * _blur;
    UIView * _insetView;
}

@property (weak, nonatomic) <FMFNoLocationViewDelegate> * delegate;
@property (nonatomic) char blockLabelUpdates;
@property (retain, nonatomic) NSLayoutConstraint * topInsetConstraint;
@property (retain, nonatomic) NSLayoutConstraint * bottomInsetConstraint;
@property (retain, nonatomic) UIImage * offlineProfileImage;
@property (retain, nonatomic) UIImageView * offlineProfileImageView;
@property (retain, nonatomic) UIImageView * personImageView;
@property (retain, nonatomic) UILabel * detailsLabel;
@property (retain, nonatomic) UIView * blur;
@property (retain, nonatomic) UIView * insetView;

- (UIImageView *)personImageView;
- (FMFNoLocationView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setDelegate:(<FMFNoLocationViewDelegate> *)arg0;
- (void)setAlpha:(float)arg0;
- (<FMFNoLocationViewDelegate> *)delegate;
- (void).cxx_destruct;
- (UIView *)blur;
- (void)setBlur:(UIView *)arg0;
- (UIImage *)offlineProfileImage;
- (void)setOfflineProfileImageView:(UIImageView *)arg0;
- (void)setPersonImageView:(UIImageView *)arg0;
- (void)setDetailsLabel:(UILabel *)arg0;
- (void)setInsetView:(UIView *)arg0;
- (void)addLayoutConstraints;
- (void)updateLabel;
- (void)updatePersonImageViewImage;
- (void)updateLabelNotification:(NSNotification *)arg0;
- (void)setTopInsetConstraint:(NSLayoutConstraint *)arg0;
- (void)setBottomInsetConstraint:(NSLayoutConstraint *)arg0;
- (void)updateConstriantsForInsets;
- (char)blockLabelUpdates;
- (UILabel *)detailsLabel;
- (void)setOfflineProfileImage:(UIImage *)arg0;
- (void)setBlockLabelUpdates:(char)arg0;
- (NSLayoutConstraint *)topInsetConstraint;
- (NSLayoutConstraint *)bottomInsetConstraint;
- (UIImageView *)offlineProfileImageView;
- (UIView *)insetView;

@end
