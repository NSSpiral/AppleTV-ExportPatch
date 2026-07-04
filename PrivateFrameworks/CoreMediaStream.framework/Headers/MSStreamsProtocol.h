/* Runtime dump - MSStreamsProtocol
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSStreamsProtocol : NSObject
{
    <MSStreamsProtocolDelegate> * _delegate;
    NSString * _personID;
}

@property (nonatomic) <MSStreamsProtocolDelegate> * delegate;
@property (readonly, nonatomic) NSString * personID;
@property (readonly, weak, nonatomic) NSURL * putURL;
@property (readonly, weak, nonatomic) NSURL * getURL;
@property (readonly, weak, nonatomic) NSURL * resetURL;
@property (readonly, weak, nonatomic) NSURL * reauthorizeURL;
@property (readonly, weak, nonatomic) NSURL * uploadCompleteURL;
@property (readonly, weak, nonatomic) NSURL * deleteURL;

- (void)setDelegate:(<MSStreamsProtocolDelegate> *)arg0;
- (<MSStreamsProtocolDelegate> *)delegate;
- (void).cxx_destruct;
- (MSStreamsProtocol *)initWithPersonID:(NSString *)arg0 baseURL:(NSURL *)arg1;
- (id)deviceInfoDict;
- (void)_refreshAuthTokenForContext:(struct __MSSPCContext *)arg0;
- (NSURL *)putURL;
- (NSURL *)uploadCompleteURL;
- (void)_didFindServerSideConfigurationVersion:(NSString *)arg0;
- (void)_didReceiveRetryAfterDate:(NSDate *)arg0;
- (NSURL *)getURL;
- (NSURL *)resetURL;
- (NSURL *)reauthorizeURL;
- (NSURL *)deleteURL;
- (NSString *)personID;
- (void)abort;

@end
