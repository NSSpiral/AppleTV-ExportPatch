/* Runtime dump - AccountUtilities
 * Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface AccountUtilities : NSObject
{
    NSArray * _accountIDsEnabledForNotes;
    NoteContext * _noteContext;
    ACAccountStore * _accountStore;
    NSObject<OS_dispatch_group> * _backgroundDispatchGroup;
    NSLock * _updateAccountInfosLock;
}

@property (retain, nonatomic) ACAccountStore * accountStore;
@property (retain, nonatomic) NSObject<OS_dispatch_group> * backgroundDispatchGroup;
@property (retain) NSLock * updateAccountInfosLock;

+ (AccountUtilities *)sharedAccountUtilities;

- (void)dealloc;
- (AccountUtilities *)init;
- (void).cxx_destruct;
- (ACAccountStore *)accountStore;
- (void)setAccountStore:(ACAccountStore *)arg0;
- (NSString *)localAccountDisplayName;
- (NSObject *)defaultStoreSyncIdWithDesiredSyncId:(NSObject *)arg0;
- (NSString *)freshContext;
- (void)updateAccountInfos;
- (char)localNotesExist;
- (NSObject<OS_dispatch_group> *)backgroundDispatchGroup;
- (NSLock *)updateAccountInfosLock;
- (void)startKeepingAccountInfosUpToDate;
- (id)accountsEnabledForNotes;
- (NSArray *)accountIDsEnabledForNotes;
- (void)setBackgroundDispatchGroup:(NSObject<OS_dispatch_group> *)arg0;
- (void)setUpdateAccountInfosLock:(NSLock *)arg0;
- (void)_accountStoreDidChange:(NSDictionary *)arg0;

@end
