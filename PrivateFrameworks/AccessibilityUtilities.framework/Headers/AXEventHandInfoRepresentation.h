/* Runtime dump - AXEventHandInfoRepresentation
 * Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXEventHandInfoRepresentation : NSObject <NSSecureCoding, NSCopying>
{
    unsigned char _systemGesturePossible;
    unsigned char _swipe;
    unsigned short _initialFingerCount;
    unsigned short _currentFingerCount;
    unsigned int _eventType;
    NSArray * _paths;
    unsigned int _handIdentity;
    unsigned int _handIndex;
    unsigned int _handEventMask;
    struct CGPoint _handPosition;
}

@property (nonatomic) unsigned int eventType;
@property (nonatomic) unsigned short initialFingerCount;
@property (nonatomic) unsigned short currentFingerCount;
@property (retain, nonatomic) NSArray * paths;
@property (nonatomic) unsigned char systemGesturePossible;
@property (nonatomic) unsigned int handIdentity;
@property (nonatomic) unsigned int handIndex;
@property (nonatomic) struct CGPoint handPosition;
@property (nonatomic) unsigned int handEventMask;
@property (nonatomic) unsigned char swipe;

+ (char)supportsSecureCoding;
+ (NSDictionary *)representationWithHandInfo:(struct ? *)arg0;

- (unsigned int)eventType;
- (void)dealloc;
- (AXEventHandInfoRepresentation *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (unsigned long)length;
- (AXEventHandInfoRepresentation *)copyWithZone:(struct _NSZone *)arg0;
- (void)setInitialFingerCount:(unsigned short)arg0;
- (void)setCurrentFingerCount:(unsigned short)arg0;
- (void)setSwipe:(unsigned char)arg0;
- (void)setSystemGesturePossible:(unsigned char)arg0;
- (unsigned short)initialFingerCount;
- (unsigned short)currentFingerCount;
- (unsigned char)swipe;
- (unsigned char)systemGesturePossible;
- (unsigned int)handIdentity;
- (void)setHandIdentity:(unsigned int)arg0;
- (struct CGPoint)handPosition;
- (void)setHandPosition:(struct CGPoint)arg0;
- (unsigned int)handIndex;
- (void)setHandIndex:(unsigned int)arg0;
- (unsigned int)handEventMask;
- (void)setHandEventMask:(unsigned int)arg0;
- (void)writeToHandInfo:(struct ? *)arg0;
- (NSArray *)paths;
- (void)setPaths:(NSArray *)arg0;
- (void)setEventType:(unsigned int)arg0;

@end
