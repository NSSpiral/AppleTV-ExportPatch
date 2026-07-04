/* Runtime dump - WebScriptCallFramePrivate
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebScriptCallFramePrivate : NSObject
{
    WebScriptObject * globalObject;
    struct String functionName;
    struct JSValue exceptionValue;
}

- (void)dealloc;
- (void).cxx_construct;
- (void).cxx_destruct;

@end
