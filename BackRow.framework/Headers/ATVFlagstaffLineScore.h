/* Runtime dump - ATVFlagstaffLineScore
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRTableView.h>

@class BRImageControl;
@interface ATVFlagstaffLineScore : BRTableView
{
    BRImageControl * _leftFadeImageControl;
    BRImageControl * _rightFadeImageControl;
    char _leftFadeOn;
    char _rightFadeOn;
}

@property (nonatomic) char leftFadeOn;
@property (nonatomic) char rightFadeOn;

- (void)layoutSubcontrols;
- (void)setLeftFadeOn:(char)arg0;
- (void)setRightFadeOn:(char)arg0;
- (char)leftFadeOn;
- (char)rightFadeOn;
- (void)dealloc;
- (ATVFlagstaffLineScore *)init;

@end
