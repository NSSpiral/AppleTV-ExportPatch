/* Runtime dump - WKNavigationAction
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKNavigationAction : NSObject
{
    struct RetainPtr<WKFrameInfo> _sourceFrame;
    struct RetainPtr<WKFrameInfo> _targetFrame;
    struct RetainPtr<NSURLRequest> _request;
    struct RetainPtr<NSURL> _originalURL;
    char _userInitiated;
    char _canHandleRequest;
    int _navigationType;
}

@property (readonly, nonatomic) NSURL * _originalURL;
@property (readonly, nonatomic) char _userInitiated;
@property (readonly, nonatomic) char _canHandleRequest;
@property (copy, nonatomic) WKFrameInfo * sourceFrame;
@property (copy, nonatomic) WKFrameInfo * targetFrame;
@property (readonly, nonatomic) int navigationType;
@property (copy, nonatomic) NSURLRequest * request;
@property (copy, nonatomic) NSURL * _originalURL;

- (NSString *)description;
- (NSURLRequest *)request;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)setTargetFrame:(WKFrameInfo *)arg0;
- (WKFrameInfo *)targetFrame;
- (NSData *)_initWithNavigationActionData:(struct NavigationActionData *)arg0;
- (void)setSourceFrame:(WKFrameInfo *)arg0;
- (WKFrameInfo *)sourceFrame;
- (void)_setOriginalURL:(NSURL *)arg0;
- (NSURL *)_originalURL;
- (char)_canHandleRequest;
- (char)_isUserInitiated;
- (int)navigationType;
- (void)setRequest:(NSURLRequest *)arg0;

@end
