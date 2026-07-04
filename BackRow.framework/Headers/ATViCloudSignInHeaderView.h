/* Runtime dump - ATViCloudSignInHeaderView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRImageControl, BRTextControl;
@interface ATViCloudSignInHeaderView : BRControl
{
    BRTextControl * _titleControl;
    BRTextControl * _instructionControl;
    BRImageControl * _mainImageControl;
    BRTextControl * _lowerInstructionControl;
}

- (void)layoutSubcontrols;
- (void)setMainImage:(UIImage *)arg0;
- (void)setInstructionText:(NSString *)arg0;
- (void)setLowerInstructionText:(NSString *)arg0;
- (void)setTitle:(NSString *)arg0;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (void).cxx_destruct;

@end
