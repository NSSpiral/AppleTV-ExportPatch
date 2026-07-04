/* Runtime dump - TSMTraceBuffer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSMTraceBuffer : NSObject
{
    NSString * mTag;
    long mBufferID;
    long mBufferSize;
    char mSynchronizedAccess;
    NSFileHandle * mFileHandle;
    TSMTraceController * mController;
    long mCurrentIndex;
    struct __CFData * mData;
    char mActive;
    id mFilters;
    struct _opaque_pthread_mutex_t mLock;
}

@property (readonly, nonatomic) NSString * tag;
@property (readonly, nonatomic) long bufferID;
@property (readonly, nonatomic) long bufferSize;
@property (nonatomic) char synchronizedAccess;
@property (readonly, nonatomic) char active;
@property (retain, nonatomic) TSMTraceController * controller;
@property (retain, nonatomic) NSFileHandle * fileHandle;
@property (readonly, nonatomic) unsigned int * filters;

+ (NSString *)bufferWithTag:(NSString *)arg0 size:(long)arg1;

- (void)setSynchronizedAccess:(char)arg0;
- (void)setFilter:(unsigned long)arg0 forModule:(int)arg1;
- (long)bufferID;
- (TSMTraceBuffer *)initWithTag:(NSString *)arg0 size:(long)arg1;
- (unsigned long)filterForModule:(int)arg0;
- (void)writeTraceRecord:(struct TSMTraceRecord_s *)arg0 withFilter:(NSObject *)arg1;
- (void)setBufferID:(long)arg0;
- (char)synchronizedAccess;
- (void)dealloc;
- (void)flush;
- (void)stop;
- (NSString *)tag;
- (unsigned int *)filters;
- (char)active;
- (void)start;
- (TSMTraceController *)controller;
- (void)setController:(TSMTraceController *)arg0;
- (long)bufferSize;
- (NSFileHandle *)fileHandle;
- (void)setFileHandle:(NSFileHandle *)arg0;

@end
