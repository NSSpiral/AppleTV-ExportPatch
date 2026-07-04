/* Runtime dump - ATVAddSiteService
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVAddSiteService : NSObject

+ (NSString *)_extraCategoriesPath;
+ (ATVAddSiteService *)_convertEntriesToDicts:(id)arg0;
+ (ATVAddSiteService *)extraInternetSites;
+ (void)_writeEntriesToDisk:(id)arg0;
+ (void)loadVendorBagForSite:(id)arg0 completionQueue:(NSObject<OS_dispatch_queue> *)arg1 completionHandler:(id /* block */)arg2;
+ (void)addExtraInternetSite:(id)arg0;
+ (void)updateExtraInternetSite:(id)arg0 withNewSite:(id)arg1;
+ (void)removeExtraInternetSite:(id)arg0;

@end
