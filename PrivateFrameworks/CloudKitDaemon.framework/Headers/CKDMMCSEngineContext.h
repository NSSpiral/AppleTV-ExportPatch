/* Runtime dump - CKDMMCSEngineContext
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDMMCSEngineContext : NSObject
{
    char _stopMMCSThread;
    long _refCount;
    int _state;
    CKDMMCS * _MMCS;
    struct __MMCSEngine * _MMCSEngine;
    NSString * _applicationBundleID;
    NSString * _path;
    NSObject<OS_dispatch_semaphore> * _semaphore;
    NSRunLoop * _runLoop;
    NSString * _runLoopMode;
    NSString * _protocolVersion;
    unsigned long _maxChunkCountForSection;
}

@property (nonatomic) long refCount;
@property (nonatomic) int state;
@property (nonatomic) char stopMMCSThread;
@property (weak, nonatomic) CKDMMCS * MMCS;
@property (nonatomic) struct __MMCSEngine * MMCSEngine;
@property (retain, nonatomic) NSString * applicationBundleID;
@property (retain, nonatomic) NSString * path;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> * semaphore;
@property (retain, nonatomic) NSRunLoop * runLoop;
@property (retain, nonatomic) NSString * runLoopMode;
@property (retain, nonatomic) NSString * protocolVersion;
@property (nonatomic) unsigned long maxChunkCountForSection;

+ (CKDMMCSEngineContext *)sharedContextsQueue;
+ (NSObject *)_appID;
+ (CKDMMCSEngineContext *)sharedContextsByBundleID;
+ (NSObject *)setupMMCSEngineWithApplicationBundleID:(NSString *)arg0 path:(NSString *)arg1 error:(id *)arg2;
+ (void)tearDownMMCSEngineWithContext:(NSObject *)arg0;

- (void)dealloc;
- (NSString *)description;
- (int)state;
- (void)setState:(int)arg0;
- (NSString *)path;
- (void)setPath:(NSString *)arg0;
- (void).cxx_destruct;
- (NSString *)applicationBundleID;
- (CKDMMCS *)MMCS;
- (void)setMMCS:(NSSet *)arg0;
- (NSString *)CKPropertiesDescription;
- (void)setApplicationBundleID:(NSString *)arg0;
- (long)refCount;
- (void)setStopMMCSThread:(char)arg0;
- (void)setRunLoop:(NSRunLoop *)arg0;
- (NSObject<OS_dispatch_semaphore> *)semaphore;
- (void)_MMCSTreadAbort;
- (NSString *)runLoopMode;
- (char)stopMMCSThread;
- (struct __MMCSEngine *)MMCSEngine;
- (void)_MMCSThread;
- (NSRunLoop *)runLoop;
- (void)setMMCSEngine:(struct __MMCSEngine *)arg0;
- (void)setMaxChunkCountForSection:(unsigned long)arg0;
- (char)_setupMMCSEngineWithError:(id *)arg0;
- (long)incRefCount;
- (CKDMMCSEngineContext *)initWithApplicationBundleID:(NSString *)arg0 path:(NSString *)arg1;
- (char)_setupMMCSEngineWithRetryCount:(unsigned int)arg0 error:(id *)arg1;
- (long)decRefCount;
- (void)_tearDownMMCSEngine;
- (void)cancelRequestWithContext:(void *)arg0;
- (void)performOnRunLoop:(NSObject *)arg0;
- (int)fdForItemID:(unsigned long long)arg0 itemType:(id *)arg1 error:(id *)arg2;
- (void)setRefCount:(long)arg0;
- (void)setSemaphore:(NSObject<OS_dispatch_semaphore> *)arg0;
- (void)setRunLoopMode:(NSString *)arg0;
- (unsigned long)maxChunkCountForSection;
- (NSString *)protocolVersion;
- (void)setProtocolVersion:(NSString *)arg0;

@end
