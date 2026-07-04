/* Runtime dump - MFMailMessageRelationshipAnalyzer
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMailMessageRelationshipAnalyzer : NSObject
{
    NSArray * _messages;
    NSArray * _relationships;
}

+ (MFMailMessageRelationshipAnalyzer *)myEmailAddresses;
+ (MFMailMessageRelationshipAnalyzer *)analyzeMessages:(id)arg0 myEmailAddresses:(id)arg1;
+ (NSString *)sendersOfMessage:(NSString *)arg0;
+ (unsigned int)relationOfMessage:(NSString *)arg0 toMessage:(NSString *)arg1 previousSenders:(id)arg2 myEmailAddresses:(id)arg3;
+ (char)isMessage:(NSString *)arg0 responseToMessage:(NSString *)arg1 previousSenders:(id)arg2 myEmailAddresses:(id)arg3;
+ (char)isMessageDraft:(id)arg0;
+ (char)isMessage:(NSString *)arg0 forwardOfMessage:(NSString *)arg1 myEmailAddresses:(id)arg2;
+ (char)isMessage:(NSString *)arg0 sentByAddress:(NSString *)arg1;
+ (char)isMessage:(NSString *)arg0 addressedToPreviousSender:(NSObject *)arg1;
+ (char)isMessage:(NSString *)arg0 addressedToMailingListForMessage:(NSString *)arg1;
+ (NSString *)recipientsOfMessage:(NSString *)arg0;
+ (MFMailMessageRelationshipAnalyzer *)analysisOfConversation:(id)arg0;
+ (unsigned int)relationOfMessage:(NSString *)arg0 toMessage:(NSString *)arg1;

- (void)dealloc;
- (MFMailMessageRelationshipAnalyzer *)initWithMessages:(NSArray *)arg0 relationships:(NSArray *)arg1;
- (unsigned int)relationOfMessage:(NSString *)arg0;

@end
