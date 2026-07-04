/* Runtime dump - ATVJSRoot
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVJSObject;

@class ATVJSContext;
@interface ATVJSRoot : NSObject <ATVJSObject>
{
    NSMutableDictionary * _dateFormatterCache;
    ATVJSContext * _context;
    struct OpaqueJSValue * _jsObjectRef;
    NSMutableDictionary * _timers;
    NSLock * _timersLock;
}

@property (nonatomic) struct OpaqueJSValue * jsObjectRef;
@property (retain) ATVJSContext * context;
@property (retain, nonatomic) NSMutableDictionary * timers;
@property (retain, nonatomic) NSLock * timersLock;

- (void)setJsObjectRef:(struct OpaqueJSValue *)arg0;
- (ATVJSRoot *)initWithContext:(ATVJSContext *)arg0 jsContext:(struct OpaqueJSContext *)arg1;
- (NSLock *)timersLock;
- (void)setTimersLock:(NSLock *)arg0;
- (NSTimer *)_startTimer:(double)arg0 repeating:(char)arg1 context:(struct OpaqueJSContext *)arg2 callback:(struct OpaqueJSValue *)arg3 thisObject:(struct OpaqueJSValue *)arg4 args:(struct OpaqueJSValue * *)arg5 argCount:(struct OpaqueJSValue *)arg6;
- (id)_localtime:(id)arg0 context:(struct OpaqueJSContext *)arg1 exception:(struct OpaqueJSValue * *)arg2;
- (void)_timerFired:(id)arg0;
- (void)dealloc;
- (ATVJSContext *)context;
- (void)setContext:(ATVJSContext *)arg0;
- (struct OpaqueJSValue *)jsObjectRef;
- (void)_jsFinalize;
- (void)_clearTimer:(NSObject *)arg0;
- (NSMutableDictionary *)timers;
- (void)setTimers:(NSMutableDictionary *)arg0;

@end
