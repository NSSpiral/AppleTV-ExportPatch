/* Runtime dump - ASAccountActor
 * Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface ASAccountActor : DADisableableObject <ASAccountActorMessages>

- (void)shutdown;
- (void)setAccount:(SEL)arg0;
- (void)setMailNumberOfPastDaysToSync:(SEL)arg0;
- (NSString *)foldersTag;
- (int)sendMessageWithRFC822Data:(NSData *)arg0 messageID:(long long)arg1 outgoingMessageType:(int)arg2 originalMessageFolderID:(NSObject *)arg3 originalMessageItemID:(NSObject *)arg4 originalMessageLongID:(NSObject *)arg5 originalAccountID:(NSObject *)arg6 useSmartTasksIfPossible:(char)arg7 consumer:(<DASearchQueryConsumer> *)arg8 context:(NSObject *)arg9;
- (void)cancelAllSearchQueries;
- (char)searchQueriesRunning;
- (void)_daemonDiedNotification:(SEL)arg0;
- (void)_folderUpdatedNotification:(SEL)arg0;
- (void)_newASPolicyKeyNotification:(SEL)arg0;
- (void)_folderHierarchyChanged;
- (void)_foldersThatExternalClientsCareAboutChanged;
- (void)startup;
- (char)generatesBulletins;
- (void)setGeneratesBulletins:(SEL)arg0;
- (NSString *)folderIDsThatExternalClientsCareAboutWithTag:(id *)arg0;
- (int)performMailboxRequest:(NSURLRequest *)arg0 mailbox:(MFMailboxUid *)arg1 previousTag:(NSString *)arg2 isUserRequested:(char)arg3 consumer:(<DASearchQueryConsumer> *)arg4;
- (void)_accountPasswordChanged;
- (ASAccountActor *)initWithDAAccount:(NSObject *)arg0;
- (NSObject *)customSignature;
- (void)setCustomSignature:(SEL)arg0;
- (NSIndexSet *)mailboxes;
- (id)inboxFolder;
- (id)sentItemsFolder;
- (id)deletedItemsFolder;
- (id)draftsFolder;
- (void)performFolderChange:(NSDictionary *)arg0 isUserRequested:(char)arg1;
- (int)supportsMailboxSearch;
- (int)supportsEmailFlagging;
- (int)mailNumberOfPastDaysToSync;
- (int)performMailboxRequests:(id)arg0 mailbox:(MFMailboxUid *)arg1 previousTag:(NSString *)arg2 isUserRequested:(char)arg3 consumer:(<DASearchQueryConsumer> *)arg4;
- (int)performMoveRequests:(id)arg0 consumer:(<DASearchQueryConsumer> *)arg1;
- (char)reattemptInvitationLinkageForMetaData:(NSData *)arg0 inFolderWithId:(NSObject *)arg1;
- (NSDictionary *)unactionableICSRepresentationForMetaData:(NSData *)arg0 inFolderWithId:(NSObject *)arg1 outSummary:(id *)arg2;
- (id)folderIDsThatExternalClientsCareAboutForDataclasses:(int)arg0 withTag:(id *)arg1;
- (void)monitorFoldersForUpdates:(SEL)arg0;
- (void)stopMonitoringAllFolders;
- (int)supportsConversations;
- (void)performSearchQuery:(SEL)arg0;
- (void)cancelSearchQuery:(SEL)arg0;
- (char)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg0 deleted:(char)arg1 foldersTag:(NSString *)arg2;
- (void)stopMonitoringFoldersForUpdates:(SEL)arg0;
- (NSData *)signingIdentityPersistentReference;
- (void)setSigningIdentityPersistentReference:(SEL)arg0;
- (NSData *)encryptionIdentityPersistentReference;
- (void)setEncryptionIdentityPersistentReference:(SEL)arg0;
- (int)performResolveRecipientsRequest:(NSURLRequest *)arg0 consumer:(<DASearchQueryConsumer> *)arg1;
- (int)performFetchMessageSearchResultRequests:(id)arg0 consumer:(<DASearchQueryConsumer> *)arg1;
- (void)cancelTaskWithID:(SEL)arg0;
- (int)performFetchAttachmentRequest:(NSURLRequest *)arg0 consumer:(<DASearchQueryConsumer> *)arg1;
- (int)sendMessageWithRFC822Data:(NSData *)arg0 messageID:(long long)arg1 outgoingMessageType:(int)arg2 originalMessageFolderID:(NSObject *)arg3 originalMessageItemID:(NSObject *)arg4 originalMessageLongID:(NSObject *)arg5 originalAccountID:(NSObject *)arg6 useSmartTasksIfPossible:(char)arg7 isUserRequested:(char)arg8 consumer:(<DASearchQueryConsumer> *)arg9 context:(NSObject *)arg10;

@end
