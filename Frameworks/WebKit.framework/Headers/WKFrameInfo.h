/* Runtime dump - WKFrameInfo
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKFrameInfo : NSObject <NSCopying>
{
    struct RetainPtr<NSURLRequest> _request;
    struct RetainPtr<_WKSecurityOrigin> _securityOrigin;
    char _mainFrame;
}

@property (readonly, nonatomic) char mainFrame;
@property (readonly, copy, nonatomic) NSURLRequest * request;

- (NSString *)description;
- (NSURLRequest *)request;
- (WKFrameInfo *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_construct;
- (char)isMainFrame;
- (void).cxx_destruct;
- (WKFrameInfo *)initWithWebFrameProxy:(struct WebFrameProxy *)arg0 securityOrigin:(struct FrameLoadState)arg1;
- (WKFrameInfo *)initWithWebFrameProxy:(struct WebFrameProxy *)arg0;
- (struct RetainPtr<_WKSecurityOrigin>)securityOrigin;

@end
