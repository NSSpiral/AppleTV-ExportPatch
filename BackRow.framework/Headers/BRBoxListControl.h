/* Runtime dump - BRBoxListControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRBackdropGradientControl, BRListControl;
@interface BRBoxListControl : BRControl
{
    BRListControl * _list;
    BRBackdropGradientControl * _gradient;
}

- (void)layoutSubcontrols;
- (void)setProviders:(NSArray *)arg0;
- (NSArray *)providers;
- (float)listHeightToMaximum:(float)arg0;
- (BRBoxListControl *)init;
- (void)setSelectedIndex:(long)arg0;
- (void).cxx_destruct;
- (void)setProvider:(NSObject *)arg0;

@end
