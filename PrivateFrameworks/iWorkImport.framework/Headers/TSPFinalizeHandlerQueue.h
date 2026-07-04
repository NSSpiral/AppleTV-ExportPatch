/* Runtime dump - TSPFinalizeHandlerQueue
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPFinalizeHandlerQueue : NSObject
{
    NSObject<OS_dispatch_queue> * _accessQueue;
    struct vector<TSP::FinalizeHandlerItem *, std::__1::allocator<TSP::FinalizeHandlerItem *> > _order;
    struct hash_map<const long long, TSP::FinalizeHandlerItem, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, TSP::FinalizeHandlerItem> > > _map;
}

- (char)runFinalizeHandlers;
- (void)addFinalizeHandlers:(struct vector<void (^)(), std::__1::allocator<void (^)()> > *)arg0 strongReferencesOrNull:(id)arg1 forIdentifier:(struct hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > *)arg2;
- (void)visitItemForCycleDetection:(struct FinalizeHandlerItem *)arg0;
- (void)runFinalizeHandlerForItem:(struct FinalizeHandlerItem *)arg0;
- (TSPFinalizeHandlerQueue *)init;
- (void)reset;
- (void).cxx_construct;
- (void).cxx_destruct;

@end
