/* Runtime dump - TSPComponentManager
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPComponentManager : NSObject <TSPComponentDelegate, TSPObjectModifyDelegate>
{
    int _ignoreCachedObjectEvictionCount;
    char _isTornDown;
    NSObject<OS_dispatch_queue> * _componentQueue;
    NSHashTable * _components;
    NSMapTable * _componentDictionary;
    NSCache * _componentCache;
    TSPComponent * _viewStateComponent;
    NSObject<OS_dispatch_queue> * _readFlushedComponentQueue;
    TSPObjectContext * _context;
    TSPComponent * _packageMetadataComponent;
}

@property (readonly, weak, nonatomic) TSPObjectContext * context;
@property (readonly, nonatomic) TSPComponent * packageMetadataComponent;
@property (readonly, nonatomic) TSPComponent * documentComponent;
@property (readonly, nonatomic) TSPComponent * documentObjectContainerComponent;
@property (readonly, nonatomic) TSPComponent * documentMetadataComponent;
@property (readonly, nonatomic) char isDocumentComponentTreeModified;
@property (readonly, nonatomic) TSPComponent * supportComponent;
@property (readonly, nonatomic) TSPComponent * supportObjectContainerComponent;
@property (readonly, nonatomic) TSPComponent * supportMetadataComponent;
@property (retain) TSPComponent * viewStateComponent;
@property (readonly, nonatomic) char isSupportComponentTreeModified;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)willModifyObject:(NSObject *)arg0 duringReadOperation:(char)arg1;
- (void)suspendLoadingModifiedFlushedComponentsAndWait;
- (void)resumeLoadingModifiedFlushedComponents;
- (void)discardOrphanedComponents;
- (void)enumerateComponents:(NSArray *)arg0;
- (NSString *)objectForIdentifier:(long long)arg0;
- (void)beginIgnoringCachedObjectEviction;
- (void)endIgnoringCachedObjectEviction;
- (TSPComponent *)supportComponent;
- (char)isDocumentComponentTreeModified;
- (char)isSupportComponentTreeModified;
- (NSObject *)componentForRootObjectOfLazyReference:(NSObject *)arg0;
- (NSString *)componentForRootObjectIdentifier:(long long)arg0;
- (TSPComponent *)documentComponent;
- (void)loadFromPackage:(id)arg0 metadata:(NSDictionary *)arg1;
- (TSPComponent *)packageMetadataComponent;
- (TSPComponent *)documentObjectContainerComponent;
- (TSPComponent *)documentMetadataComponent;
- (TSPComponent *)supportObjectContainerComponent;
- (TSPComponent *)supportMetadataComponent;
- (void)componentForRootObjectIdentifier:(long long)arg0 queue:(NSObject *)arg1 completion:(id /* block */)arg2;
- (void)retrieveOrCreateComponentForRootObject:(NSObject *)arg0 queue:(NSObject *)arg1 completion:(id /* block */)arg2;
- (void)componentForRootObjectOfLazyReference:(NSObject *)arg0 queue:(NSObject *)arg1 completion:(id /* block */)arg2;
- (void)dirtyAllComponentsForDocumentUpgradeInPackage:(unsigned char)arg0;
- (void)cacheComponent:(id)arg0 isDiscardingContent:(char)arg1;
- (char)shouldKeepAllCachedObjectsInMemory;
- (void)flushComponent:(id)arg0 isDiscardingContent:(char)arg1;
- (void)didModifyFlushedComponent:(id)arg0 forObject:(NSObject *)arg1;
- (NSString *)rootComponentWithIdentifierImpl:(long long)arg0 locator:(NSString *)arg1 packageIdentifier:(unsigned char)arg2;
- (id)documentComponentImpl;
- (id)supportComponentImpl;
- (id)componentForRootObjectOfLazyReferenceImpl:(id)arg0;
- (void)traverseComponentTreeFromRoot:(NSObject *)arg0 accessor:(TSCH3DScenePropertyAccessor *)arg1;
- (TSPComponent *)viewStateComponent;
- (void)setViewStateComponent:(TSPComponent *)arg0;
- (NSString *)rootComponentForPackageIdentifier:(unsigned char)arg0;
- (void)evictAllCachedObjects;
- (void)dealloc;
- (TSPComponentManager *)init;
- (char)isActive;
- (TSPObjectContext *)context;
- (TSPComponentManager *)initWithContext:(TSPObjectContext *)arg0;
- (void).cxx_destruct;
- (void)tearDown;

@end
