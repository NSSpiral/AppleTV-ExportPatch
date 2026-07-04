/* Runtime dump - MFIMAPMessageDownload
 * Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@interface MFIMAPMessageDownload : MFIMAPCompoundDownload
{
    MFMessage * _message;
    MFMimePart * _topLevelPart;
    id _allowsPartialDownloads;
    id _usingPartialDownloads;
    id _startedFetch;
    id _fetchingMessageContents;
    id _fetchingBodyText;
    id _doneAddingSubdownloads;
    id _fetchBodyData;
    <MFDataConsumer> * _headerFilter;
    <MFCollectingDataConsumer> * _headerConsumer;
    <MFDataConsumer> * _textFilter;
    <MFCollectingDataConsumer> * _textConsumer;
}

- (void)dealloc;
- (NSData *)data;
- (MFMessage *)message;
- (char)isComplete;
- (void)handleFetchResult:(NSObject *)arg0;
- (void)processResults;
- (void)addCommandsToPipeline:(NSObject *)arg0 withCache:(NSObject *)arg1;
- (void)setAllowsPartialDownloads:(char)arg0;
- (char)allowsPartialDownloads;
- (char)partial;
- (void)setTopLevelPart:(MFMimePart *)arg0;
- (void)setFetchBodyData:(char)arg0;
- (char)fetchBodyData;
- (MFMimePart *)topLevelPart;
- (MFIMAPMessageDownload *)initWithMessage:(MFMessage *)arg0;

@end
