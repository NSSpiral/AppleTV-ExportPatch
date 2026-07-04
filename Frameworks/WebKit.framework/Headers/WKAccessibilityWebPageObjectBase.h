/* Runtime dump - WKAccessibilityWebPageObjectBase
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKAccessibilityWebPageObjectBase : NSObject
{
    struct WebPage * m_page;
    id m_parent;
}

- (void)setWebPage:(struct WebPage *)arg0;
- (NSObject *)accessibilityRootObjectWrapper;
- (void)setRemoteParent:(NSObject *)arg0;
- (NSObject *)accessibilityFocusedUIElement;

@end
