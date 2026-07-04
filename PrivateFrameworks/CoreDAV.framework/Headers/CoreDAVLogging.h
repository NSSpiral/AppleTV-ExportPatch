/* Runtime dump - CoreDAVLogging
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVLogging : NSObject
{
    struct __CFDictionary * _logDelegates;
    NSObject<OS_dispatch_queue> * _delegateMuckingQueue;
}

+ (CoreDAVLogging *)sharedLogging;

- (void)dealloc;
- (CoreDAVLogging *)init;
- (NSObject *)_delegatesToLogForProvider:(NSObject *)arg0;
- (char)shouldLogAtLevel:(int)arg0 forAccountInfoProvider:(NSObject *)arg1;
- (char)_shouldOutputAtLevel:(int)arg0 forAccountInfoProvider:(NSObject *)arg1;
- (void)addLogDelegate:(NSObject *)arg0 forAccountInfoProvider:(NSObject *)arg1;
- (void)removeLogDelegate:(NSObject *)arg0 forAccountInfoProvider:(NSObject *)arg1;
- (NSObject *)delegatesToLogTransmittedDataForAccountInfoProvider:(NSObject *)arg0;
- (void)logDiagnosticForProvider:(NSObject *)arg0 withLevel:(int)arg1 format:(NSString *)arg2 args:(void *)arg3;

@end
