/* Runtime dump - SFUCryptor
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface SFUCryptor : NSObject
{
    int mOperation;
    struct _CCCryptor * mCryptor;
    unsigned long mBlockSize;
    char mFinished;
    char * mDecryptionInputBuffer;
    char * mOutputBuffer;
    char * mOutputBufferPos;
    unsigned long mOutputBufferAvailable;
}

- (void)dealloc;
- (SFUCryptor *)initWithKey:(NSString *)arg0 operation:(int)arg1 iv:(char *)arg2 ivLength:(unsigned long)arg3;
- (char)cryptDataFromStream:(NSObject *)arg0 toBuffer:(char *)arg1 length:(unsigned long)arg2 bytesRead:(unsigned int *)arg3 error:(id *)arg4;
- (char)cryptDataFromBuffer:(char *)arg0 length:(unsigned long)arg1 toStream:(NSObject *)arg2 finished:(char)arg3 crc32:(unsigned int *)arg4 error:(id *)arg5;
- (SFUCryptor *)initWithKey:(NSString *)arg0 operation:(int)arg1 iv:(char *)arg2 ivLength:(unsigned long)arg3 usePKCS7Padding:(char)arg4;
- (char)cryptDataFromBuffer:(char *)arg0 length:(unsigned long)arg1 toStream:(NSObject *)arg2 finished:(char)arg3 error:(id *)arg4;

@end
