/* Runtime dump - MMCSDuetReporter
 * Image: /System/Library/PrivateFrameworks/MMCS.framework/MMCS
 */

@interface MMCSDuetReporter : NSObject
{
    CDAttribute * _attribute;
    NSObject * _value;
    NSNumber * _xferID;
}

+ (NSURLSession *)session;
+ (void)associateAttributeToBudgets:(id)arg0 withSession:(NSObject *)arg1;
+ (NSObject *)bundleIDAttribute;
+ (NSObject *)nonDiscretionaryAttribute;

- (void).cxx_destruct;
- (MMCSDuetReporter *)initWithBundleIdentifier:(NSString *)arg0 discretionary:(char)arg1;
- (void)transferStarted;
- (void)updateProgressWithBytesSent:(unsigned long long)arg0 bytesReceived:(unsigned long long)arg1 cellularBytesSent:(unsigned long long)arg2 cellularBytesReceived:(unsigned long long)arg3;
- (void)transferStopped;
- (MMCSDuetReporter *)initWithSecondaryIdentifier:(NSString *)arg0;

@end
