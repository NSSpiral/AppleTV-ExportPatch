/* Runtime dump - ATVJSTimerContext
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVJSContext;
@interface ATVJSTimerContext : NSObject
{
    ATVJSContext * _context;
    struct OpaqueJSValue * _callback;
    struct OpaqueJSValue * _thisObject;
    struct OpaqueJSValue * * _args;
    unsigned long _argCount;
}

@property (readonly, retain) ATVJSContext * context;
@property (readonly, nonatomic) struct OpaqueJSValue * callback;
@property (readonly, nonatomic) struct OpaqueJSValue * thisObject;
@property (readonly, nonatomic) struct OpaqueJSValue * * args;
@property (readonly, nonatomic) unsigned long argCount;

- (ATVJSTimerContext *)initWithContext:(struct OpaqueJSContext *)arg0 callback:(struct OpaqueJSValue *)arg1 thisObject:(struct OpaqueJSValue *)arg2 args:(struct OpaqueJSValue * *)arg3 argCount:(struct OpaqueJSValue *)arg4;
- (struct OpaqueJSValue *)thisObject;
- (unsigned long)argCount;
- (struct OpaqueJSValue * *)args;
- (void)dealloc;
- (ATVJSContext *)context;
- (struct OpaqueJSValue *)callback;

@end
