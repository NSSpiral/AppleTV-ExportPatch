/* Runtime dump - BRViewController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRController.h>

@class BRControl;
@interface BRViewController : BRController
{
    BRControl * _view;
}

- (void)layoutSubcontrols;
- (void)_handleWindowMaxBoundsChanged;
- (void)dealloc;
- (BRControl *)view;
- (void)setView:(BRControl *)arg0;

@end
