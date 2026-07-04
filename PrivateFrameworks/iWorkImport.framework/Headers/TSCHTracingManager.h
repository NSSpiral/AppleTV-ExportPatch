/* Runtime dump - TSCHTracingManager
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHTracingManager : NSObject
{
    char mTraceLevelSet;
    unsigned int mTraceLevel;
    char mBufferSizeSet;
    unsigned int mBufferSize;
    TSMTraceBuffer * mBuffer;
    NSURL * mLastTraceFileURL;
    NSString * mTag;
}

@property unsigned int traceLevel;
@property unsigned int bufferSize;
@property (readonly) NSURL * lastTraceFileURL;
@property (copy) NSString * tag;

+ (TSCHTracingManager *)allocWithZone:(struct _NSZone *)arg0;
+ (TSCHTracingManager *)_singletonAlloc;
+ (TSCHTracingManager *)sharedManager;

- (unsigned int)traceLevel;
- (void)setTraceLevel:(unsigned int)arg0;
- (NSURL *)lastTraceFileURL;
- (TSCHTracingManager *)retain;
- (void)release;
- (void)dealloc;
- (TSCHTracingManager *)init;
- (TSCHTracingManager *)autorelease;
- (unsigned int)retainCount;
- (TSCHTracingManager *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)tag;
- (void)setTag:(NSString *)arg0;
- (void)setBufferSize:(unsigned int)arg0;
- (unsigned int)bufferSize;
- (void)setup;
- (void)teardown;

@end
