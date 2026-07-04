/* Runtime dump - TLFileLoggingController
 * Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLFileLoggingController : NSObject
{
    NSObject<OS_dispatch_queue> * _serialLoggingQueue;
}

@property (nonatomic) NSObject<OS_dispatch_queue> * _serialLoggingQueue;

+ (TLFileLoggingController *)sharedFileLoggingController;

- (void)dealloc;
- (TLFileLoggingController *)init;
- (void)logMessage:(NSString *)arg0 fileName:(char *)arg1 functionName:(char *)arg2 lineNumber:(unsigned long)arg3;
- (void)_setSerialLoggingQueue:(NSObject *)arg0;
- (NSObject<OS_dispatch_queue> *)_serialLoggingQueue;
- (void)_registerLoggingConfiguration;
- (id)_loggingDirectory;

@end
