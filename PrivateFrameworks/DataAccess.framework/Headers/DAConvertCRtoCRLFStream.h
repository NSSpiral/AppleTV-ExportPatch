/* Runtime dump - DAConvertCRtoCRLFStream
 * Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAConvertCRtoCRLFStream : NSInputStream
{
    NSData * _mimeData;
    NSData * _preflightData;
    NSData * _postflightData;
    unsigned int _totalLength;
    unsigned int _readOffset;
    char _lastByteCopiedWasCR;
    char _openEventSent;
    unsigned int _streamStatus;
    char _intendToStream;
    id _delegate;
    struct __CFRunLoopSource * _rls;
    /* block */ id * _clientCallback;
    struct ? _clientContext;
    ASTrafficLogger * _trafficLogger;
}

- (unsigned int)streamStatus;
- (char)getBuffer:(char * *)arg0 length:(unsigned int *)arg1;
- (char)_setCFClientFlags:(unsigned long)arg0 callback:(/* block */ id *)arg1 context:(struct ? *)arg2;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop *)arg0 forMode:(struct __CFString *)arg1;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop *)arg0 forMode:(struct __CFString *)arg1;
- (void)dealloc;
- (void)setDelegate:(<NSStreamDelegate> *)arg0;
- (<NSStreamDelegate> *)delegate;
- (DAConvertCRtoCRLFStream *)initWithData:(NSData *)arg0;
- (void)close;
- (void).cxx_destruct;
- (void)open;
- (NSError *)streamError;
- (void)scheduleInRunLoop:(NSObject *)arg0 forMode:(struct __CFString *)arg1;
- (void)removeFromRunLoop:(NSObject *)arg0 forMode:(struct __CFString *)arg1;
- (char)hasBytesAvailable;
- (int)read:(char *)arg0 maxLength:(unsigned int)arg1;
- (DAConvertCRtoCRLFStream *)initWithMIMEData:(NSData *)arg0 preflightData:(NSData *)arg1 postflightData:(NSData *)arg2 intendToStream:(char)arg3;
- (void)_scheduleCallback;
- (void)_streamEventTrigger;

@end
