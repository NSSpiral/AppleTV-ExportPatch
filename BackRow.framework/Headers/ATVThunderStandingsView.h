/* Runtime dump - ATVThunderStandingsView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl, BRHeaderControl, BRHorizontalDividerControl, BRImageControl, BRReflectionControl, BRTableView;
@interface ATVThunderStandingsView : BRControl
{
    BRHorizontalDividerControl * _leftDivider;
    BRImageControl * _leftBackgroundImageControl;
    BRReflectionControl * _leftReflectionControl;
    BRHorizontalDividerControl * _rightDivider;
    BRImageControl * _rightBackgroundImageControl;
    BRReflectionControl * _rightReflectionControl;
    BRControl * _dimControl;
    BRHeaderControl * _headerControl;
    BRTableView * _leftTable;
    BRTableView * _rightTable;
}

@property (readonly, nonatomic) BRTableView * leftTable;
@property (retain, nonatomic) ATVImage * leftBackgroundImage;
@property (readonly, nonatomic) BRTableView * rightTable;
@property (retain, nonatomic) ATVImage * rightBackgroundImage;
@property (copy, nonatomic) NSString * title;
@property (readonly, nonatomic) float tableWidth;
@property (retain, nonatomic) ATVImage * headerImage;

- (void)layoutSubcontrols;
- (void)setHeaderImage:(ATVImage *)arg0;
- (void)setLeftBackgroundImage:(ATVImage *)arg0;
- (BRTableView *)leftTable;
- (void)setRightBackgroundImage:(ATVImage *)arg0;
- (BRTableView *)rightTable;
- (id)accessibilityNonFocusableElements;
- (float)tableWidth;
- (ATVImage *)leftBackgroundImage;
- (ATVImage *)rightBackgroundImage;
- (void)dealloc;
- (ATVThunderStandingsView *)init;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (NSString *)accessibilityLabel;
- (ATVImage *)headerImage;

@end
