/* Runtime dump - BRApplianceManager
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>
@interface BRApplianceManager : BRSingleton
{
    NSArray * _arrangedAppliances;
    NSArray * _merchantEnabledAppliances;
    char _loadingAppliances;
    unsigned int _invalidation;
    NSMutableDictionary * _applianceIdentifierToApplianceDictionary;
}

@property (readonly) NSArray * appliances;
@property (readonly) NSArray * merchantEnabledAppliances;
@property (readonly) NSArray * arrangedAppliances;
@property (retain) NSMutableDictionary * applianceIdentifierToApplianceDictionary;

+ (BRApplianceManager *)singleton;
+ (void)showMainMenu;
+ (void)setSingleton:(NSObject *)arg0;

- (NSString *)applianceInfoForApplianceIdentifier:(NSString *)arg0;
- (NSArray *)appliances;
- (char)handlePlay:(id)arg0 userInfo:(NSDictionary *)arg1;
- (NSString *)controllerForApplianceKey:(NSString *)arg0 identifier:(NSString *)arg1 args:(struct OpaqueJSValue * *)arg2;
- (NSArray *)arrangedAppliances;
- (void)_loadAppliances;
- (NSArray *)applianceInfoList;
- (void)_handleParentalControlsChangedNotification:(NSNotification *)arg0;
- (void)_handleStoreMenusDidChangeNotification:(NSNotification *)arg0;
- (id)MerchantsBinding;
- (void)updateBoundMerchants;
- (void)_invalidateArrangedAppliances;
- (NSString *)_controllerForApplianceKey:(NSString *)arg0 identifier:(NSString *)arg1 args:(struct OpaqueJSValue * *)arg2;
- (char)_handlePlay:(id)arg0 userInfo:(NSDictionary *)arg1;
- (NSArray *)merchantEnabledAppliances;
- (void)loadAppliances;
- (NSDictionary *)applianceForInfo:(NSDictionary *)arg0;
- (void)bindMerchantsBindingToObject:(NSObject *)arg0 withKeyPath:(NSString *)arg1 options:(NSDictionary *)arg2;
- (NSMutableDictionary *)applianceIdentifierToApplianceDictionary;
- (void)setApplianceIdentifierToApplianceDictionary:(NSMutableDictionary *)arg0;
- (NSDictionary *)_applianceForInfo:(NSDictionary *)arg0;
- (NSDictionary *)_loadApplianceWithInfo:(NSDictionary *)arg0;
- (char)_shouldLoadApp:(id)arg0;
- (char)_appPassesRestrictionsCheck:(id)arg0;
- (void)dealloc;
- (BRApplianceManager *)init;

@end
