/* Runtime dump - CHSharedAddressBook
 * Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface CHSharedAddressBook : CHSynchronizedLoggable
{
    void * _addressBook;
    NSMutableDictionary * _addressBookCache;
}

@property void * addressBook;
@property (retain) NSMutableDictionary * addressBookCache;

+ (NSObject *)get;

- (void)setAddressBook:(void *)arg0;
- (void)dealloc;
- (CHSharedAddressBook *)init;
- (NSString *)description;
- (void).cxx_destruct;
- (NSString *)fetchAddressBookInfoFromCacheForKey:(NSString *)arg0;
- (void)insertAddressBookInfoIntoCache:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)createAddressBook;
- (NSMutableDictionary *)addressBookCache;
- (void)sendABChangedNotificationSyncWithUserInfo:(NSDictionary *)arg0;
- (void)revertAddressBook:(char)arg0;
- (void)performQuery_sync:(id)arg0;
- (void)setAddressBookCache:(NSMutableDictionary *)arg0;
- (void *)addressBook;

@end
