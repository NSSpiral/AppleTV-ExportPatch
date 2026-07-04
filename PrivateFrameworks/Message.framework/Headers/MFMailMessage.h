/* Runtime dump - MFMailMessage
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMailMessage : MFMessage
{
    unsigned long long _messageFlags;
    unsigned char _subjectPrefixLength;
    unsigned long long _modSequenceNumber;
    MFMessageInfo * _info;
}

@property unsigned long long modSequenceNumber;

+ (unsigned int)validatePriority:(int)arg0;
+ (MFMailMessage *)forwardedMessagePrefixWithSpacer:(char)arg0;
+ (Class)dataMessageStoreToUse;
+ (unsigned int)displayablePriorityForPriority:(int)arg0;

- (void)dealloc;
- (NSURL *)URL;
- (int)priority;
- (void)setSubject:(NSString *)arg0;
- (NSString *)subject;
- (NSNumber *)account;
- (unsigned long long)messageFlags;
- (void)setMessageFlags:(unsigned long long)arg0;
- (unsigned short)numberOfAttachments;
- (NSObject *)messageStore;
- (unsigned long long)conversationFlags;
- (void)setConversationFlags:(unsigned long long)arg0;
- (void)setMessageFlagsWithoutCommitting:(unsigned long long)arg0;
- (MFMailboxUid *)mailbox;
- (NSDictionary *)copyMessageInfo;
- (NSURL *)originalMailboxURL;
- (void)setMutableInfoFromMessage:(NSString *)arg0;
- (void)markAsViewed;
- (void)markAsNotViewed;
- (void)markAsFlagged;
- (void)markAsNotFlagged;
- (void)markAsReplied;
- (void)markAsForwarded;
- (NSString *)externalConversationID;
- (NSURL *)remoteMailboxURL;
- (unsigned long long)modSequenceNumber;
- (void)setSubject:(NSString *)arg0 to:(NSArray *)arg1 cc:(NSArray *)arg2 bcc:(NSArray *)arg3 sender:(NSArray *)arg4 dateReceived:(double)arg5 dateSent:(double)arg6 messageIDHash:(long long)arg7 conversationIDHash:(long long)arg8 summary:(NSString *)arg9 withOptions:(unsigned int)arg10;
- (NSString *)subjectNotIncludingReAndFwdPrefix;
- (NSData *)loadMeetingData;
- (void)loadCachedHeaderValuesFromHeaders:(NSDictionary *)arg0;
- (void)setPriorityFromHeaders:(NSDictionary *)arg0;
- (id)subjectAndPrefixLength:(unsigned int *)arg0;
- (NSObject *)mailMessageStore;
- (void)setModSequenceNumber:(unsigned long long)arg0;
- (NSObject *)loadMeetingExternalID;
- (NSDictionary *)loadMeetingMetadata;
- (char)shouldSetSummary;
- (void)setSummary:(NSString *)arg0;

@end
