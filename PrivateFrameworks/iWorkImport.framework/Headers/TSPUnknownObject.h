/* Runtime dump - TSPUnknownObject
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPUnknownObject : TSPObject
{
    struct shared_ptr<TSP::ArchiveInfo> _archiveInfo;
    NSObject<OS_dispatch_data> * _messagesData;
    NSString * _packageLocator;
    TSPLazyReferenceArray * _objects;
    NSArray * _datas;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_data> * serializedData;

- (NSString *)packageLocator;
- (void)willModifyForUpgrade;
- (TSPUnknownObject *)initFromUnarchiver:(NSObject *)arg0;
- (void)willModify;
- (void)saveToArchiver:(NSObject *)arg0;
- (TSPUnknownObject *)initWithContext:(TSPObjectContext *)arg0;
- (void).cxx_construct;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_data> *)serializedData;

@end
