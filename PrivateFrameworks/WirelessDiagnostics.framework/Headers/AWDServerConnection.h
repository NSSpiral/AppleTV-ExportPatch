/* Runtime dump - AWDServerConnection
 * Image: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/WirelessDiagnostics
 */

@interface AWDServerConnection : NSObject
{
    struct AWDServerConnection * fServerConnection;
}

- (void)dealloc;
- (NSString *)newMetricContainerWithIdentifier:(unsigned long)arg0;
- (unsigned long long)getAWDTimestamp;
- (char)submitMetric:(NSObject *)arg0;
- (AWDServerConnection *)initWithComponentId:(unsigned long)arg0 andBlockOnConfiguration:(char)arg1;
- (char)registerQueriableMetricCallback:(id /* block */)arg0 forIdentifier:(/* block */ id)arg1;
- (char)registerConfigChangeCallback:(id /* block */)arg0;
- (char)registerQueriableMetric:(unsigned long)arg0 callback:(id /* block */)arg1;
- (AWDServerConnection *)initWithComponentId:(unsigned long)arg0;
- (void)flushToQueue:(struct dispatch_queue_s *)arg0 block:(id /* block */)arg1;

@end
