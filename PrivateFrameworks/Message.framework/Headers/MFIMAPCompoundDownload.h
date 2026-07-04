/* Runtime dump - MFIMAPCompoundDownload
 * Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@interface MFIMAPCompoundDownload : MFIMAPDownload
{
    NSMutableArray * _subdownloads;
}

- (void)dealloc;
- (char)isComplete;
- (unsigned int)bytesFetched;
- (void)processResults;
- (void)addCommandsToPipeline:(NSObject *)arg0 withCache:(NSObject *)arg1;
- (unsigned int)lengthOfDataBeforeLineConversion;
- (NSMutableArray *)subdownloads;
- (void)addSubdownload:(id)arg0;
- (void)removeSubdownload:(id)arg0;
- (unsigned int)expectedLength;

@end
