/* Runtime dump - ATVApplianceGlue
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRController, WLKSettingsStore;
@interface ATVApplianceGlue : NSObject

+ (void)_musicStoreNotification:(NSNotification *)arg0;
+ (void)installController:(BRController *)arg0;
+ (void)installWaitPrompt;
+ (NSString *)controllerForApplianceKey:(NSString *)arg0 identifier:(NSString *)arg1;
+ (void)bringUpStoreAndInvokeBlock:(id /* block */)arg0;
+ (void)installControllerForMerchantIdentifier:(NSString *)arg0;
+ (void)settings:(WLKSettingsStore *)arg0;
+ (void)music:(id)arg0;
+ (void)computers:(id)arg0;
+ (void)internet:(id)arg0;

@end
