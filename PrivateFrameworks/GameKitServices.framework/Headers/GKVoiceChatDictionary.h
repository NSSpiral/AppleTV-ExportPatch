/* Runtime dump - GKVoiceChatDictionary
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKVoiceChatDictionary : NSObject
{
    NSMutableDictionary * actualDictionary;
    unsigned int type;
    unsigned long orignalCallID;
}

@property unsigned long callID;
@property (readonly) unsigned long originalCallID;
@property int nonce;

+ (char)validateDictionary:(NSDictionary *)arg0;
+ (char)validateInvite:(id)arg0;
+ (char)validateReply:(id /* block */)arg0;
+ (char)validateCancel:(id)arg0;
+ (char)validateFocus:(id)arg0;
+ (NSObject *)inviteDictionaryToParticipantID:(NSObject *)arg0 fromParticipantID:(NSObject *)arg1 connectionData:(NSData *)arg2 callID:(unsigned long)arg3 focus:(char)arg4;
+ (NSData *)dictionaryFromData:(NSData *)arg0;

- (void)dealloc;
- (GKVoiceChatDictionary *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (unsigned int)type;
- (unsigned int)response;
- (NSString *)version;
- (NSString *)participantID;
- (unsigned long)callID;
- (void)setCallID:(unsigned long)arg0;
- (NSData *)connectionData;
- (char)isFocus;
- (NSObject *)fromParticipantID;
- (int)nonce;
- (NSObject *)remoteVCPartyID;
- (NSObject *)localVCPartyID;
- (char)matchesNonce:(int)arg0;
- (unsigned long)originalCallID;
- (NSDictionary *)replyDictionary:(unsigned int)arg0 connectionData:(NSData *)arg1 callID:(unsigned long)arg2 focus:(char)arg3;
- (NSDictionary *)cancelDictionary;
- (NSDictionary *)focusDictionary:(char)arg0;
- (char)isInviteDictionary;
- (char)isCancelDictionary;
- (char)isReplyDictionary;
- (char)isFocusDictionary;
- (char)matchesResponse:(NSURLResponse *)arg0;
- (void)setFromParticipantID:(NSObject *)arg0;
- (void)setNonce:(int)arg0;
- (void)setFocus:(char)arg0;
- (id)createBlob;
- (NSObject *)setLocalVCPartyID:(NSObject *)arg0;
- (NSObject *)setRemoteVCPartyID:(NSObject *)arg0;

@end
