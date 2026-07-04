/* Runtime dump - IMDChatRegistry
 * Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDChatRegistry : NSObject
{
    NSRecursiveLock * _chatsLock;
    NSMutableDictionary * _chats;
    char _isLoading;
    char _doneLoadingAfterMerge;
}

@property (readonly, nonatomic) NSArray * chats;

+ (IMDChatRegistry *)sharedInstance;

- (void)dealloc;
- (IMDChatRegistry *)init;
- (NSArray *)chats;
- (char)updateProperties:(NSDictionary *)arg0 chat:(IMAVChat *)arg1 style:(unsigned char)arg2;
- (void)updateStateForChat:(id)arg0 fromMessage:(NSString *)arg1 toMessage:(NSString *)arg2 forcePost:(char)arg3;
- (id)existingChatsForIDs:(id)arg0 onService:(NSObject *)arg1 style:(unsigned char)arg2;
- (NSString *)existingChatWithGUID:(NSString *)arg0;
- (void)removeMessage:(NSString *)arg0 fromChat:(id)arg1;
- (NSDictionary *)_chatInfo;
- (void)_forceReloadChats:(char)arg0;
- (NSObject *)existingChatForID:(NSObject *)arg0 account:(NSObject *)arg1;
- (void)addChat:(id)arg0;
- (NSString *)existingChatWithIdentifier:(NSString *)arg0 account:(NSObject *)arg1;
- (id)existingChatForRoom:(id)arg0 account:(NSObject *)arg1;
- (id)existingChatForIDs:(id)arg0 account:(NSObject *)arg1 displayName:(NSString *)arg2 groupID:(NSString *)arg3 style:(unsigned char)arg4;
- (void)updateLastMessageForChat:(id)arg0 hintMessage:(NSString *)arg1;
- (void)updateLastMessageForChat:(id)arg0;
- (char)updateUnreadCountForChat:(id)arg0;
- (void)updateStateForChat:(id)arg0;
- (char)loadChatsWithCompletionBlock:(id /* block */)arg0;
- (char)_saveChats;
- (NSString *)allExistingChatsWithIdentifier:(NSString *)arg0 style:(unsigned char)arg1;
- (void)_rebuildSpotlightDatabaseFor18306262;
- (void)_makeAllAttachmentsClassC;
- (id)chatForHandle:(id)arg0 account:(NSObject *)arg1 chatIdentifier:(NSString *)arg2 guid:(NSString *)arg3;
- (id)chatForHandles:(id)arg0 account:(NSObject *)arg1 chatIdentifier:(NSString *)arg2 style:(unsigned char)arg3 groupID:(NSString *)arg4 displayName:(NSString *)arg5 guid:(NSString *)arg6;
- (id)chatForRoom:(id)arg0 account:(NSObject *)arg1 chatIdentifier:(NSString *)arg2 guid:(NSString *)arg3;
- (id)existingChatForIDs:(id)arg0 account:(NSObject *)arg1 style:(unsigned char)arg2;
- (void)updateStateForChat:(id)arg0 forcePost:(char)arg1;
- (void)addItem:(NSObject *)arg0 toChat:(id)arg1;
- (void)removeItem:(void *)arg0 fromChat:(id)arg1;
- (void)addMessage:(NSString *)arg0 toChat:(id)arg1;
- (id)_chatInfoForSaving;
- (char)saveChats;
- (void)removeChat:(id)arg0;
- (void)systemDidUnlock;
- (void)systemDidLeaveFirstDataProtectionLock;

@end
