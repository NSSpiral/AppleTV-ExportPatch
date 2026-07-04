/* Runtime dump - PTPWrappedBytes
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPWrappedBytes : NSObject
{
    unsigned long long _offset;
    unsigned long long _capacity;
    char _allocatedBytes;
    char * _bytes;
    int _fd;
    char _useByteBuffer;
    unsigned long long _excessDataLength;
    double _progressNotificationTime;
    /* block */ id * _progressNotifier;
    void * _progressNotifierContext;
    int _lastNotifiedProgress;
}

+ (PTPWrappedBytes *)wrappedBytesWithCapacity64:(unsigned long long)arg0;
+ (NSData *)wrappedBytesWithBytes:(void *)arg0 capacity64:(unsigned long long)arg1;

- (void)dealloc;
- (PTPWrappedBytes *)init;
- (NSString *)description;
- (void *)bytes;
- (unsigned long long)offset;
- (unsigned long long)appendData:(NSData *)arg0;
- (void *)mutableBytes;
- (unsigned long long)length64;
- (PTPWrappedBytes *)initWithCapacity64:(unsigned long long)arg0;
- (unsigned long long)appendBytes:(void *)arg0 length64:(void)arg1;
- (PTPWrappedBytes *)initWithFileDescriptor:(int)arg0 capacity64:(unsigned long long)arg1;
- (char)wasInitWithFD;
- (double)percentFull;
- (unsigned long long)capacity64;
- (void)setLength64:(unsigned long long)arg0;
- (PTPWrappedBytes *)initWithBytes:(void *)arg0 capacity64:(unsigned long long)arg1;
- (unsigned long long)rewindBytesToPosition64:(unsigned long long)arg0;
- (void)setProgressNotifierCallback:(/* block */ id *)arg0 context:(void *)arg1;
- (unsigned long long)setCapacity64:(unsigned long long)arg0;
- (unsigned long long)excessDataLength;

@end
