/* Runtime dump - NSConcreteFileHandle
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConcreteFileHandle : NSFileHandle
{
    int _fd;
    unsigned short _flags;
    struct __CFRunLoopSource * _source;
    struct __CFRunLoop * _rl;
    unsigned short _activity;
    int _error;
    int _resultSocket;
    NSObject<OS_dispatch_source> * _dsrc;
    NSObject<OS_dispatch_data> * _resultData;
    NSObject<OS_dispatch_queue> * _fhQueue;
    NSObject<OS_dispatch_io> * _readChannel;
    id _readabilityHandler;
    id _writeabilityHandler;
    NSObject<OS_dispatch_source> * _readMonitoringSource;
    NSObject<OS_dispatch_source> * _writeMonitoringSource;
    NSObject<OS_dispatch_queue> * _monitoringQueue;
}

- (NSConcreteFileHandle *)initWithPath:(NSString *)arg0 flags:(int)arg1 createMode:(int)arg2 error:(id *)arg3;
- (NSConcreteFileHandle *)initWithPath:(NSString *)arg0 flags:(int)arg1 createMode:(int)arg2;
- (NSConcreteFileHandle *)initWithURL:(NSString *)arg0 flags:(int)arg1 createMode:(int)arg2 error:(id *)arg3;
- (NSData *)availableData;
- (NSString *)readDataToEndOfFile;
- (unsigned long long)offsetInFile;
- (id /* block */)writeabilityHandler;
- (void)setWriteabilityHandler:(id /* block */)arg0;
- (id /* block */)readabilityHandler;
- (void)setReadabilityHandler:(id /* block */)arg0;
- (void)_locked_clearHandler:(id *)arg0 forSource:(/* block */ id)arg1;
- (void)_cancelDispatchSources;
- (void)_commonDealloc;
- (void)performActivity:(int)arg0 modes:(NSArray *)arg1;
- (void)readInBackgroundAndNotifyForModes:(NSArray *)arg0;
- (void)readToEndOfFileInBackgroundAndNotifyForModes:(NSArray *)arg0;
- (void)acceptConnectionInBackgroundAndNotifyForModes:(NSArray *)arg0;
- (void)waitForDataInBackgroundAndNotifyForModes:(NSArray *)arg0;
- (id)_monitor:(int)arg0;
- (unsigned int)readDataOfLength:(unsigned int)arg0 buffer:(char *)arg1;
- (void)readInBackgroundAndNotify;
- (void)readToEndOfFileInBackgroundAndNotify;
- (void)acceptConnectionInBackgroundAndNotify;
- (void)waitForDataInBackgroundAndNotify;
- (void)dealloc;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSConcreteFileHandle *)init;
- (NSConcreteFileHandle *)copyWithZone:(struct _NSZone *)arg0;
- (id)readDataOfLength:(unsigned int)arg0;
- (NSNumber *)port;
- (int)fileDescriptor;
- (NSConcreteFileHandle *)initWithFileDescriptor:(int)arg0 closeOnDealloc:(char)arg1;
- (void)setPort:(NSNumber *)arg0;
- (void)synchronizeFile;
- (void)truncateFileAtOffset:(unsigned long long)arg0;
- (NSConcreteFileHandle *)initWithFileDescriptor:(int)arg0;
- (unsigned long long)seekToEndOfFile;
- (void)writeData:(NSData *)arg0;
- (void)closeFile;
- (void)seekToFileOffset:(unsigned long long)arg0;
- (void)finalize;

@end
