/* Runtime dump - MEPowerManagementControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class ATVPowerManagementObserver, BREvent;
@interface MEPowerManagementControl : BRControl
{
    ATVPowerManagementObserver * manager;
}

@property (weak, nonatomic) ATVPowerManagementObserver * manager;

- (char)brEventAction:(BREvent *)arg0;
- (void).cxx_destruct;
- (ATVPowerManagementObserver *)manager;
- (void)setManager:(ATVPowerManagementObserver *)arg0;

@end
