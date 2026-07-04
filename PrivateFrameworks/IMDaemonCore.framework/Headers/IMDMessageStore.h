/* Runtime dump - IMDMessageStore
 * Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDMessageStore : NSObject
{
    NSString * _modificationStamp;
    NSNumber * _cachedUnreadMessageCount;
    NSNumber * _cachedLastFailedMessageID;
    char _suppressedUpdates;
    char _pendingDBUpdatePost;
    NSTimer * _suppressedUpdatesTimer;
}

@property (retain) NSString * modificationStamp;

+ (IMDMessageStore *)sharedInstance;
+ (void)_updateCacheForMessageGUID:(NSString *)arg0 fromMessage:(NSString *)arg1 toMessage:(NSString *)arg2;

- (void)dealloc;
- (IMDMessageStore *)init;
- (void)setModificationStamp:(NSString *)arg0;
- (void)performInitialHousekeeping;
- (id)_itemsWithGUIDs:(id)arg0;
- (void)_storeAttachmentsForMessage:(NSString *)arg0;
- (void)registerTransfersWithGUIDs:(id)arg0 forMessageGUID:(NSString *)arg1;
- (char)_hasMessagesWithGUIDs:(id)arg0;
- (NSString *)itemWithGUID:(NSString *)arg0;
- (id)messagesWithHandles:(NSSet *)arg0 onServices:(UpdateAndReportServices *)arg1 messageGUID:(NSString *)arg2 limit:(unsigned int)arg3;
- (id)_messagesWithHandles:(NSSet *)arg0 onServices:(UpdateAndReportServices *)arg1 messageGUID:(NSString *)arg2 limit:(unsigned int)arg3 onlyMessages:(char)arg4;
- (NSArray *)messagesWithRoomNames:(id)arg0 onServices:(UpdateAndReportServices *)arg1 messageGUID:(NSString *)arg2 limit:(unsigned int)arg3;
- (NSArray *)_messagesWithRoomNames:(id)arg0 onServices:(UpdateAndReportServices *)arg1 messageGUID:(NSString *)arg2 limit:(unsigned int)arg3 onlyMessages:(char)arg4;
- (id)_unreadMessagesWithHandles:(NSSet *)arg0 onServices:(UpdateAndReportServices *)arg1 limit:(unsigned int)arg2 fallbackGUID:(NSString *)arg3;
- (NSArray *)_unreadMessagesWithRoomNames:(id)arg0 onServices:(UpdateAndReportServices *)arg1 limit:(unsigned int)arg2 fallbackGUID:(NSString *)arg3;
- (NSString *)chatForMessageGUID:(NSString *)arg0;
- (NSString *)chatsForMessageGUID:(NSString *)arg0;
- (id)deleteMessageGUIDs:(id)arg0;
- (void)_deleteMessagesWithGUIDs:(id)arg0 chatIdentifiers:(id)arg1 style:(unsigned char)arg2 onServices:(UpdateAndReportServices *)arg3 batchNumber:(unsigned int)arg4 completion:(id /* block */)arg5;
- (void)_performBlock:(id /* block */)arg0 afterDelay:(/* block */ id)arg1;
- (NSString *)deleteMessagesWithChatIdentifiers:(IMAVChat *)arg0 style:(unsigned char)arg1 onServices:(UpdateAndReportServices *)arg2 completion:(id /* block */)arg3;
- (NSString *)messageWithReplaceMessageID:(int)arg0 fromHandle:(FMFHandle *)arg1 onService:(NSObject *)arg2;
- (void)_suppressDBUpdateTimerFired;
- (void)__postDBUpdate;
- (NSString *)modificationStamp;
- (void)postCountChanges;
- (void)_updateModificationDate;
- (void)_postDBUpdate;
- (long long)lastFailedMessageID;
- (long long)unreadMessagesCount;
- (void)updateFileTransfer:(id)arg0;
- (NSObject *)storeItem:(NSObject *)arg0 forceReplace:(char)arg1;
- (NSString *)storeMessage:(NSString *)arg0 forceReplace:(char)arg1 modifyError:(char)arg2 modifyFlags:(char)arg3 flagMask:(unsigned long long)arg4;
- (id)messagesWithGUIDs:(id)arg0;
- (char)canStoreItem:(NSObject *)arg0 onService:(NSObject *)arg1;
- (char)canStoreMessage:(NSString *)arg0 onService:(NSObject *)arg1;
- (char)hasStoredMessageWithGUID:(NSString *)arg0;
- (NSString *)messageWithGUID:(NSString *)arg0;
- (NSString *)existingMessageSimilarToMessage:(NSString *)arg0 skipServices:(id)arg1 skipGUIDs:(id)arg2 withinTimeInterval:(double)arg3 participants:(NSArray *)arg4;
- (void)markMessageAsDeduplicated:(id)arg0;
- (id)messagesWithHandles:(NSSet *)arg0 onServices:(UpdateAndReportServices *)arg1 limit:(unsigned int)arg2;
- (NSArray *)messagesWithRoomNames:(id)arg0 onServices:(UpdateAndReportServices *)arg1 limit:(unsigned int)arg2;
- (id)lastMessageWithHandles:(NSSet *)arg0 onServices:(UpdateAndReportServices *)arg1;
- (id)unreadMessagesWithHandles:(NSSet *)arg0 onServices:(UpdateAndReportServices *)arg1 limit:(unsigned int)arg2 fallbackGUID:(NSString *)arg3;
- (NSArray *)unreadMessagesWithRoomNames:(id)arg0 onServices:(UpdateAndReportServices *)arg1 limit:(unsigned int)arg2 fallbackGUID:(NSString *)arg3;
- (NSArray *)lastMessageWithRoomNames:(id)arg0 onServices:(UpdateAndReportServices *)arg1;
- (id)attachmentsWithHandles:(NSSet *)arg0 onServices:(UpdateAndReportServices *)arg1;
- (NSArray *)attachmentsWithRoomNames:(id)arg0 onServices:(UpdateAndReportServices *)arg1;
- (NSString *)messageActionItemsForOriginalMessageGUID:(NSString *)arg0;
- (NSString *)frequentRepliesForForChatIdentifiers:(id)arg0 onServices:(UpdateAndReportServices *)arg1 limit:(unsigned int)arg2;
- (NSString *)chatForMessage:(NSString *)arg0;
- (NSString *)chatsForMessage:(NSString *)arg0;
- (void)resolveUnformattedRepresentationsForHandles:(id)arg0 onService:(NSObject *)arg1 message:(NSString *)arg2 completionBlock:(id /* block */)arg3;
- (id)deleteMessageGUIDs:(id)arg0 inChat:(id)arg1;
- (NSString *)deleteMessagesWithChatIdentifiers:(IMAVChat *)arg0 style:(unsigned char)arg1 onServices:(UpdateAndReportServices *)arg2;
- (NSString *)deleteMessagesWithReplaceMessageID:(int)arg0 fromHandle:(FMFHandle *)arg1 onService:(NSObject *)arg2;
- (id)markMessagesAsReadWithHandles:(NSSet *)arg0 onServices:(UpdateAndReportServices *)arg1 upToGUID:(NSString *)arg2 readDate:(NSDate *)arg3 fromMe:(char)arg4;
- (NSArray *)markMessagesAsReadWithRoomNames:(id)arg0 onServices:(UpdateAndReportServices *)arg1 upToGUID:(NSString *)arg2 readDate:(NSDate *)arg3 fromMe:(char)arg4;
- (id)markMessagesAsReadWithHandle:(id)arg0 onService:(NSObject *)arg1 upToGUID:(NSString *)arg2 readDate:(NSDate *)arg3 fromMe:(char)arg4;
- (NSString *)markMessagesAsReadWithRoomname:(id)arg0 onService:(NSObject *)arg1 upToGUID:(NSString *)arg2 readDate:(NSDate *)arg3 fromMe:(char)arg4;
- (void)cleanseAttachments;
- (char)isSuppressDatabaseUpdates;
- (void)setSuppressDatabaseUpdates:(char)arg0;
- (void)rebuildLastFailedMessageID;
- (void)rebuildUnreadMessageCount;
- (void)updateUnformattedID:(NSObject *)arg0 forBuddyID:(NSObject *)arg1 onService:(NSObject *)arg2;
- (void)updateStamp;

@end
