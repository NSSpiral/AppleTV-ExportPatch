/* Runtime dump - MFIMAPCommandPipeline
 * Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@interface MFIMAPCommandPipeline : NSObject
{
    unsigned int _chunkSize;
    unsigned int _expectedSize;
    id _full;
    id _sending;
    NSMutableArray * _fetchUnits;
}

- (char)isFull;
- (void)dealloc;
- (void)_removeFetchUnitMatchingResponse:(NSURLResponse *)arg0;
- (void)addFetchCommandForUid:(unsigned long)arg0 fetchItem:(NSObject *)arg1 expectedLength:(unsigned int)arg2 bodyDataConsumer:(NSObject *)arg3 consumerSection:(id)arg4;
- (unsigned int)expectedSize;
- (void)setFull:(char)arg0;
- (NSURLConnection *)failureResponsesFromSendingCommandsWithConnection:(NSURLConnection *)arg0;
- (char)isSending;
- (unsigned int)chunkSize;
- (void)setChunkSize:(unsigned int)arg0;

@end
