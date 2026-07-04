/* Runtime dump - WebEvent
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebEvent : NSObject
{
    int _type;
    double _timestamp;
    struct CGPoint _locationInWindow;
    NSString * _characters;
    NSString * _charactersIgnoringModifiers;
    unsigned int _modifierFlags;
    char _keyRepeating;
    char _popupVariant;
    unsigned int _keyboardFlags;
    unsigned short _keyCode;
    char _tabKey;
    int _characterSet;
    float _deltaX;
    float _deltaY;
    unsigned int _touchCount;
    NSArray * _touchLocations;
    NSArray * _touchIdentifiers;
    NSArray * _touchPhases;
    char _isGesture;
    float _gestureScale;
    float _gestureRotation;
    char _wasHandled;
}

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) struct CGPoint locationInWindow;
@property (readonly, retain, nonatomic) NSString * characters;
@property (readonly, retain, nonatomic) NSString * charactersIgnoringModifiers;
@property (readonly, nonatomic) unsigned int modifierFlags;
@property (readonly, nonatomic) char keyRepeating;
@property (readonly, nonatomic) char popupVariant;
@property (readonly, nonatomic) unsigned int keyboardFlags;
@property (readonly, nonatomic) unsigned short keyCode;
@property (readonly, nonatomic) char tabKey;
@property (readonly, nonatomic) int characterSet;
@property (readonly, nonatomic) float deltaX;
@property (readonly, nonatomic) float deltaY;
@property (readonly, nonatomic) unsigned int touchCount;
@property (readonly, retain, nonatomic) NSArray * touchLocations;
@property (readonly, retain, nonatomic) NSArray * touchIdentifiers;
@property (readonly, retain, nonatomic) NSArray * touchPhases;
@property (readonly, nonatomic) char isGesture;
@property (readonly, nonatomic) float gestureScale;
@property (readonly, nonatomic) float gestureRotation;
@property (nonatomic) char wasHandled;

- (void)dealloc;
- (NSString *)description;
- (double)timestamp;
- (int)type;
- (unsigned int)modifierFlags;
- (NSString *)characters;
- (WebEvent *)initWithKeyEventType:(int)arg0 timeStamp:(double)arg1 characters:(NSString *)arg2 charactersIgnoringModifiers:(NSString *)arg3 modifiers:(unsigned int)arg4 isRepeating:(char)arg5 withFlags:(unsigned int)arg6 keyCode:(unsigned short)arg7 isTabKey:(char)arg8 characterSet:(int)arg9;
- (WebEvent *)initWithMouseEventType:(int)arg0 timeStamp:(double)arg1 location:(struct CGPoint)arg2;
- (char)wasHandled;
- (WebEvent *)initWithScrollWheelEventWithTimeStamp:(double)arg0 location:(struct CGPoint)arg1 deltaX:(float)arg2 deltaY:(float)arg3;
- (struct CGPoint)locationInWindow;
- (NSArray *)touchLocations;
- (NSArray *)touchIdentifiers;
- (NSArray *)touchPhases;
- (void).cxx_construct;
- (WebEvent *)initWithTouchEventType:(int)arg0 timeStamp:(double)arg1 location:(struct CGPoint)arg2 modifiers:(unsigned int)arg3 touchCount:(unsigned int)arg4 touchLocations:(NSArray *)arg5 touchIdentifiers:(NSArray *)arg6 touchPhases:(NSArray *)arg7 isGesture:(char)arg8 gestureScale:(float)arg9 gestureRotation:(float)arg10;
- (NSString *)_typeDescription;
- (int)characterSet;
- (unsigned short)keyCode;
- (float)deltaX;
- (float)deltaY;
- (void)setWasHandled:(char)arg0;
- (NSString *)charactersIgnoringModifiers;
- (float)gestureScale;
- (float)gestureRotation;
- (char)isGesture;
- (unsigned int)touchCount;
- (char)isKeyRepeating;
- (NSString *)_touchPhaseDescription:(int)arg0;
- (NSString *)_characterSetDescription;
- (NSString *)_touchLocationsDescription:(NSString *)arg0;
- (NSString *)_touchIdentifiersDescription;
- (NSString *)_touchPhasesDescription;
- (NSString *)_eventDescription;
- (WebEvent *)initWithKeyEventType:(int)arg0 timeStamp:(double)arg1 characters:(NSString *)arg2 charactersIgnoringModifiers:(NSString *)arg3 modifiers:(unsigned int)arg4 isRepeating:(char)arg5 isPopupVariant:(char)arg6 keyCode:(unsigned short)arg7 isTabKey:(char)arg8 characterSet:(int)arg9;
- (NSString *)_modiferFlagsDescription;
- (char)isPopupVariant;
- (unsigned int)keyboardFlags;
- (char)isTabKey;

@end
