/* Runtime dump - ATVImageHeaderViewButtonsPanel
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>
@interface ATVImageHeaderViewButtonsPanel : BRControl
{
    NSArray * _buttons;
    struct ? _buttonSpacing;
    struct ? _buttonSyncWidth;
}

@property (readonly, copy, nonatomic) NSArray * buttons;
@property (readonly, nonatomic) struct ? buttonSpacing;
@property (nonatomic) struct ? buttonSyncWidth;

- (void)layoutSubcontrols;
- (struct CGRect)focusCursorFrame;
- (struct ?)buttonSyncWidth;
- (struct ?)buttonSpacing;
- (void)setButtonSyncWidth:(struct ?)arg0;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (void).cxx_destruct;
- (NSArray *)buttons;
- (ATVImageHeaderViewButtonsPanel *)initWithButtons:(NSArray *)arg0;

@end
