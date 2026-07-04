/* Runtime dump - MFMessageDetails
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMessageDetails : NSObject
{
    MFMessageLibrary * library;
    unsigned int libraryID;
    unsigned long long messageFlags;
    unsigned long uid;
    unsigned long encoding;
    char isInvalid;
    unsigned int mailboxID;
    long long conversationHash;
    long long messageIDHash;
    unsigned int dateReceived;
    unsigned int dateSent;
    NSString * externalID;
}

- (NSString *)externalID;
- (unsigned int)libraryID;
- (void)dealloc;
- (MFMessageDetails *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (unsigned long)uid;
- (unsigned long long)messageFlags;
- (double)dateReceivedAsTimeIntervalSince1970;
- (double)dateSentAsTimeIntervalSince1970;
- (unsigned int)mailboxID;
- (NSString *)messageID;
- (char *)remoteID;
- (MFMailboxUid *)mailbox;
- (NSDictionary *)copyMessageInfo;
- (long long)messageIDHash;

@end
