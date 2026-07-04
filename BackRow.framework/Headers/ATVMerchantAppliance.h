/* Runtime dump - ATVMerchantAppliance
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRAppliance;

@class BRApplianceInfo, BRController;
@interface ATVMerchantAppliance : NSObject <BRAppliance>
{
    BRApplianceInfo * _applianceInfo;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, retain) BRApplianceInfo * applianceInfo;

- (BRApplianceInfo *)applianceInfo;
- (NSArray *)applianceCategories;
- (BRController *)controllerForIdentifier:(NSString *)arg0 args:(NSArray *)arg1;
- (ATVMerchantAppliance *)initWithApplianceInfo:(BRApplianceInfo *)arg0;
- (void)invalidateCategories;
- (NSString *)identifierForContentAlias:(id)arg0;
- (id /* <BRTopShelfController> */)topShelfController;
- (BRController *)applianceController;
- (char)handlePlay:(id)arg0 userInfo:(NSDictionary *)arg1;
- (void).cxx_destruct;

@end
