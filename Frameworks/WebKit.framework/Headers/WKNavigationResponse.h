/* Runtime dump - WKNavigationResponse
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKNavigationResponse : NSObject
{
    struct RetainPtr<WKFrameInfo> _frame;
    struct RetainPtr<NSURLRequest> _request;
    struct RetainPtr<NSURLResponse> _response;
    char _canShowMIMEType;
}

@property (readonly, nonatomic) WKFrameInfo * _frame;
@property (readonly, nonatomic) NSURLRequest * _request;
@property (readonly, nonatomic) char forMainFrame;
@property (copy, nonatomic) NSURLResponse * response;
@property (nonatomic) char canShowMIMEType;

- (NSString *)description;
- (WKFrameInfo *)_frame;
- (NSURLResponse *)response;
- (void).cxx_construct;
- (void).cxx_destruct;
- (NSURLRequest *)_request;
- (char)isForMainFrame;
- (char)canShowMIMEType;
- (void)setCanShowMIMEType:(char)arg0;
- (void)setResponse:(NSURLResponse *)arg0;

@end
