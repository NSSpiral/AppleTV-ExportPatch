/* Runtime dump - MSServerSideConfigProtocol
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSServerSideConfigProtocol : NSObject
{
    <MSServerSideConfigProtocolDelegate> * _delegate;
    NSString * _personID;
    NSURL * _configURL;
    struct __MSSSCPCContext _context;
}

@property (nonatomic) <MSServerSideConfigProtocolDelegate> * delegate;
@property (readonly, nonatomic) NSString * personID;

- (void)dealloc;
- (void)setDelegate:(<MSServerSideConfigProtocolDelegate> *)arg0;
- (<MSServerSideConfigProtocolDelegate> *)delegate;
- (void).cxx_destruct;
- (MSServerSideConfigProtocol *)initWithPersonID:(NSString *)arg0 baseURL:(NSURL *)arg1;
- (void)_didFailAuthenticationWithError:(NSError *)arg0;
- (void)queryConfiguration;
- (void)_didFinishWithResponse:(NSURLResponse *)arg0 error:(NSError *)arg1;
- (NSString *)personID;
- (void)abort;

@end
