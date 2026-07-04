/* Runtime dump - WebScriptWorld
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebScriptWorld : NSObject
{
    WebScriptWorldPrivate * _private;
}

+ (WebScriptWorld *)standardWorld;
+ (VKWorld *)world;
+ (WebScriptWorld *)findOrCreateWorld:(struct DOMWrapperWorld *)arg0;
+ (NSString *)scriptWorldForGlobalContext:(struct OpaqueJSContext *)arg0;
+ (NSString *)scriptWorldForJavaScriptContext:(NSObject *)arg0;

- (void)dealloc;
- (WebScriptWorld *)init;
- (WebScriptWorld *)initWithWorld:(struct PassRefPtr<WebCore::DOMWrapperWorld>)arg0;
- (void)unregisterWorld;

@end
