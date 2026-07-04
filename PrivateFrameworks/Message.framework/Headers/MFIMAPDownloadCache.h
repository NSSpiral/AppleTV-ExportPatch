/* Runtime dump - MFIMAPDownloadCache
 * Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@interface MFIMAPDownloadCache : NSObject
{
    NSMutableArray * _downloads;
}

- (void)dealloc;
- (NSString *)downloadForMessage:(NSString *)arg0;
- (id)downloadForUid:(unsigned long)arg0 section:(UITableViewSection *)arg1 length:(unsigned int)arg2 consumer:(<DASearchQueryConsumer> *)arg3;
- (id)downloadForUid:(unsigned long)arg0 section:(UITableViewSection *)arg1 expectedLength:(unsigned int)arg2 consumer:(<DASearchQueryConsumer> *)arg3;
- (id)downloadForUid:(unsigned long)arg0 section:(UITableViewSection *)arg1 range:(struct _NSRange)arg2 consumer:(<DASearchQueryConsumer> *)arg3;
- (void)handleFetchResponse:(NSURLResponse *)arg0 forUid:(unsigned long)arg1;
- (void)handleFetchResponses:(id)arg0;
- (void)processResultsForUid:(unsigned long)arg0;
- (void)cleanUpDownloadsForUid:(unsigned long)arg0;
- (void)addCommandsForDownload:(id)arg0 toPipeline:(NSObject *)arg1;

@end
