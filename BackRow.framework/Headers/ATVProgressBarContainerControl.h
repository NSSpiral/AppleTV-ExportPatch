/* Runtime dump - ATVProgressBarContainerControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class ATVProgressBarView;
@interface ATVProgressBarContainerControl : BRControl
{
    ATVProgressBarView * _progressBar;
}

@property (retain, nonatomic) ATVProgressBarView * progressBar;

- (void)layoutSubcontrols;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (void).cxx_destruct;
- (ATVProgressBarView *)progressBar;
- (void)setProgressBar:(ATVProgressBarView *)arg0;

@end
