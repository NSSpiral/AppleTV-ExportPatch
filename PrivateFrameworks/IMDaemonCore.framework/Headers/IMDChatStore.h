/* Runtime dump - IMDChatStore
 * Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDChatStore : NSObject
{
    NSString * _lastModificationStamp;
}

@property (retain) NSString * modificationStamp;

+ (IMDChatStore *)sharedInstance;

- (void)dealloc;
- (IMDChatStore *)init;
- (void)setModificationStamp:(NSString *)arg0;
- (NSString *)chatsGUIDsForMessageWithGUID:(NSString *)arg0;
- (NSString *)modificationStamp;
- (void)_updateModificationDate;
- (id)storeChat:(id)arg0;
- (unsigned int)unreadCountForChat:(id)arg0;
- (void)deleteChat:(id)arg0;
- (void)addMessageWithGUID:(NSString *)arg0 toChat:(id)arg1;
- (void)removeMessageWithGUID:(NSString *)arg0 fromChat:(id)arg1;
- (id)loadAllChats;
- (void)archiveChat:(id)arg0;
- (void)unarchiveChat:(id)arg0;
- (id)chatsWithHandle:(id)arg0 onService:(NSObject *)arg1;
- (NSString *)chatsWithRoomname:(id)arg0 onService:(NSObject *)arg1;

@end
