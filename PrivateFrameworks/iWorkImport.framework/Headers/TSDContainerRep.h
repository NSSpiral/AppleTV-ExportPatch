/* Runtime dump - TSDContainerRep
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDContainerRep : TSDRep <TSDMutableContainerRep>
{
    NSMutableArray * mChildReps;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) NSObject<TSDContainerInfo> * containerInfo;
@property (readonly, nonatomic) NSObject<TSDMutableContainerInfo> * mutableContainerInfo;

- (NSObject *)hitRep:(struct CGPoint)arg0;
- (id)hitReps:(struct CGPoint)arg0 withSlopBlock:(id /* block */)arg1;
- (id)hitRepChrome:(struct CGPoint)arg0;
- (id)childReps;
- (void)addAdditionalChildLayersToArray:(NSArray *)arg0;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg0;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg0 withObject:(NSObject *)arg1;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg0 withObject:(NSObject *)arg1 withObject:(NSObject *)arg2;
- (void)recursivelyPerformSelector:(SEL)arg0;
- (void)recursivelyPerformSelector:(SEL)arg0 withObject:(NSObject *)arg1;
- (void)recursivelyPerformSelector:(SEL)arg0 withObject:(NSObject *)arg1 withObject:(NSObject *)arg2;
- (NSObject *)hitRep:(struct CGPoint)arg0 passingTest:(id /* block */)arg1;
- (id)hitRepChrome:(struct CGPoint)arg0 passingTest:(id /* block */)arg1;
- (void)updateChildrenFromLayout;
- (void)setChildReps:(id)arg0;
- (void)addChildRep:(NSObject *)arg0;
- (void)insertChildRep:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (void)insertChildRep:(NSObject *)arg0 below:(char)arg1;
- (void)insertChildRep:(NSObject *)arg0 above:(UITextEffectsWindowNoAbove *)arg1;
- (void)removeChildRep:(NSObject *)arg0;
- (void)replaceChildRep:(NSObject *)arg0 with:(id)arg1;
- (NSObject<TSDMutableContainerInfo> *)mutableContainerInfo;
- (id)visibleChildLayouts;
- (id)childRepsForHitTesting;
- (TSDContainerRep *)initWithLayout:(NSObject *)arg0 canvasView:(NSObject *)arg1;
- (char)canSelectChildRep:(NSObject *)arg0;
- (void)selectChildRep:(NSObject *)arg0 extendingSelection:(char)arg1;
- (void)dealloc;
- (void)drawInContext:(struct CGContext *)arg0;
- (NSObject<TSDContainerInfo> *)containerInfo;

@end
