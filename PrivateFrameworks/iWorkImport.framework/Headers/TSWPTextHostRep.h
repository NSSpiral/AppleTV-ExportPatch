/* Runtime dump - TSWPTextHostRep
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTextHostRep : TSDRep <TSDContainerRep>
{
    TSWPShapeRep * _editingRep;
    char _useFindOverlayers;
    NSObject<TSKSearchReference> * _activeSearchReference;
    NSArray * _searchReferences;
}

@property (retain, nonatomic) NSObject<TSKSearchReference> * activeSearchReference;
@property (readonly, nonatomic) char useFindOverlayers;
@property (retain, nonatomic) NSArray * searchReferences;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) NSObject<TSDContainerInfo> * containerInfo;

- (TSWPTextHostRep *)initWithLayout:(TSDLayout *)arg0 canvas:(TSDCanvas *)arg1;
- (void)drawTextBackground:(struct CGContext *)arg0 insetRect:(struct CGRect)arg1 pulsating:(struct CGSize)arg2;
- (void)willBeRemoved;
- (NSObject *)hitRep:(struct CGPoint)arg0;
- (id)childReps;
- (void)addAdditionalChildLayersToArray:(NSArray *)arg0;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg0;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg0 withObject:(NSObject *)arg1;
- (void)recursivelyPerformSelector:(SEL)arg0;
- (void)recursivelyPerformSelector:(SEL)arg0 withObject:(NSObject *)arg1;
- (void)updateChildrenFromLayout;
- (char)canSelectChildRep:(NSObject *)arg0;
- (void)selectChildRep:(NSObject *)arg0 extendingSelection:(char)arg1;
- (NSObject<TSKSearchReference> *)activeSearchReference;
- (void)setActiveSearchReference:(NSObject<TSKSearchReference> *)arg0;
- (NSArray *)searchReferences;
- (void)setSearchReferences:(NSArray *)arg0;
- (void)setPulseControllerActive:(char)arg0 autohide:(char)arg1;
- (char)useFindOverlayers;
- (void)dealloc;
- (NSObject<TSDContainerInfo> *)containerInfo;

@end
