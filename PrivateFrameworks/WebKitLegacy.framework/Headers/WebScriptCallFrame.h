/* Runtime dump - WebScriptCallFrame
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebScriptCallFrame : NSObject
{
    WebScriptCallFramePrivate * _private;
    id _userInfo;
}

- (JSValue *)exception;
- (void)dealloc;
- (void)setUserInfo:(NSDictionary *)arg0;
- (NSDictionary *)userInfo;
- (NSString *)functionName;
- (NSObject *)_initWithGlobalObject:(NSObject *)arg0 functionName:(struct String)arg1 exceptionValue:(struct JSValue)arg2;
- (id)_convertValueToObjcValue:(struct JSValue)arg0;

@end
