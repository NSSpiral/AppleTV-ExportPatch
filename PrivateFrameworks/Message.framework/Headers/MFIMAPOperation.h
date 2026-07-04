/* Runtime dump - MFIMAPOperation
 * Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@interface MFIMAPOperation : NSObject
{
    id _type;
    id _temporaryUids;
    NSString * _mailboxName;
    id _opSpecific;
}

+ (NSData *)deserializedCopyFromData:(NSData *)arg0 cursor:(unsigned int *)arg1;

- (unsigned int)approximateSize;
- (void)dealloc;
- (NSString *)description;
- (unsigned int)uid;
- (struct ?)flags;
- (NSDate *)internalDate;
- (void)_deserializeOpSpecificValuesFromData:(NSData *)arg0 cursor:(unsigned int *)arg1;
- (unsigned char)_magic;
- (void)serializeIntoData:(NSData *)arg0;
- (MFIMAPOperation *)initWithMailboxToCreate:(id)arg0;
- (MFIMAPOperation *)initWithMailboxToDelete:(id)arg0;
- (MFIMAPOperation *)initWithFlagsToSet:(NSSet *)arg0 flagsToClear:(id)arg1 forUids:(id)arg2 inMailbox:(MFDAMailbox *)arg3;
- (MFIMAPOperation *)initWithUidsToCopy:(id)arg0 fromMailbox:(MFDAMailbox *)arg1 toMailbox:(MFDAMailbox *)arg2 firstNewUid:(unsigned int)arg3;
- (MFIMAPOperation *)initWithAppendedUid:(unsigned int)arg0 approximateSize:(unsigned int)arg1 flags:(_MFMessageFlags *)arg2 internalDate:(NSDate *)arg3 mailbox:(MFMailboxUid *)arg4;
- (char)isSourceOfTemporaryUid:(unsigned int)arg0;
- (char)actsOnTemporaryUid:(unsigned int)arg0;
- (void)expungeTemporaryUid:(unsigned int)arg0;
- (unsigned int)firstTemporaryUid;
- (unsigned int)lastTemporaryUid;
- (char)usesRealUids;
- (void)setUsesRealUids:(char)arg0;
- (NSSet *)flagsToSet;
- (id)flagsToClear;
- (struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)uids;
- (id)sourceUids;
- (id)destinationUids;
- (id)destinationMailbox;
- (unsigned int)sourceUidForTemporaryUid:(unsigned int)arg0;
- (char)getMessageId:(id *)arg0 andInternalDate:(id *)arg1 forDestinationUid:(unsigned int)arg2;
- (void)setMessageId:(unsigned int)arg0 andInternalDate:(NSDate *)arg1 forMessageWithSourceUid:(unsigned int)arg2;
- (NSString *)mailboxName;
- (int)operationType;

@end
