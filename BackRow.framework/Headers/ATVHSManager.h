/* Runtime dump - ATVHSManager
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVHSDataServerManagerDelegate;
@protocol ATVSettingsMigration;

@class BRAccount;
@interface ATVHSManager : NSObject <ATVHSDataServerManagerDelegate, ATVSettingsMigration>
{
    ATVHSDataServerManager * _hsDataServerManager;
}

@property (readonly, nonatomic) NSString * hsGroupID;
@property (readonly, nonatomic) BRAccount * hsAccount;
@property (retain, nonatomic) ATVHSDataServerManager * hsDataServerManager;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (ATVHSManager *)sharedInstance;

- (void)cleanUpOrEnableHomeShareState;
- (void)_playerPlaybackErrorHandler:(id /* block */)arg0;
- (BRAccount *)hsAccount;
- (NSString *)hsGroupID;
- (void)enableHomeSharingWithAccountName:(NSString *)arg0 andPassword:(NSString *)arg1 decoration:(id)arg2;
- (void)enableHomeSharingWithHSA2AccountName:(NSString *)arg0 andPassword:(NSString *)arg1;
- (void)enableBonjourBrowseWithHSGroupID:(NSObject *)arg0;
- (ATVHSDataServerManager *)hsDataServerManager;
- (void)_serverAvailableForConnection:(NSURLConnection *)arg0;
- (char)_connectAvailableDataClientsForServer:(NSObject *)arg0;
- (NSObject *)_photoAppDataClientsWithServer:(NSObject *)arg0 manager:(NSObject *)arg1;
- (NSObject *)_iTunesDataClientsWithServer:(NSObject *)arg0 manager:(NSObject *)arg1;
- (void)_dataClientConnectionHandlerWithObject:(NSObject *)arg0;
- (void)migrateFrom:(NSString *)arg0 to:(NSString *)arg1;
- (void)enableHomeSharingWithAccountName:(NSString *)arg0 andPassword:(NSString *)arg1;
- (int)sharingState;
- (char)connectToServer:(NSObject *)arg0;
- (void)setHsDataServerManager:(ATVHSDataServerManager *)arg0;
- (ATVHSManager *)init;
- (NSArray *)homeSharesOfTypes:(unsigned long)arg0;
- (ATVHSDataServer *)homeSharingDataServerManager:(ATVHSDataServerManager *)arg0 dataServerWithConfiguration:(ATVHSDataServerConfiguration *)arg1;
- (NSArray *)homeSharingDataServerManager:(ATVHSDataServerManager *)arg0 dataClientsWithServer:(ATVHSDataServer *)arg1;
- (void)disableHomeSharing;

@end
