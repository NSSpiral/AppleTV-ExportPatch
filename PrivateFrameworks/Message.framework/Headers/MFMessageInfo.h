/* Runtime dump - MFMessageInfo
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMessageInfo : NSObject
{
    id _flagged;
    id _read;
    id _deleted;
    id _uidIsLibraryID;
    id _hasAttachments;
    id _isVIP;
    unsigned int _uid;
    unsigned int _dateReceivedInterval;
    unsigned int _dateSentInterval;
    unsigned int _mailboxID;
    long long _conversationHash;
    long long _generationNumber;
}

@property (readonly, nonatomic) long long generationNumber;
@property (nonatomic) unsigned int uid;
@property (nonatomic) unsigned int dateReceivedInterval;
@property (nonatomic) unsigned int dateSentInterval;
@property (nonatomic) long long conversationHash;
@property (nonatomic) unsigned int mailboxID;
@property (nonatomic) char flagged;
@property (nonatomic) char read;
@property (nonatomic) char deleted;
@property (nonatomic) char uidIsLibraryID;
@property (nonatomic) char isVIP;
@property (nonatomic) char knownToHaveAttachments;

+ (long long)newGenerationNumber;

- (MFMessageInfo *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (unsigned int)uid;
- (void)setUid:(unsigned int)arg0;
- (unsigned int)mailboxID;
- (void)setMailboxID:(unsigned int)arg0;
- (void)setUidIsLibraryID:(char)arg0;
- (long long)generationNumber;
- (MFMessageInfo *)initWithUid:(unsigned int)arg0 mailboxID:(unsigned int)arg1 dateReceivedInterval:(unsigned int)arg2 dateSentInterval:(unsigned int)arg3 conversationHash:(long long)arg4 read:(char)arg5 knownToHaveAttachments:(char)arg6 flagged:(char)arg7 isVIP:(char)arg8;
- (long long)conversationHash;
- (char)flagged;
- (void)setDateReceivedInterval:(unsigned int)arg0;
- (void)setDateSentInterval:(unsigned int)arg0;
- (void)setConversationHash:(long long)arg0;
- (void)setIsVIP:(char)arg0;
- (void)setRead:(char)arg0;
- (void)setFlagged:(char)arg0;
- (void)setKnownToHaveAttachments:(char)arg0;
- (unsigned int)dateSentInterval;
- (char)uidIsLibraryID;
- (char)isKnownToHaveAttachments;
- (char)isVIP;
- (int)generationCompare:(NSObject *)arg0;
- (unsigned int)dateReceivedInterval;
- (char)deleted;
- (char)read;
- (void)setDeleted:(char)arg0;

@end
