/* Runtime dump - PLTelephonyConnection
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLTelephonyConnection : NSObject
{
    struct __CTServerConnection * connection;
    struct __CFMachPort * ctServerPort;
    struct __CFRunLoopSource * ctServerSource;
    PLAgent * _observerAgent;
}

@property (retain) PLAgent * observerAgent;
@property (readonly, nonatomic) struct __CTServerConnection * connection;

+ (PLTelephonyConnection *)sharedTelephonyConnection;

- (PLTelephonyConnection *)init;
- (void)invalidate;
- (void).cxx_destruct;
- (struct __CTServerConnection *)connection;
- (NSString *)getRemotePortNameWithLocalName:(NSString *)arg0;
- (NSString *)activeBand;
- (void)setObserverAgent:(PLAgent *)arg0;
- (void)registerCallback:(/* block */ id *)arg0 forTelephonyNotification:(struct __CFString *)arg1;
- (void)requestBasebandStateDurationReport;
- (NSNumber *)wakeReason;
- (void)getRAT:(id *)arg0 preferredRAT:(id *)arg1 campedRAT:(id *)arg2;
- (void)getSignalStrength:(int *)arg0 asPercentage:(int *)arg1 withBars:(int *)arg2;
- (id)currentCallStatus;
- (NSObject *)getProperty:(NSObject *)arg0 forTrace:(OITSUBacktrace *)arg1;
- (NSString *)humanReadableRATName:(struct __CFString *)arg0;
- (void)teardownConnection;
- (id)humanReadableCallStatus:(int)arg0;
- (PLAgent *)observerAgent;
- (void)enableDiagLogging;
- (char)requestBasebandStateDump:(id)arg0;
- (char)requestBasebandCoreDump:(id)arg0;
- (void)deregisterForAllTelephonyNotifications;

@end
