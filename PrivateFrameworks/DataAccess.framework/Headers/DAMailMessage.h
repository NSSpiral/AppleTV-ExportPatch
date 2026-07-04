/* Runtime dump - DAMailMessage
 * Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAMailMessage : NSObject <NSCoding>

- (DAMailMessage *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSDate *)date;
- (NSString *)body;
- (NSSet *)attachments;
- (NSString *)subject;
- (Class)messageClass;
- (CKDPIdentifier *)from;
- (int)importance;
- (int)bodyTruncated;
- (id)replyTo;
- (id)displayTo;
- (id)threadTopic;
- (NSObject *)conversationIndex;
- (NSArray *)to;
- (char *)remoteID;
- (NSArray *)cc;
- (NSString *)folderID;
- (int)bodySize;
- (id)meetingRequestUUID;
- (NSString *)longID;
- (char)readIsSet;
- (char)flaggedIsSet;
- (char)flagged;
- (char)verbIsSet;
- (int)lastVerb;
- (int)smimeType;
- (NSDictionary *)meetingRequestMetaData;
- (char)meetingRequestIsActionable;
- (NSObject *)conversationId;
- (NSData *)rfc822Data;
- (char)read;

@end
