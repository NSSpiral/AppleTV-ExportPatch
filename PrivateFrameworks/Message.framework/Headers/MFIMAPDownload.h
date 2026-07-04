/* Runtime dump - MFIMAPDownload
 * Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@interface MFIMAPDownload : NSObject
{
    unsigned long _uid;
    NSMutableArray * _pendingFetchResults;
    MFCountingDataConsumer * _countingConsumer;
    MFBaseFilterDataConsumer * _mainConsumer;
}

@property (readonly, nonatomic) MFBaseFilterDataConsumer * mainConsumer;

- (void)dealloc;
- (NSData *)data;
- (unsigned long)uid;
- (NSError *)error;
- (char)isComplete;
- (MFIMAPDownload *)initWithUid:(unsigned long)arg0;
- (unsigned int)bytesFetched;
- (unsigned int)consumerBytesFetched;
- (void)handleFetchResult:(NSObject *)arg0;
- (void)processResults;
- (void)addCommandsToPipeline:(NSObject *)arg0 withCache:(NSObject *)arg1;
- (unsigned int)lengthOfDataBeforeLineConversion;
- (MFBaseFilterDataConsumer *)mainConsumer;
- (unsigned int)expectedLength;
- (void)setError:(NSError *)arg0;

@end
