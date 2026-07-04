/* Runtime dump - BRBaseAppliance
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRAppliance;

@class BRApplianceInfo, BRController;
@interface BRBaseAppliance : NSObject <BRAppliance>
{
    NSArray * _categories;
    long _categoriesLazyInitializationGuard;
    BRApplianceInfo * _applianceInfo;
}

@property (readonly, nonatomic) char supportsPurchase;
@property (readonly, nonatomic) char supportsRental;
@property (retain) BRApplianceInfo * applianceInfo;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (BRApplianceInfo *)applianceInfo;
- (NSArray *)applianceCategories;
- (BRController *)controllerForIdentifier:(NSString *)arg0 args:(NSArray *)arg1;
- (NSArray *)_applianceCategories;
- (BRBaseAppliance *)initWithApplianceInfo:(BRApplianceInfo *)arg0;
- (void)invalidateCategories;
- (NSString *)identifierForContentAlias:(id)arg0;
- (id /* <BRTopShelfController> */)topShelfController;
- (BRController *)applianceController;
- (char)handlePlay:(id)arg0 userInfo:(NSDictionary *)arg1;
- (NSString *)categoryWithIdentifier:(NSString *)arg0;
- (NSString *)musicStoreItemWithIdentifier:(NSString *)arg0;
- (NSObject *)baseMediaType;
- (id)applianceCategoryDescriptions;
- (NSArray *)loadCategories;
- (void)reloadCategories;
- (char)supportsPurchase;
- (char)supportsRental;
- (int)noContentBRError;
- (int)noRemoteContentBRError;
- (NSString *)previewErrorText;
- (NSString *)previewErrorSubtext;
- (void)setApplianceInfo:(BRApplianceInfo *)arg0;
- (BRController *)alertControllerForNoContent;
- (BRController *)alertControllerForNoRemoteContent;
- (char)previewError;
- (UIImage *)previewErrorIconImage;
- (char)_isCategory:(NSString *)arg0 memberOfMusicStoreCollection:(id)arg1;
- (char)_anyStoreCategoryExistsInMusicStoreCollection:(id)arg0;
- (void)dealloc;
- (BRBaseAppliance *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)accessibilityLabel;

@end
