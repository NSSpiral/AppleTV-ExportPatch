/* Runtime dump - MFDAMessageStore
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFDAMessageStore : MFLibraryStore
{
    DAFolder * _DAFolder;
}

- (char)hasMoreFetchableMessages;
- (unsigned int)fetchWindow;
- (NSDictionary *)setFlagsFromDictionary:(NSDictionary *)arg0 forMessages:(CHITMessages *)arg1;
- (void)setFlagsForAllMessagesFromDictionary:(NSDictionary *)arg0;
- (int)fetchNumMessages:(unsigned int)arg0 preservingUID:(id)arg1 options:(unsigned int)arg2;
- (MFDAMessageStore *)initWithMailboxUid:(MFMailboxUid *)arg0 readOnly:(char)arg1;
- (char)shouldGrowFetchWindow;
- (unsigned int)growFetchWindow;
- (void)purgeMessagesBeyondLimit:(unsigned int)arg0 keepingMessage:(NSString *)arg1;
- (NSObject *)copyOfAllMessagesForBodyLoadingFromRowID:(unsigned int)arg0 limit:(unsigned int)arg1;
- (char)canFetchSearchResults;
- (int)fetchMessagesMatchingCriterion:(id)arg0 limit:(unsigned int)arg1;
- (id)remoteIDsMatchingCriterion:(id)arg0 limit:(unsigned int)arg1 error:(id *)arg2;
- (NSString *)remoteIDsMatchingSearchText:(NSString *)arg0 limit:(unsigned int)arg1 error:(id *)arg2;
- (void)deleteMessagesOlderThanNumberOfDays:(int)arg0 compact:(char)arg1;
- (char)allowsAppend;
- (NSObject *)messageForRemoteID:(NSObject *)arg0;
- (NSDictionary *)willSetFlagsFromDictionary:(NSDictionary *)arg0 forMessages:(CHITMessages *)arg1;
- (char)shouldDownloadBodyDataForMessage:(NSString *)arg0;
- (NSString *)loadMeetingExternalIDForMessage:(NSString *)arg0;
- (NSString *)loadMeetingDataForMessage:(NSString *)arg0;
- (NSString *)loadMeetingMetadataForMessage:(NSString *)arg0;
- (char)shouldSetSummaryForMessage:(NSString *)arg0;
- (char)canDeleteMessage:(NSString *)arg0;
- (char)_fetchDataForMimePart:(id)arg0 range:(struct _NSRange)arg1 isComplete:(char *)arg2 consumer:(<DASearchQueryConsumer> *)arg3;
- (NSString *)_fetchBodyDataForMessage:(NSString *)arg0 andHeaderDataIfReadilyAvailable:(id *)arg1 downloadIfNecessary:(char)arg2 partial:(char *)arg3;
- (char)bodyFetchRequiresNetworkActivity;
- (id)_folderIDForFetching;
- (void)_remoteIDsMatchingCriterion:(id)arg0 limit:(unsigned int)arg1 filterByDate:(char)arg2 handler:(id /* block */)arg3;
- (void)issueFlagUpdates:(id)arg0 forMessages:(CHITMessages *)arg1;
- (NSObject *)_fetchBodyDataForSearchResult:(NSObject *)arg0 format:(int)arg1 streamConsumer:(NSObject *)arg2;
- (NSString *)_fetchBodyDataForNormalMessage:(NSString *)arg0 format:(int)arg1 part:(id)arg2 streamConsumer:(NSObject *)arg3;
- (id)defaultAlternativeForPart:(id)arg0;
- (id)bestAlternativeForPart:(id)arg0;
- (NSObject *)_additionalHeadersForAction:(int)arg0 ofMessage:(NSString *)arg1;
- (void)setServerFlagsFromDictionary:(NSDictionary *)arg0 forMessages:(CHITMessages *)arg1;
- (char)wantsLineEndingConversionForMIMEPart:(id)arg0;
- (NSString *)additionalHeadersForReplyOfMessage:(NSString *)arg0;
- (NSString *)additionalHeadersForForwardOfMessage:(NSString *)arg0;

@end
