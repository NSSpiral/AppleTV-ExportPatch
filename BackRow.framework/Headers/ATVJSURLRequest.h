/* Runtime dump - ATVJSURLRequest
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVJSObject;
@interface ATVJSURLRequest : NSObject <ATVJSObject>
{
    struct OpaqueJSValue * _jsObjectRef;
    NSMutableURLRequest * _urlRequest;
}

@property (nonatomic) struct OpaqueJSValue * jsObjectRef;
@property (retain, nonatomic) NSMutableURLRequest * urlRequest;

- (ATVJSURLRequest *)initWithContext:(struct OpaqueJSContext *)arg0 urlRequest:(NSMutableURLRequest *)arg1;
- (void)setJsObjectRef:(struct OpaqueJSValue *)arg0;
- (void)dealloc;
- (struct OpaqueJSValue *)jsObjectRef;
- (void)_jsFinalize;
- (void)setUrlRequest:(NSMutableURLRequest *)arg0;
- (NSMutableURLRequest *)urlRequest;

@end
