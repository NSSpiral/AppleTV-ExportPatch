/* Runtime dump - SBUIAppleLogoView
 * Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIAppleLogoView : UIView
{
    UIView * _layerView;
    PUIProgressWindow * _progressWindow;
}

- (SBUIAppleLogoView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (SBUIAppleLogoView *)initWithFrame:(struct CGRect)arg0 appearance:(struct CGSize)arg1;
- (SBUIAppleLogoView *)initWithFrame:(struct CGRect)arg0 inverted:(struct CGSize)arg1;
- (SBUIAppleLogoView *)initWithFrame:(struct CGRect)arg0 useWhiteLogo:(struct CGSize)arg1;

@end
