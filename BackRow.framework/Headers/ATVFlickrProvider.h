/* Runtime dump - ATVFlickrProvider
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRProvider;

@class BRAccount, BRUserPasswordAccount;
@interface ATVFlickrProvider : NSObject <BRProvider>
{
    NSMutableArray * _persistentAccounts;
    <BRControlFactory> * _controlFactory;
    NSDate * _lastUpdateDate;
    char _updatePending;
    NSString * _uniqueID;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (ATVFlickrProvider *)providerOfPersistentAccounts;

- (long)dataCount;
- (<BRControlFactory> *)controlFactory;
- (NSString *)hashForDataAtIndex:(long)arg0;
- (char)accountIsPersistent:(id)arg0;
- (ATVFlickrProvider *)_initForPersistentAccounts;
- (NSMutableArray *)_persistentAccounts;
- (char)_contactsLoadedForAccount:(NSObject *)arg0 updateData:(NSData *)arg1;
- (char)_accountIconLoadedForAccount:(NSObject *)arg0 updateData:(NSData *)arg1;
- (char)_mediaLoadedForAccount:(NSObject *)arg0 updateData:(NSData *)arg1;
- (void)_processChangeToObject:(NSObject *)arg0;
- (char)_assetsLoadedForCollection:(id)arg0 updateData:(NSData *)arg1;
- (char)_imageLoadedForAsset:(NSSet *)arg0 updateData:(NSData *)arg1;
- (void)handleDataUpdate:(NSDate *)arg0 updateData:(NSData *)arg1;
- (id)_loadAccountsFromPersistentAccounts;
- (void)_newAccountToAdd:(BRAccount *)arg0;
- (void)_accountToRemove:(BRUserPasswordAccount *)arg0;
- (NSString *)_accountWithName:(NSString *)arg0;
- (char)_handlesObject:(NSObject *)arg0;
- (void)_sendUpdateNotification;
- (void)_sendUpdateNotificationAfterDelay;
- (void)_postUpdateNotification:(NSNotification *)arg0;
- (NSString *)_cachedAccountIconForIconPath:(NSString *)arg0;
- (NSString *)_collectionWithIdentifier:(NSString *)arg0 withParentAccount:(NSObject *)arg1;
- (NSString *)_assetWithIdentifier:(NSString *)arg0 parentCollection:(SAMPCollection *)arg1;
- (void)_listenerUpdate:(NSDate *)arg0;
- (NSData *)_data;
- (void)dealloc;
- (ATVFlickrProvider *)init;
- (NSString *)accessibilityLabel;
- (NSObject *)dataAtIndex:(long)arg0;
- (NSString *)uniqueID;

@end
