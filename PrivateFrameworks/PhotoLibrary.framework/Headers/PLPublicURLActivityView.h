/* Runtime dump - PLPublicURLActivityView
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLPublicURLActivityView : UIView
{
    UIActivityIndicatorView * _spinner;
    UILabel * _infoLabel;
}

- (void)dealloc;
- (void)layoutSubviews;
- (PLPublicURLActivityView *)initWithFrame:(struct CGRect)arg0 turningPublicURLON:(struct CGSize)arg1;

@end
