/* Runtime dump - WKEditCommandObjC
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKEditCommandObjC : NSObject
{
    struct RefPtr<WebKit::WebEditCommandProxy> m_command;
}

- (struct WebEditCommandProxy *)command;
- (void).cxx_construct;
- (void).cxx_destruct;
- (WKEditCommandObjC *)initWithWebEditCommandProxy:(struct PassRefPtr<WebKit::WebEditCommandProxy>)arg0;

@end
