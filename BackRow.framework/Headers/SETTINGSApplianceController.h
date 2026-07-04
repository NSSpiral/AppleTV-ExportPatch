/* Runtime dump - SETTINGSApplianceController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BRListControl, BRMenuItem;
@interface SETTINGSApplianceController : BRViewController
{
    <BRAppliance> * _appliance;
}

@property (retain, nonatomic) <BRAppliance> * appliance;

- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)setAppliance:(<BRAppliance> *)arg0;
- (<BRAppliance> *)appliance;
- (SETTINGSApplianceController *)initWithAppliance:(<BRAppliance> *)arg0;
- (void)_applianceCategoriesChanged:(NSNotification *)arg0;
- (void)_cupidAccountActivity:(id)arg0;
- (void)dealloc;
- (void).cxx_destruct;

@end
