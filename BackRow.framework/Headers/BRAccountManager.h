/* Runtime dump - BRAccountManager
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>

@protocol ATVSettingsSaver;
@interface BRAccountManager : BRSingleton <ATVSettingsSaver>
{
    NSString * _accountPath;
    NSString * _dataPath;
    NSMutableArray * _accounts;
    NSMutableDictionary * _accountTypes;
    long _accountTypesLazyInitializationGuard;
    NSMutableDictionary * _preferredAccounts;
    NSMutableArray * _pendingAccounts;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (BRAccountManager *)singleton;
+ (void)setSingleton:(NSObject *)arg0;
+ (void)initialize;

- (void)registerClass:(Class)arg0 forType:(NSObject *)arg1;
- (void)setupAccounts;
- (void)addPathsToSaveTo:(NSMutableSet *)arg0;
- (NSObject *)preferredAccountForType:(NSObject *)arg0;
- (NSString *)accountWithName:(NSString *)arg0 ofType:(NSString *)arg1 create:(char)arg2;
- (void)manageAccount:(NSObject *)arg0;
- (NSObject *)accountsOfType:(NSObject *)arg0;
- (void)_savePrefs;
- (NSString *)accountWithName:(NSString *)arg0 ofType:(NSString *)arg1;
- (void)evaluatePendingAccounts;
- (void)markAsPreferredAccount:(NSObject *)arg0 silently:(char)arg1;
- (char)isAccountManaged:(id)arg0;
- (void)_saveAccount:(NSObject *)arg0;
- (void)_accountDirty:(id)arg0;
- (void)_deleteAccount:(NSObject *)arg0;
- (void)clearPreferredAccountForType:(NSObject *)arg0;
- (void)markAsPreferredAccount:(NSObject *)arg0;
- (NSString *)_loadAccountFromFilePath:(NSString *)arg0;
- (void)_saveAccount:(NSObject *)arg0 flushDiskImmediately:(char)arg1;
- (void)dealloc;
- (BRAccountManager *)init;
- (void).cxx_destruct;
- (void)_save;
- (void)_load;
- (void)removeAccount:(NSObject *)arg0;
- (id)allAccounts;

@end
