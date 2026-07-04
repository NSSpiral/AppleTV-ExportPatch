/* Runtime dump - TSMTraceController
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSMTraceController : NSObject
{
    NSMutableArray * mBuffers;
    NSString * mTraceDirectory;
    long mLastBufferID;
    NSDictionary * mBuildInfo;
    id mModuleCache;
    id mFilterCache;
}

@property (readonly, nonatomic) NSString * traceDirectory;

+ (void)addBuffer:(NSObject *)arg0;
+ (void)closeBufferWithID:(long)arg0;
+ (void)flushAllBuffers;
+ (NSString *)traceDirectory;
+ (long)addBufferWithTag:(NSString *)arg0 size:(long)arg1 synchronized:(char)arg2;
+ (NSObject *)bufferByID:(long)arg0;
+ (void)stopTracing;
+ (void)startTracing;
+ (long)addBufferWithTag:(NSString *)arg0 size:(long)arg1;
+ (void)shutdown;
+ (char)setup;

- (long)addBuffer:(NSObject *)arg0;
- (void)p_buffer:(NSObject *)arg0 changedModule:(int)arg1 toFilter:(unsigned long)arg2 from:(unsigned long)arg3;
- (void)writeTraceRecord:(struct TSMTraceRecord_s *)arg0 withFilter:(NSObject *)arg1;
- (void)flushAllBuffers;
- (NSString *)traceDirectory;
- (NSObject *)bufferByID:(long)arg0;
- (void)closeBuffer:(NSObject *)arg0;
- (void)stopTracing;
- (void)startTracing;
- (id)p_createTraceDirectory;
- (long)p_newBufferID;
- (void)p_writeBuildInfoToFile:(NSString *)arg0;
- (id *)buffers;
- (void)dealloc;
- (TSMTraceController *)init;

@end
