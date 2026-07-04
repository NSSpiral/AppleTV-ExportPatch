/* Runtime dump - ATVApplianceController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@protocol BRMercantile;

@class ATVNavigationBarController, BRMerchant;
@interface ATVApplianceController : BRViewController <BRMercantile>
{
    ATVNavigationBarController * _navigationBarController;
    NSArray * _applianceCategories;
    <BRAppliance> * _appliance;
}

@property (retain, nonatomic) <BRAppliance> * appliance;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (retain, nonatomic) BRMerchant * merchant;

- (void)layoutSubcontrols;
- (BRMerchant *)merchant;
- (void)wasPopped;
- (void)setMerchant:(BRMerchant *)arg0;
- (char)isNetworkDependent;
- (id)CategoriesBinding;
- (void)updateBoundCategories;
- (void)setAppliance:(<BRAppliance> *)arg0;
- (void)_networkStateChanged;
- (<BRAppliance> *)appliance;
- (void)_installControllerView;
- (NSString *)_controllerWithCategory:(NSString *)arg0;
- (void)bindCategoriesBindingToObject:(NSObject *)arg0 withKeyPath:(NSString *)arg1 options:(NSDictionary *)arg2;
- (ATVApplianceController *)initWithAppliance:(<BRAppliance> *)arg0;
- (void)dealloc;

@end
