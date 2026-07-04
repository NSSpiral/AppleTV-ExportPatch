/* Runtime dump - SFAirDropActiveIconView
 * Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFAirDropActiveIconView : UIImageView
{
    UIView * _circleMaskView;
    char _masked;
}

@property (nonatomic) char masked;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (SFAirDropActiveIconView *)initWithFrame:(struct CGRect)arg0 grayscale:(struct CGSize)arg1;
- (void)setMasked:(char)arg0;
- (char)isMasked;

@end
