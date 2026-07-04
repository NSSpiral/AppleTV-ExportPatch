/* Runtime dump - GKVoiceChatSessionMessage
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKVoiceChatSessionMessage : GKOOBMessage
{
    NSData * _data;
    unsigned int _conferenceID;
    unsigned int _subtype;
}

- (void)dealloc;
- (GKVoiceChatSessionMessage *)init;
- (NSDictionary *)payload;
- (unsigned int)subtype;
- (NSData *)data;
- (GKVoiceChatSessionMessage *)initWithBytes:(void *)arg0 length:(void)arg1;
- (char)_checkType:(unsigned short)arg0;
- (char)_checkSize:(unsigned long)arg0;
- (unsigned int)conferenceID;
- (GKVoiceChatSessionMessage *)initWithPayload:(NSDictionary *)arg0 conferenceID:(unsigned int)arg1 subtype:(unsigned int)arg2;

@end
