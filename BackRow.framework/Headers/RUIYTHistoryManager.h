/* Runtime dump - RUIYTHistoryManager
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface RUIYTHistoryManager : NSObject
{
    NSMutableDictionary * _accountHistory;
}

+ (int)historySize;
+ (RUIYTHistoryManager *)historyCacheDirectory;

- (NSString *)_currentAccountName;
- (void)_assetWasPlayedNotification:(NSNotification *)arg0;
- (void)_accountWasRemoved:(id)arg0;
- (void)_archiveHistoryToDisk;
- (NSNumber *)_assetArchivesForCurrentAccount;
- (void)_removeHistoryFromDiskForAccount:(NSObject *)arg0;
- (NSNumber *)historyForCurrentAccount;
- (void)clearAssetHistoryForCurrentAccount;
- (void)removeAssetsFromHistoryForCurrentAccoutWithIDs:(int)arg0;
- (NSNumber *)_assetArchivesOfAccount:(NSObject *)arg0;
- (NSNumber *)_loadHistoryOfAccount:(NSObject *)arg0;
- (NSNumber *)_pathForHistoryOfAccount:(NSObject *)arg0;
- (void)dealloc;
- (RUIYTHistoryManager *)init;
- (void).cxx_destruct;

@end
