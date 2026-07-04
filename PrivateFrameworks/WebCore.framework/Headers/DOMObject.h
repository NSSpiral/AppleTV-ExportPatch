/* Runtime dump - DOMObject
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMObject : WebScriptObject <NSCopying>
{
    struct DOMObjectInternal * _internal;
}

@property (readonly) DOMStyleSheet * sheet;

- (void)dealloc;
- (DOMObject *)init;
- (DOMObject *)copyWithZone:(struct _NSZone *)arg0;
- (DOMStyleSheet *)sheet;

@end
