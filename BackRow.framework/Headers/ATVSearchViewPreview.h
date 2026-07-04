/* Runtime dump - ATVSearchViewPreview
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRImageControl, BRTextControl;
@interface ATVSearchViewPreview : BRControl
{
    BRImageControl * _towerControl;
    BRTextControl * _titleControl;
    BRTextControl * _subtitleControl;
}

@property (retain, nonatomic) BRImageControl * towerControl;
@property (retain, nonatomic) BRTextControl * titleControl;
@property (retain, nonatomic) BRTextControl * subtitleControl;

- (void)layoutSubcontrols;
- (BRTextControl *)titleControl;
- (void)setTitleControl:(BRTextControl *)arg0;
- (ATVSearchViewPreview *)initWithTitle:(NSString *)arg0 subTitle:(NSString *)arg1;
- (void)setTowerControl:(BRImageControl *)arg0;
- (BRImageControl *)towerControl;
- (void)setSubtitleControl:(BRTextControl *)arg0;
- (BRTextControl *)subtitleControl;
- (void).cxx_destruct;

@end
