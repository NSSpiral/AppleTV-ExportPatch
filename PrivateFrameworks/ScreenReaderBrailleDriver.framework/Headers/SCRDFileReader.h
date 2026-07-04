/* Runtime dump - SCRDFileReader
 * Image: /System/Library/PrivateFrameworks/ScreenReaderBrailleDriver.framework/ScreenReaderBrailleDriver
 */

@interface SCRDFileReader : NSObject
{
    <SCRDFileReaderDelegate> * _delegate;
    NSThread * _readerThread;
    NSFileHandle * _fileHandle;
    int _threadStartCount;
}

- (char)hasStarted;
- (void)dealloc;
- (void)invalidate;
- (char)isValid;
- (void)start;
- (void)_readHandler:(id /* block */)arg0;
- (void)invalidateWithWait:(char)arg0;
- (SCRDFileReader *)initWithDelegate:(<SCRDFileReaderDelegate> *)arg0 fileHandle:(NSFileHandle *)arg1;

@end
