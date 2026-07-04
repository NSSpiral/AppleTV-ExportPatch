/* Runtime dump - WKDOMNode
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKDOMNode : NSObject
{
    struct RefPtr<WebCore::Node> _impl;
}

@property (readonly) WKDOMDocument * document;
@property (readonly) WKDOMNode * parentNode;
@property (readonly) WKDOMNode * firstChild;
@property (readonly) WKDOMNode * lastChild;
@property (readonly) WKDOMNode * previousSibling;
@property (readonly) WKDOMNode * nextSibling;
@property (readonly) NSArray * textRects;

- (void)dealloc;
- (WKDOMNode *)lastChild;
- (WKDOMNode *)firstChild;
- (WKDOMNode *)parentNode;
- (WKDOMNode *)previousSibling;
- (void)removeChild:(NSObject *)arg0;
- (void).cxx_construct;
- (WKDOMDocument *)document;
- (WKDOMNode *)nextSibling;
- (void).cxx_destruct;
- (WKDOMNode *)_initWithImpl:(struct Node *)arg0;
- (void)insertNode:(NSObject *)arg0 before:(id)arg1;
- (struct OpaqueWKBundleNodeHandle *)_copyBundleNodeHandleRef;
- (NSArray *)textRects;
- (void)appendChild:(NSObject *)arg0;

@end
