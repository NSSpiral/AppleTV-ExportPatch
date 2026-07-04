/* Runtime dump - MSResetServer
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSResetServer : NSObject <MSResetServerProtocolDelegate>
{
    NSString * _personID;
    MSResetServerProtocol * _protocol;
    MSMediaStreamDaemon * _daemon;
    id _selfReference;
}

@property (readonly, nonatomic) NSString * personID;
@property (nonatomic) MSMediaStreamDaemon * daemon;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)resetServerObjectWithPersonID:(NSString *)arg0 baseURL:(NSURL *)arg1;

- (void).cxx_destruct;
- (MSMediaStreamDaemon *)daemon;
- (void)setDaemon:(MSMediaStreamDaemon *)arg0;
- (MSResetServer *)initWithPersonID:(NSString *)arg0 baseURL:(NSURL *)arg1;
- (void)resetServerProtocol:(NSObject *)arg0 didFinishWithError:(NSError *)arg1;
- (void)resetServerProtocol:(NSObject *)arg0 didReceiveAuthenticationError:(char)arg1;
- (void)resetServer;
- (NSString *)personID;

@end
