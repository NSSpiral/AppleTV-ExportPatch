/* Runtime dump - MFIMAPSimpleDownload
 * Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@interface MFIMAPSimpleDownload : MFIMAPDownload
{
    NSString * _section;
    NSError * _error;
    unsigned int _length;
    id _knownLength;
    id _complete;
    struct _NSRange _range;
    unsigned int _originalDataLength;
    unsigned int _offsetAdjustment;
}

- (void)dealloc;
- (NSString *)section;
- (NSError *)error;
- (char)isComplete;
- (unsigned int)bytesFetched;
- (void)handleFetchResult:(NSObject *)arg0;
- (void)processResults;
- (void)addCommandsToPipeline:(NSObject *)arg0 withCache:(NSObject *)arg1;
- (unsigned int)lengthOfDataBeforeLineConversion;
- (MFIMAPSimpleDownload *)initWithUid:(unsigned long)arg0 section:(NSString *)arg1 length:(unsigned int)arg2 lengthIsKnown:(char)arg3 range:(struct _NSRange)arg4 consumer:(<DASearchQueryConsumer> *)arg5;
- (MFIMAPSimpleDownload *)initWithUid:(unsigned long)arg0 section:(NSString *)arg1 estimatedLength:(unsigned int)arg2 consumer:(<DASearchQueryConsumer> *)arg3;
- (MFIMAPSimpleDownload *)initWithUid:(unsigned long)arg0 section:(NSString *)arg1 length:(unsigned int)arg2 consumer:(<DASearchQueryConsumer> *)arg3;
- (MFIMAPSimpleDownload *)initWithUid:(unsigned long)arg0 section:(NSString *)arg1 range:(struct _NSRange)arg2 consumer:(<DASearchQueryConsumer> *)arg3;
- (unsigned int)expectedLength;
- (void)setError:(NSError *)arg0;

@end
