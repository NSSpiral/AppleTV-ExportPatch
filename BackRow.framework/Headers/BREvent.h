/* Runtime dump - BREvent
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface BREvent : NSObject
{
    NSDictionary * _eventDictionary;
    int _action;
    double _timeStamp;
    int _value;
    unsigned int _originator;
}

+ (BREvent *)eventWithAction:(int)arg0 value:(int)arg1 atTime:(double)arg2 originator:(unsigned int)arg3 eventDictionary:(NSDictionary *)arg4;
+ (BREvent *)eventWithAction:(int)arg0 value:(int)arg1;
+ (BREvent *)eventWithEvent:(NSString *)arg0 originator:(unsigned int)arg1;
+ (BREvent *)eventWithEvent:(NSString *)arg0 originator:(unsigned int)arg1 eventDictionary:(NSDictionary *)arg2;
+ (BREvent *)eventWithAction:(int)arg0 value:(int)arg1 atTime:(double)arg2 originator:(unsigned int)arg3;
+ (double)repeatDelay:(unsigned int)arg0;
+ (BREvent *)eventWithAction:(int)arg0 value:(int)arg1 atTime:(double)arg2;

- (int)remoteAction;
- (NSDictionary *)eventDictionary;
- (char)isDirectionalEvent;
- (BREvent *)initWithAction:(int)arg0 value:(int)arg1;
- (BREvent *)initWithAction:(int)arg0 value:(int)arg1 atTime:(double)arg2;
- (BREvent *)initWithAction:(int)arg0 value:(int)arg1 atTime:(double)arg2 originator:(unsigned int)arg3;
- (BREvent *)initWithAction:(int)arg0 value:(int)arg1 atTime:(double)arg2 originator:(unsigned int)arg3 eventDictionary:(NSDictionary *)arg4;
- (NSString *)_valueDescription;
- (double)nextRepeatDelay;
- (char)checkEditingEventWithBeginBlock:(id /* block */)arg0 endBlock:(/* block */ id)arg1;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (int)value;
- (NSString *)_actionDescription;
- (double)timeStamp;
- (unsigned int)originator;

@end
