/* Runtime dump - ATVPrivacyWelcomeHeader
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRHeaderControl.h>

@class BRControl;
@interface ATVPrivacyWelcomeHeader : BRHeaderControl
{
    BRControl * _bottomControl;
    struct ? _bottomControlSpacing;
}

@property (retain, nonatomic) BRControl * bottomControl;
@property (nonatomic) struct ? bottomControlSpacing;

- (void)layoutSubcontrols;
- (void)_repositionExistingControls;
- (void)setBottomControl:(BRControl *)arg0;
- (void)setBottomControlSpacing:(struct ?)arg0;
- (BRControl *)bottomControl;
- (struct ?)bottomControlSpacing;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (void).cxx_destruct;

@end
