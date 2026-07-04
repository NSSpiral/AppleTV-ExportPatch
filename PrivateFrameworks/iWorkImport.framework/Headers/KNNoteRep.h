/* Runtime dump - KNNoteRep
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNNoteRep : TSDRep <TSDContainerRep, TSWPStorageObserver>
{
    TSWPRep * mContainedRep;
}

@property (readonly, nonatomic) TSWPRep * containedRep;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) NSObject<TSDContainerInfo> * containerInfo;

- (KNNoteRep *)initWithLayout:(TSDLayout *)arg0 canvas:(TSDCanvas *)arg1;
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
- (void)storage:(TSWPStorage *)arg0 didChangeRange:(struct _NSRange)arg1 delta:(int)arg2 broadcastKind:(int)arg3;
- (TSWPRep *)containedRep;
- (char)canBeginEditingChildRepOnDoubleTap:(id)arg0;
- (float)columnHeight;
- (TSWPShapeRep *)editingRep;
- (void)willBeginEditingContainedRep;
- (void)willEndEditingContainedRep;
- (void)dealloc;
- (NSObject<TSDContainerInfo> *)containerInfo;

@end
