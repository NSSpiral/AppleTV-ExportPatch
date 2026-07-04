/* Runtime dump - WKDOMRange
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKDOMRange : NSObject
{
    struct RefPtr<WebCore::Range> _impl;
}

@property (readonly, retain) WKDOMNode * startContainer;
@property (readonly) int startOffset;
@property (readonly, retain) WKDOMNode * endContainer;
@property (readonly) int endOffset;
@property (readonly, copy) NSString * text;
@property (readonly) char isCollapsed;
@property (readonly) NSArray * textRects;

- (void)dealloc;
- (NSString *)text;
- (int)endOffset;
- (int)startOffset;
- (char)isCollapsed;
- (void)setStart:(SBJsonStreamWriterStateArrayStart *)arg0 offset:(int)arg1;
- (void)setEnd:(id)arg0 offset:(int)arg1;
- (WKDOMNode *)startContainer;
- (void)selectNodeContents:(id)arg0;
- (void).cxx_construct;
- (WKDOMRange *)initWithDocument:(NSObject *)arg0;
- (void)selectNode:(DOMHTMLSelectElement *)arg0;
- (WKDOMNode *)endContainer;
- (void).cxx_destruct;
- (WKDOMRange *)_initWithImpl:(struct Range *)arg0;
- (struct OpaqueWKBundleRangeHandle *)_copyBundleRangeHandleRef;
- (NSArray *)textRects;
- (void)collapse:(char)arg0;

@end
