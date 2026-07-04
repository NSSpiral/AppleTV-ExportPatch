/* Runtime dump - COMPUTERSApplianceController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BRListControl, BRMenuItem;
@interface COMPUTERSApplianceController : BRViewController
{
    char _computersListed;
    char _viewSelectedOnce;
    <BRAppliance> * _appliance;
}

@property (retain, nonatomic) <BRAppliance> * appliance;
@property (nonatomic) char _computersListed;
@property (nonatomic) char _viewSelectedOnce;

- (void)wasPushed;
- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (NSString *)list:(BRListControl *)arg0 itemIDForIndexPath:(NSIndexPath *)arg1;
- (NSIndexPath *)list:(BRListControl *)arg0 indexPathForItemID:(NSObject *)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)wasExhumed;
- (void)setAppliance:(<BRAppliance> *)arg0;
- (<BRAppliance> *)appliance;
- (COMPUTERSApplianceController *)initWithAppliance:(<BRAppliance> *)arg0;
- (void)_homeShareServersChanged:(NSNotification *)arg0;
- (void)_selectView;
- (char)_viewSelectedOnce;
- (char)_computersListed;
- (void)set_computersListed:(char)arg0;
- (void)set_viewSelectedOnce:(char)arg0;
- (void)dealloc;
- (void).cxx_destruct;

@end
