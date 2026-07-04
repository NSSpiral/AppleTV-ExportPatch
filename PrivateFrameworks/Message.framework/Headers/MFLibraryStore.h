/* Runtime dump - MFLibraryStore
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFLibraryStore : MFMailMessageStore
{
    MFMessageLibrary * _library;
    NSDate * _earliestReceivedDate;
    MFMessageCriterion * _criterion;
    unsigned int _serverMessageCount;
    unsigned int _fetchWindow;
}

@property (retain, nonatomic) NSDate * earliestReceivedDate;

+ (MFLibraryStore *)sharedInstance;
+ (char)createEmptyStoreForPath:(NSString *)arg0;
+ (char)storeAtPathIsWritable:(id)arg0;
+ (MFLibraryStore *)storeWithMailbox:(MFMailboxUid *)arg0;
+ (MFLibraryStore *)sharedInstanceIfExists;
+ (unsigned int)defaultLoadOptions;
+ (MFLibraryStore *)storeWithCriterion:(MFMessageCriterion *)arg0;

- (void)dealloc;
- (NSString *)URLString;
- (unsigned int)totalCount;
- (void)openSynchronously;
- (void)updateUserInfoToLatestValues;
- (void)messagesWereAdded:(id)arg0 earliestReceivedDate:(NSDate *)arg1;
- (unsigned int)unreadCount;
- (unsigned int)serverUnreadOnlyOnServerCount;
- (unsigned int)nonDeletedCountIncludingServerSearch:(char)arg0 andThreadSearch:(char)arg1;
- (unsigned int)fetchWindow;
- (NSDictionary *)copyOfAllMessagesWithOptions:(unsigned int)arg0;
- (id)copyOfAllMessages;
- (NSString *)copyMessagesMatchingText:(NSString *)arg0 options:(unsigned int)arg1;
- (void)deleteMessages:(id)arg0 moveToTrash:(char)arg1;
- (NSDictionary *)setFlagsFromDictionary:(NSDictionary *)arg0 forMessages:(CHITMessages *)arg1;
- (unsigned int)appendMessages:(id)arg0 unsuccessfulOnes:(NSArray *)arg1 newMessageIDs:(id)arg2 newMessages:(CHITMessages *)arg3 flagsToSet:(NSSet *)arg4;
- (NSString *)messageForMessageID:(NSString *)arg0 options:(unsigned int)arg1;
- (NSString *)_cachedHeaderDataForMessage:(NSString *)arg0 valueIfNotPresent:(id)arg1;
- (NSString *)_fetchHeaderDataForMessage:(NSString *)arg0 downloadIfNecessary:(char)arg1;
- (void)setFlagsForAllMessagesFromDictionary:(NSDictionary *)arg0;
- (void)setNumberOfAttachments:(unsigned int)arg0 isSigned:(char)arg1 isEncrypted:(char)arg2 forMessage:(NSString *)arg3;
- (char)shouldCancel;
- (MFLibraryStore *)initWithMailboxUid:(MFMailboxUid *)arg0 readOnly:(char)arg1;
- (void)writeUpdatedMessageDataToDisk;
- (char)shouldGrowFetchWindow;
- (void)invalidateFetchWindow;
- (unsigned int)growFetchWindow;
- (void)purgeMessagesBeyondLimit:(unsigned int)arg0 keepingMessage:(NSString *)arg1;
- (unsigned int)unreadCountMatchingCriterion:(id)arg0;
- (char)hasMessageForAccount:(NSObject *)arg0;
- (unsigned int)indexOfMessage:(NSString *)arg0;
- (id)mutableCopyOfAllMessages;
- (NSObject *)copyOfAllMessagesForBodyLoadingFromRowID:(unsigned int)arg0 limit:(unsigned int)arg1;
- (id)copyMessagesMatchingCriterion:(id)arg0 options:(unsigned int)arg1;
- (id)copyMessagesWithRemoteIDs:(id)arg0 options:(unsigned int)arg1;
- (char)canCompact;
- (void)doCompact;
- (void)deleteMessagesOlderThanNumberOfDays:(int)arg0 compact:(char)arg1;
- (char)allowsAppend;
- (NSDictionary *)setFlagsLocallyFromDictionary:(NSDictionary *)arg0 forMessages:(CHITMessages *)arg1;
- (NSData *)storeData:(NSDictionary *)arg0 forMimePart:(MFMimePart *)arg1 isComplete:(char)arg2;
- (MFLibraryStore *)initWithMailbox:(MFMailboxUid *)arg0;
- (MFMessageCriterion *)criterion;
- (NSString *)dataPathForMessage:(NSString *)arg0 part:(id)arg1;
- (MFMailboxUid *)mailbox;
- (MFLibraryStore *)initWithCriterion:(MFMessageCriterion *)arg0 mailbox:(MFMailboxUid *)arg1 readOnly:(char)arg2;
- (MFLibraryStore *)initWithCriterion:(MFMessageCriterion *)arg0;
- (void)_queueMessagesAdded:(id)arg0;
- (void)_queueMessageFlagsChanged:(NSNotification *)arg0;
- (void)_queueMessagesWillBeCompacted:(id)arg0;
- (void)_queueMessagesWereCompacted:(id)arg0;
- (void)_updateMailboxUnreadCount;
- (id)copyOfMessageInfos;
- (NSObject *)copyOfMessagesInRange:(struct _NSRange)arg0 options:(unsigned int)arg1 generation:(unsigned int *)arg2;
- (NSObject *)copyOfMessagesInRange:(struct _NSRange)arg0 options:(unsigned int)arg1;
- (void)addCountsForMessages:(id)arg0 shouldUpdateUnreadCount:(char)arg1;
- (void)setEarliestReceivedDate:(NSDate *)arg0;
- (char)_isSingleCoreDevice;
- (unsigned int)_fetchWindowMultiple;
- (unsigned int)_fetchWindowMinimum;
- (unsigned int)_calculateFetchWindowWithAdditionalMultiple:(char)arg0;
- (id)filterMessagesByMembership:(id)arg0;
- (void)_handleFlagsChangedForMessages:(id)arg0 flags:(_MFMessageFlags *)arg1 oldFlagsByMessage:(NSString *)arg2;
- (NSNotification *)_memberMessagesWithCompactionNotification:(NSNotification *)arg0;
- (char)dataForMimePart:(id)arg0 inRange:(struct _NSRange)arg1 isComplete:(char *)arg2 withConsumer:(NSObject *)arg3 downloadIfNecessary:(char)arg4 didDownload:(char *)arg5;
- (NSString *)fullBodyDataForMessage:(NSString *)arg0 andHeaderDataIfReadilyAvailable:(id *)arg1 isComplete:(char *)arg2 downloadIfNecessary:(char)arg3 usePartDatas:(char)arg4 didDownload:(char *)arg5;
- (NSString *)_cachedBodyDataContainerForMessage:(NSString *)arg0 valueIfNotPresent:(id)arg1;
- (char)_fetchDataForMimePart:(id)arg0 range:(struct _NSRange)arg1 isComplete:(char *)arg2 consumer:(<DASearchQueryConsumer> *)arg3;
- (NSData *)dataForMimePart:(id)arg0 inRange:(struct _NSRange)arg1 isComplete:(char *)arg2 downloadIfNecessary:(char)arg3 didDownload:(char *)arg4;
- (id)_copyDataFromMimePart:(id)arg0 threshold:(unsigned int)arg1 downloadIfNecessary:(char)arg2;
- (NSString *)_fetchFullBodyDataForMessage:(NSString *)arg0 andHeaderDataIfReadilyAvailable:(id *)arg1 downloadIfNecessary:(char)arg2 didDownload:(char *)arg3;
- (NSString *)_fetchBodyDataForMessage:(NSString *)arg0 andHeaderDataIfReadilyAvailable:(id *)arg1 downloadIfNecessary:(char)arg2 partial:(char *)arg3;
- (void)compactMessages:(id)arg0;
- (NSString *)_cachedHeadersForMessage:(NSString *)arg0 valueIfNotPresent:(id)arg1;
- (void)purgeMessages:(id)arg0;
- (void)handleMessagesAdded:(id)arg0 earliestReceivedDate:(NSDate *)arg1;
- (void)_addInvocationToQueue:(NSObject *)arg0;
- (void)handleMessageFlagsChanged:(NSNotification *)arg0;
- (void)handleMessagesWillBeCompacted:(id)arg0;
- (void)handleMessagesCompacted:(id)arg0;
- (char)hasCompleteDataForMimePart:(id)arg0;
- (void)libraryFinishedSendingMessages;
- (NSObject *)messageWithLibraryID:(unsigned int)arg0 options:(unsigned int)arg1;
- (id)copyOfMessageInfosMatchingCriterion:(id)arg0;
- (id)copyOfMessageInfosForConversationsContainingMessagesMatchingCriterion:(id)arg0;
- (struct __CFDictionary *)copySendersByLibraryIDForConversation:(long long)arg0 limit:(int)arg1;
- (long long)oldestKnownConversation;
- (NSArray *)serverSearchResults;
- (void)willFetchMessages;
- (char)bodyFetchRequiresNetworkActivity;
- (NSString *)fullBodyDataForMessage:(NSString *)arg0 andHeaderDataIfReadilyAvailable:(id *)arg1 isComplete:(char *)arg2 downloadIfNecessary:(char)arg3 didDownload:(char *)arg4;
- (NSString *)bodyDataForMessage:(NSString *)arg0 isComplete:(char *)arg1 isPartial:(char *)arg2 downloadIfNecessary:(char)arg3;
- (void)updateMetadata;
- (void)_setNeedsAutosave;
- (NSCache *)newObjectCache;
- (NSString *)_cachedBodyForMessage:(NSString *)arg0 valueIfNotPresent:(id)arg1;
- (NSDate *)earliestReceivedDate;
- (MFMessageLibrary *)library;
- (void)setLibrary:(MFMessageLibrary *)arg0;

@end
