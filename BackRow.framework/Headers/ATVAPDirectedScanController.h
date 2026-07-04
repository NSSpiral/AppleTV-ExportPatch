/* Runtime dump - ATVAPDirectedScanController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRController.h>

@class BRHeaderControl, BRTextControl, BRWaitSpinnerControl;
@interface ATVAPDirectedScanController : BRController
{
    BRWaitSpinnerControl * _spinner;
    NSString * _networkName;
    BRHeaderControl * _header;
    BRTextControl * _prompt;
}

- (ATVAPDirectedScanController *)initWithNetworkName:(NSString *)arg0;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg0;

@end
