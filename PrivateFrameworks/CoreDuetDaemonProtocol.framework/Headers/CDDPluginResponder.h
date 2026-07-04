/* Runtime dump - CDDPluginResponder
 * Image: /System/Library/PrivateFrameworks/CoreDuetDaemonProtocol.framework/CoreDuetDaemonProtocol
 */

@interface CDDPluginResponder : NSObject
{
    CDDebug * _debug;
}

@property (readonly) CDDebug * debug;

- (CDDebug *)debug;
- (CDDPluginResponder *)init;
- (void).cxx_destruct;
- (NSObject *)makeStashWithId:(unsigned long long)arg0;
- (char)sendMessageOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 type:(int)arg3 error:(id *)arg4;
- (char)respondToInitOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 info:(NSDictionary *)arg3 error:(id *)arg4;
- (char)respondToAdmissionSignoffOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 status:(char)arg3 reasons:(NSMutableSet *)arg4 error:(id *)arg5;
- (char)respondToTriggerOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 info:(NSDictionary *)arg3 error:(id *)arg4;
- (char)respondToAdmissionCheckAndStartedOnConnection:(NSURLConnection *)arg0 usingMessage:(NSString *)arg1 withSequenceNumber:(unsigned long long)arg2 status:(char)arg3 reasons:(NSMutableSet *)arg4 error:(id *)arg5;

@end
