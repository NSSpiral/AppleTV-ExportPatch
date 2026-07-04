/* Runtime dump - ATVStandingsBoxView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRReflectionControl, BRTableView, BRTextControl;
@interface ATVStandingsBoxView : BRControl
{
    ATVImage * _backgroundImage;
    BRTextControl * _titleControl;
    ATVImage * _overlayImage;
    BRReflectionControl * _reflectionControl;
    BRTableView * _tableView;
    float _headerHeight;
}

@property (retain, nonatomic) ATVImage * backgroundImage;
@property (copy, nonatomic) NSString * title;
@property (readonly, nonatomic) BRTableView * tableView;
@property (nonatomic) float headerHeight;

- (void)layoutSubcontrols;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (ATVStandingsBoxView *)init;
- (void)setTitle:(NSString *)arg0;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (NSString *)title;
- (NSString *)accessibilityLabel;
- (ATVImage *)backgroundImage;
- (void)setBackgroundImage:(ATVImage *)arg0;
- (BRTableView *)tableView;
- (char)isAccessibilityElement;
- (float)headerHeight;
- (void)setHeaderHeight:(float)arg0;

@end
