/* Runtime dump - SSPurchasableAppItem
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSPurchasableAppItem : SSPurchasableItem

+ (ML3DatabaseTable *)databaseTable;
+ (NSArray *)allPropertyKeys;
+ (SSPurchasableAppItem *)itemsFromDatabase:(id)arg0 forAccount:(long long)arg1 matching:(int)arg2 sortedBy:(id)arg3 sortAscending:(char)arg4;
+ (SSPurchasableAppItem *)allItemsFromDatabase:(id)arg0 forAccount:(long long)arg1 sortedBy:(id)arg2 sortAscending:(char)arg3;
+ (NSString *)sortByNameKey;

- (NSString *)description;
- (NSString *)category;
- (NSString *)bundleID;
- (NSString *)accountIdentifier;
- (NSURL *)iconURL;
- (NSString *)companyName;
- (int)contentRatingFlags;
- (NSString *)iconTitle;
- (char)isFamilyShareable;
- (char)isNewsstand;
- (NSString *)longTitle;
- (unsigned int)minimumOS;
- (char)supportsIPad;
- (char)supportsIPhone;
- (id)redownloadParams;
- (NSString *)humanReadableVersion;
- (long long)iTunesVersion;

@end
