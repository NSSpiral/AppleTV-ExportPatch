/* Runtime dump - AirPlayController
 * Image: /System/Library/PrivateFrameworks/MediaControlSender.framework/MediaControlSender
 */

@interface AirPlayController : NSObject <AirPlayControllerAsync, AirPlayControllerSync>
{
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _xpcName;
    NSXPCConnection * _cnx;
}

@property (copy, nonatomic) NSString * xpcName;

- (void)dealloc;
- (AirPlayController *)init;
- (void)invalidate;
- (void)performCommand:(NSObject *)arg0 qualifier:(TSDGLShaderQualifier *)arg1 params:(NSDictionary *)arg2 completion:(id /* block */)arg3;
- (void)postEvent:(NSObject *)arg0 qualifier:(TSDGLShaderQualifier *)arg1 params:(NSDictionary *)arg2 completion:(id /* block */)arg3;
- (void)getProperty:(NSObject *)arg0 qualifier:(TSDGLShaderQualifier *)arg1 completion:(id /* block */)arg2;
- (void)setProperty:(NSString *)arg0 qualifier:(TSDGLShaderQualifier *)arg1 value:(NSObject *)arg2 completion:(id /* block */)arg3;
- (NSURLConnection *)_setupConnection;
- (long)performCommand:(NSObject *)arg0 qualifier:(TSDGLShaderQualifier *)arg1 params:(NSDictionary *)arg2 response:(id *)arg3;
- (void)postEvent:(NSObject *)arg0 qualifier:(TSDGLShaderQualifier *)arg1 params:(NSDictionary *)arg2;
- (NSObject *)getProperty:(NSObject *)arg0 qualifier:(TSDGLShaderQualifier *)arg1 status:(int *)arg2;
- (long)setProperty:(NSString *)arg0 qualifier:(TSDGLShaderQualifier *)arg1 value:(NSObject *)arg2;
- (NSString *)xpcName;
- (void)setXpcName:(NSString *)arg0;

@end
