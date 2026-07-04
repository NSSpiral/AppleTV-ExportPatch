/* Runtime dump - ATVJSXMLHttpRequest
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVJSObject;

@class LTDownloadTestConnection;
@interface ATVJSXMLHttpRequest : NSObject <ATVJSObject>
{
    ATVJavaScriptContext * _context;
    char _isObjectProtected;
    char _async;
    NSString * _user;
    NSString * _password;
    char _isStoreRequest;
    struct OpaqueJSValue * _jsObjectRef;
    unsigned int _readyState;
    unsigned int _statusCode;
    NSString * _statusText;
    NSMutableURLRequest * _urlRequest;
    NSURLConnection * _urlConnection;
    NSHTTPURLResponse * _urlResponse;
    NSMutableData * _receivedData;
}

@property (nonatomic) struct OpaqueJSValue * jsObjectRef;
@property (nonatomic) char isStoreRequest;
@property (nonatomic) unsigned int readyState;
@property (nonatomic) unsigned int statusCode;
@property (copy, nonatomic) NSString * statusText;
@property (retain, nonatomic) NSMutableURLRequest * urlRequest;
@property (retain, nonatomic) NSURLConnection * urlConnection;
@property (retain, nonatomic) NSHTTPURLResponse * urlResponse;
@property (retain, nonatomic) NSMutableData * receivedData;

+ (void)_immediateUpdateJSObjectState:(struct OpaqueJSContext *)arg0 object:(struct OpaqueJSValue *)arg1 readyState:(unsigned int)arg2 statusCode:(unsigned int)arg3 statusText:(NSString *)arg4 shouldCallOnReadyStateChange:(char)arg5;
+ (void)registerClassInContext:(struct OpaqueJSContext *)arg0;

- (void)setJsObjectRef:(struct OpaqueJSValue *)arg0;
- (ATVJSXMLHttpRequest *)initWithContext:(struct OpaqueJSContext *)arg0 jsObject:(struct OpaqueJSValue *)arg1 isStoreRequest:(char)arg2;
- (void)_unprotectAndUpdateJSObjectInContext:(struct OpaqueJSContext *)arg0;
- (ATVJSXMLHttpRequest *)initWithContext:(struct OpaqueJSContext *)arg0 isStoreRequest:(char)arg1;
- (ATVJSXMLHttpRequest *)initWithContext:(struct OpaqueJSContext *)arg0 jsObject:(struct OpaqueJSValue *)arg1;
- (void)openWithMethod:(NSString *)arg0 url:(NSURL *)arg1 async:(char)arg2 user:(NSString *)arg3 password:(NSString *)arg4 jsContext:(struct OpaqueJSContext *)arg5;
- (void)sendWithData:(NSData *)arg0 jsContext:(struct OpaqueJSContext *)arg1;
- (void)abortWithContext:(struct OpaqueJSContext *)arg0;
- (void)_jsObjectWasFinalized;
- (char)isStoreRequest;
- (void)setIsStoreRequest:(char)arg0;
- (void)dealloc;
- (unsigned int)statusCode;
- (void)connection:(LTDownloadTestConnection *)arg0 didFailWithError:(NSError *)arg1;
- (void)connection:(NSURLConnection *)arg0 didReceiveData:(NSData *)arg1;
- (void)connectionDidFinishLoading:(LTDownloadTestConnection *)arg0;
- (void)connection:(NSURLConnection *)arg0 didReceiveResponse:(NSURLResponse *)arg1;
- (struct OpaqueJSValue *)jsObjectRef;
- (void)setStatusCode:(unsigned int)arg0;
- (NSString *)statusText;
- (void)setStatusText:(NSString *)arg0;
- (void)setReadyState:(unsigned int)arg0;
- (NSHTTPURLResponse *)urlResponse;
- (NSMutableData *)receivedData;
- (NSURLConnection *)urlConnection;
- (void)setUrlConnection:(NSURLConnection *)arg0;
- (void)setUrlRequest:(NSMutableURLRequest *)arg0;
- (void)setReceivedData:(NSMutableData *)arg0;
- (void)setUrlResponse:(NSHTTPURLResponse *)arg0;
- (NSMutableURLRequest *)urlRequest;
- (unsigned int)readyState;

@end
