/* Runtime dump - CalLogASLWriter
 * Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalLogASLWriter : CalLogWriter
{
    struct __asl_object_s * log_client;
}

+ (CalLogASLWriter *)aslNamespaces;

- (void)dealloc;
- (CalLogASLWriter *)initWithParameters:(NSDictionary *)arg0;
- (void)_configureASLClient;
- (void)_configureASLNamespaces;
- (int)aslLevelForLogLevel:(int)arg0;
- (void)write:(char *)arg0;

@end
