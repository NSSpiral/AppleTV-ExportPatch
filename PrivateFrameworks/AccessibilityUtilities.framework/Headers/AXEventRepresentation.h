/* Runtime dump - AXEventRepresentation
 * Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXEventRepresentation : NSObject <NSSecureCoding, NSCopying>
{
    char _isBuiltIn;
    char _isGeneratedEvent;
    unsigned int _type;
    int _subtype;
    int _flags;
    AXEventHandInfoRepresentation * _handInfo;
    AXEventKeyInfoRepresentation * _keyInfo;
    NSString * _clientId;
    unsigned int _taskPort;
    int _pid;
    NSData * _HIDAttributeData;
    unsigned int _contextId;
    void * _window;
    NSData * _data;
    struct CGPoint _location;
    struct CGPoint _windowLocation;
    unsigned long long _time;
    unsigned long long _senderID;
    unsigned long long _HIDTime;
    unsigned long long _additionalFlags;
}

@property (nonatomic) unsigned int type;
@property (nonatomic) int subtype;
@property (nonatomic) struct CGPoint location;
@property (nonatomic) struct CGPoint windowLocation;
@property (nonatomic) unsigned long long time;
@property (nonatomic) int flags;
@property (nonatomic) unsigned long long senderID;
@property (retain, nonatomic) AXEventHandInfoRepresentation * handInfo;
@property (retain, nonatomic) AXEventKeyInfoRepresentation * keyInfo;
@property (retain, nonatomic) NSString * clientId;
@property (nonatomic) unsigned int taskPort;
@property (nonatomic) int pid;
@property (nonatomic) unsigned long long HIDTime;
@property (retain, nonatomic) NSData * HIDAttributeData;
@property (nonatomic) unsigned long long additionalFlags;
@property (nonatomic) unsigned int contextId;
@property (nonatomic) char isBuiltIn;
@property (nonatomic) char isGeneratedEvent;
@property (nonatomic) void * window;
@property (retain, nonatomic) NSData * data;

+ (char)supportsSecureCoding;
+ (NSObject *)representationWithHIDEvent:(struct __IOHIDEvent *)arg0 hidStreamIdentifier:(NSString *)arg1;
+ (NSObject *)representationWithEventRecord:(struct ? *)arg0;
+ (NSObject *)representationWithType:(unsigned int)arg0 subtype:(int)arg1 time:(unsigned long long)arg2 location:(struct CGPoint)arg3 windowLocation:(struct CGPoint)arg4 handInfo:(AXEventHandInfoRepresentation *)arg5;
+ (NSDictionary *)_digitizerRepresentation:(struct __IOHIDEvent *)arg0 hidStreamIdentifier:(NSString *)arg1;
+ (NSObject *)_keyboardButtonEvent:(struct __IOHIDEvent *)arg0;
+ (NSData *)representationWithData:(NSData *)arg0;
+ (NSObject *)representationWithLocation:(struct CGPoint)arg0 windowLocation:(struct CGPoint)arg1 handInfo:(AXEventHandInfoRepresentation *)arg2;
+ (NSObject *)keyRepresentationWithType:(unsigned int)arg0;
+ (NSObject *)buttonRepresentationWithType:(unsigned int)arg0;
+ (NSObject *)touchRepresentationWithHandType:(unsigned int)arg0 location:(struct CGPoint)arg1;

- (void)setFlags:(int)arg0;
- (void)dealloc;
- (AXEventRepresentation *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void *)window;
- (NSString *)description;
- (void)setWindow:(void *)arg0;
- (void)setType:(unsigned int)arg0;
- (unsigned int)type;
- (int)subtype;
- (unsigned int)contextId;
- (AXEventRepresentation *)copyWithZone:(struct _NSZone *)arg0;
- (NSData *)data;
- (void)setData:(NSData *)arg0;
- (void)setSubtype:(int)arg0;
- (void)setTime:(unsigned long long)arg0;
- (unsigned long long)time;
- (struct CGPoint)location;
- (void)setContextId:(unsigned int)arg0;
- (struct __IOHIDEvent *)newHIDEventRef;
- (struct ? *)newEventRecord;
- (unsigned int)taskPort;
- (void)setTaskPort:(unsigned int)arg0;
- (AXEventHandInfoRepresentation *)handInfo;
- (void)setWindowLocation:(struct CGPoint)arg0;
- (void)setHandInfo:(AXEventHandInfoRepresentation *)arg0;
- (void)setIsGeneratedEvent:(char)arg0;
- (void)setSenderID:(unsigned long long)arg0;
- (void)setKeyInfo:(AXEventKeyInfoRepresentation *)arg0;
- (void)setHIDAttributeData:(NSData *)arg0;
- (void)setIsBuiltIn:(char)arg0;
- (void)setHIDTime:(unsigned long long)arg0;
- (unsigned long long)HIDTime;
- (struct __IOHIDEvent *)_newHandHIDEventRef;
- (struct __IOHIDEvent *)_newButtonHIDEventRef;
- (struct __IOHIDEvent *)_newKeyboardHIDEventRef;
- (char)isBuiltIn;
- (NSData *)HIDAttributeData;
- (unsigned long long)senderID;
- (AXEventKeyInfoRepresentation *)keyInfo;
- (unsigned long long)additionalFlags;
- (char)isGeneratedEvent;
- (struct CGPoint)windowLocation;
- (void)setAdditionalFlags:(unsigned long long)arg0;
- (unsigned int)_contextIDFromHIDEvent:(struct __IOHIDEvent *)arg0;
- (NSDictionary *)normalizedEventRepresentation:(char)arg0 scale:(char)arg1;
- (NSDictionary *)fakeTouchScaleEventRepresentation:(char)arg0;
- (NSDictionary *)denormalizedEventRepresentation:(char)arg0 descale:(char)arg1;
- (struct __GSEvent *)newGSEventRef;
- (unsigned int)firstPathContextId;
- (int)pid;
- (int)flags;
- (void)setPid:(int)arg0;
- (void)setLocation:(struct CGPoint)arg0;
- (NSData *)dataRepresentation;
- (void)setClientId:(NSString *)arg0;
- (NSString *)clientId;

@end
