/* Runtime dump - MSVFileBufferedPipe
 * Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVFileBufferedPipe : NSObject
{
    NSFileHandle * _writeBufferFileHandle;
    NSFileHandle * _readBufferFileHandle;
    NSPipe * _inputPipe;
    NSPipe * _outputPipe;
    NSObject<OS_dispatch_source> * _writeSource;
    NSObject<OS_dispatch_source> * _readSource;
    char _readyForData;
    char _hasBufferedData;
    char _readSourceClosed;
    NSData * _dataPendingWrite;
    unsigned int _dataPendingOffset;
    NSObject<OS_dispatch_queue> * _queue;
    NSFileHandle * _fileHandleForReading;
    NSFileHandle * _fileHandleForWriting;
}

@property (readonly, retain) NSFileHandle * fileHandleForReading;
@property (readonly, retain) NSFileHandle * fileHandleForWriting;

+ (BRCNotificationPipe *)pipe;

- (NSFileHandle *)fileHandleForReading;
- (NSFileHandle *)fileHandleForWriting;
- (MSVFileBufferedPipe *)init;
- (void).cxx_destruct;
- (void)_outputReadyForWriting:(unsigned int)arg0;
- (void)_inputReadyForReading:(unsigned int)arg0;
- (void)_writeBufferedData;

@end
