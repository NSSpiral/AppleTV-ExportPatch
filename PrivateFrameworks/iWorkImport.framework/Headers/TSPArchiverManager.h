/* Runtime dump - TSPArchiverManager
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPArchiverManager : NSObject
{
    <TSPArchiverManagerDelegate> * _delegate;
    Class _archiverClass;
    NSMapTable * _archivers;
    NSObject<OS_dispatch_queue> * _archiversHighQueue;
    NSObject<OS_dispatch_queue> * _archiversLowQueue;
    NSObject<OS_dispatch_queue> * _archiveHighQueue;
    NSObject<OS_dispatch_queue> * _archiveDefaultQueue;
    NSObject<OS_dispatch_queue> * _archiveLowQueue;
    NSObject<OS_dispatch_queue> * _archiveCompletionQueue;
    struct ? _flags;
    TSPDescriptionGenerator * _descriptionGenerator;
}

@property (retain, nonatomic) TSPDescriptionGenerator * descriptionGenerator;

- (void)archiveObjectWithHighPriority:(char)arg0;
- (void)performAsynchronousArchiverAccessUsingBlock:(id /* block */)arg0;
- (NSObject *)explicitComponentRootObjectForObject:(NSObject *)arg0 hasArchiverAccessLock:(char)arg1;
- (void)archiveObjectWithLowPriority:(NSNumber *)arg0;
- (void)archiverForObject:(NSObject *)arg0 hasArchiverAccessLock:(char)arg1 queue:(NSObject *)arg2 completion:(id /* block */)arg3;
- (TSPArchiverManager *)initWithDelegate:(<TSPArchiverManagerDelegate> *)arg0 archiverClass:(Class)arg1;
- (void)impl_archiverForObject:(NSObject *)arg0 queue:(NSObject *)arg1 completion:(id /* block */)arg2;
- (NSObject *)archiverForObject:(NSObject *)arg0 archiveQueue:(NSObject *)arg1 archiveCompletion:(id /* block */)arg2;
- (NSObject *)impl_explicitComponentRootObjectForObject:(NSObject *)arg0;
- (void)archiveWithArchiver:(NSKeyedArchiver *)arg0 queue:(NSObject *)arg1 archiveCompletion:(id /* block */)arg2;
- (TSPDescriptionGenerator *)descriptionGenerator;
- (void)setDescriptionGenerator:(TSPDescriptionGenerator *)arg0;
- (void)dealloc;
- (TSPArchiverManager *)init;
- (void)stop;
- (void).cxx_construct;
- (void).cxx_destruct;
- (TSPArchiverManager *)initWithDelegate:(<TSPArchiverManagerDelegate> *)arg0;

@end
