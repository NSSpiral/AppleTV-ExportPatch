/* Runtime dump - MFIMAPMessage
 * Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@interface MFIMAPMessage : MFMailMessage
{
    unsigned int _size;
    NSArray * _customFlags;
    unsigned long _uid;
    unsigned long long _uniqueRemoteId;
}

- (void)dealloc;
- (NSString *)description;
- (unsigned long)uid;
- (void)setUid:(unsigned long)arg0;
- (MFIMAPMessage *)initWithFlags:(unsigned long long)arg0 customFlags:(NSArray *)arg1 size:(unsigned int)arg2 uid:(unsigned long)arg3;
- (int)compareByNumberWithMessage:(NSString *)arg0;
- (NSArray *)customFlags;
- (char)isMessageContentsLocallyAvailable;
- (void)setPreferredEncoding:(unsigned long)arg0;
- (unsigned int)messageSize;
- (NSString *)messageID;
- (char)hasTemporaryUid;
- (char *)remoteID;
- (NSURL *)originalMailboxURL;
- (unsigned long long)uniqueRemoteId;
- (void)setUniqueRemoteId:(unsigned long long)arg0;
- (char)isPartial;
- (void)setIsPartial:(char)arg0;
- (void)setHasTemporaryUid:(char)arg0;
- (NSString *)mailboxName;
- (NSURL *)remoteMailboxURL;

@end
