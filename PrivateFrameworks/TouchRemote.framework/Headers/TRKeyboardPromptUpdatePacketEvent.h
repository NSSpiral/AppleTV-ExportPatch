/* Runtime dump - TRKeyboardPromptUpdatePacketEvent
 * Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRKeyboardPromptUpdatePacketEvent : TRPacketEvent
{
    char _secureText;
    int _keyboardType;
    NSString * _subtitle;
    NSString * _text;
    NSString * _title;
    int _updateType;
    unsigned long long _sessionID;
}

@property (readonly, nonatomic) int keyboardType;
@property (readonly, nonatomic) char secureText;
@property (readonly, nonatomic) unsigned long long sessionID;
@property (readonly, nonatomic) NSString * subtitle;
@property (readonly, nonatomic) NSString * text;
@property (readonly, nonatomic) NSString * title;
@property (readonly, nonatomic) int updateType;

+ (unsigned int)_packetEventType;

- (NSString *)description;
- (NSString *)title;
- (NSString *)text;
- (int)keyboardType;
- (NSString *)subtitle;
- (void).cxx_destruct;
- (int)updateType;
- (unsigned long long)sessionID;
- (char)isSecureText;
- (NSString *)_initWithVersion:(unsigned int)arg0 payloadDictionary:(NSDictionary *)arg1;
- (TRKeyboardPromptUpdatePacketEvent *)initWithKeyboardType:(int)arg0 secureText:(char)arg1 sessionID:(unsigned long long)arg2 subtitle:(NSString *)arg3 text:(NSString *)arg4 title:(NSString *)arg5 updateType:(int)arg6;

@end
