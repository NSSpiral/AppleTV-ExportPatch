/* Runtime dump - PLDataArrayInputStream
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLDataArrayInputStream : NSInputStream
{
    NSArray * _dataArray;
    NSMutableData * _bodyData;
    unsigned int _dataCount;
    unsigned int _dataLength;
    unsigned int _dataOffset;
    unsigned int _currentIndex;
    unsigned int _currentOffset;
    unsigned int _currentLength;
    char _openEventSent;
    unsigned int _streamStatus;
    id _delegate;
    <PLDataArrayInputStreamProgressDelegate> * _progressDelegate;
    struct __CFRunLoopSource * _rls;
    /* block */ id * _clientCallback;
    struct ? _clientContext;
}

@property (nonatomic) <PLDataArrayInputStreamProgressDelegate> * progressDelegate;

- (void)_updateProgress;
- (unsigned int)streamStatus;
- (char)getBuffer:(char * *)arg0 length:(unsigned int *)arg1;
- (char)_setCFClientFlags:(unsigned long)arg0 callback:(/* block */ id *)arg1 context:(struct ? *)arg2;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop *)arg0 forMode:(struct __CFString *)arg1;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop *)arg0 forMode:(struct __CFString *)arg1;
- (void)dealloc;
- (void)setDelegate:(<NSStreamDelegate> *)arg0;
- (<NSStreamDelegate> *)delegate;
- (void)close;
- (void)open;
- (NSError *)streamError;
- (void)scheduleInRunLoop:(NSObject *)arg0 forMode:(struct __CFString *)arg1;
- (void)removeFromRunLoop:(NSObject *)arg0 forMode:(struct __CFString *)arg1;
- (char)hasBytesAvailable;
- (int)read:(char *)arg0 maxLength:(unsigned int)arg1;
- (unsigned int)bytesRead;
- (void)_scheduleCallback;
- (void)_scheduleProgressUpdate;
- (PLDataArrayInputStream *)initWithDataArray:(NSArray *)arg0;
- (void)_streamEventTrigger;
- (<PLDataArrayInputStreamProgressDelegate> *)progressDelegate;
- (void)setProgressDelegate:(<PLDataArrayInputStreamProgressDelegate> *)arg0;
- (unsigned int)totalBytes;

@end
