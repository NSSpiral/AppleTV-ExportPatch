/* Runtime dump - MEITunesUtilities
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRITunesUtilities;
@interface MEITunesUtilities : NSObject <BRITunesUtilities>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSSet *)journalObjectForAsset:(NSSet *)arg0;
+ (void)checkInJournaledEntries;
+ (void)removeJournalForRentalID:(unsigned long long)arg0;
+ (void)_writeJournal:(id)arg0;
+ (NSObject *)archivedServerIDForHomeShareDataServerID:(NSObject *)arg0;
+ (NSObject *)homeShareDataServerIDForArchivedServerID:(NSObject *)arg0;
+ (void)initialize;

- (void)importKeybagData:(NSData *)arg0 forDSID:(NSNumber *)arg1;
- (void)deleteImportedKeybagData;
- (char)attemptAuthorizationForAsset:(id /* <BRMediaAsset> */)arg0 error:(id *)arg1;
- (void)deauthorizeAssetIfNecessary:(id /* <BRMediaAsset> */)arg0;
- (NSSortDescriptor *)iTunesCompareAscending:(char)arg0 withKey:(NSString *)arg1;
- (NSString *)sortStringForString:(NSString *)arg0;
- (int)iTunesCompareString:(NSString *)arg0 toString:(NSString *)arg1;
- (NSURL *)urlSuitableForPlayback:(NSURL *)arg0;
- (unsigned long)randomPlaylistIndex:(unsigned long)arg0;
- (NSString *)keyBagPathForMachineID:(unsigned long long)arg0;
- (NSString *)rentalGUID;

@end
