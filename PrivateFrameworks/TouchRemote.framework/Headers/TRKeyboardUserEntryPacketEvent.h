/* Runtime dump - TRKeyboardUserEntryPacketEvent
 * Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRKeyboardUserEntryPacketEvent : TRPacketEvent
{
    int _commandType;
    NSString * _text;
    unsigned long long _sessionID;
}

@property (readonly, nonatomic) int commandType;
@property (readonly, nonatomic) unsigned long long sessionID;
@property (readonly, nonatomic) NSString * text;

+ (unsigned int)_packetEventType;

- (NSString *)description;
- (NSString *)text;
- (void).cxx_destruct;
- (unsigned long long)sessionID;
- (NSString *)_initWithVersion:(unsigned int)arg0 payloadDictionary:(NSDictionary *)arg1;
- (TRKeyboardUserEntryPacketEvent *)initWithCommandType:(int)arg0 sessionID:(unsigned long long)arg1 text:(NSString *)arg2;
- (int)commandType;

@end
