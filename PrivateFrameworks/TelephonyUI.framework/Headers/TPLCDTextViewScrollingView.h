/* Runtime dump - TPLCDTextViewScrollingView
 * Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPLCDTextViewScrollingView : UIView
{
    TPLCDTextView * _owner;
}

- (void)drawRect:(struct CGRect)arg0;
- (TPLCDTextViewScrollingView *)initWithFrame:(struct CGRect)arg0 owner:(struct CGSize)arg1;
- (void)setOwner:(TPLCDTextView *)arg0;

@end
