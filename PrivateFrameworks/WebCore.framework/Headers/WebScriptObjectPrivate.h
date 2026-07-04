/* Runtime dump - WebScriptObjectPrivate
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebScriptObjectPrivate : NSObject
{
    struct JSObject * imp;
    struct RootObject * rootObject;
    struct RootObject * originRootObject;
    char isCreatedByDOMWrapper;
}

@end
