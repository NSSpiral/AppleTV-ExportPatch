/* Runtime dump - TSPUnknownObjectUnarchiver
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPUnknownObjectUnarchiver : TSPUnarchiver
{
    struct shared_ptr<TSP::ArchiveInfo> _archiveInfo;
    NSObject<OS_dispatch_data> * _messagesData;
    NSString * _packageLocator;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_data> * messagesData;
@property (readonly, nonatomic) NSString * packageLocator;

- (NSString *)packageLocator;
- (char)canValidateReferences;
- (TSPUnknownObjectUnarchiver *)initWithIdentifier:(long long)arg0 archiveInfo:(struct shared_ptr<TSP::ArchiveInfo>)arg1 messagesData:(struct __shared_weak_count *)arg2 packageLocator:(NSString *)arg3 objectDelegate:(<TSPObjectDelegate> *)arg4 lazyReferenceDelegate:(<TSPLazyReferenceDelegate> *)arg5 delegate:(NSObject *)arg6 error:(NSError *)arg7;
- (struct shared_ptr<TSP::ArchiveInfo>)archiveInfo;
- (NSObject<OS_dispatch_data> *)messagesData;
- (struct Message *)message;
- (void).cxx_construct;
- (void).cxx_destruct;

@end
