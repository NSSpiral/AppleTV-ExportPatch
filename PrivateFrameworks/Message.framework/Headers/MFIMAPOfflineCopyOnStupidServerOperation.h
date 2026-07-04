/* Runtime dump - MFIMAPOfflineCopyOnStupidServerOperation
 * Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@interface MFIMAPOfflineCopyOnStupidServerOperation : MFIMAPOperation
{
    struct __CFArray * messageIds;
    struct __CFArray * internalDates;
}

- (unsigned int)approximateSize;
- (void)dealloc;
- (void)_deserializeOpSpecificValuesFromData:(NSData *)arg0 cursor:(unsigned int *)arg1;
- (unsigned char)_magic;
- (void)serializeIntoData:(NSData *)arg0;
- (void)expungeTemporaryUid:(unsigned int)arg0;
- (char)getMessageId:(id *)arg0 andInternalDate:(id *)arg1 forDestinationUid:(unsigned int)arg2;
- (void)setMessageId:(unsigned int)arg0 andInternalDate:(NSDate *)arg1 forMessageWithSourceUid:(unsigned int)arg2;

@end
