/* Runtime dump - TSWPLayoutManager
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPLayoutManager : NSObject <TSWPStorageObserver>
{
    TSWPStorage * _storage;
    char _isObservingStorage;
    char _useLigatures;
    int _delta;
    struct _NSRange _dirtyRange;
    TSWPCTTypesetterCache * _typesetterCache;
    struct TSWPTopicNumberHints _cachedTopicNumbers;
    <TSWPLayoutOwner> * _owner;
}

@property (readonly, nonatomic) <TSWPLayoutOwner> * owner;
@property (readonly, retain, nonatomic) TSWPStorage * storage;
@property (readonly, nonatomic) struct _NSRange dirtyRange;
@property (readonly, retain, nonatomic) TSWPCTTypesetterCache * typesetterCache;

+ (void)fixColumnBoundsForTarget:(NSObject *)arg0 storage:(TSWPStorage *)arg1 charIndex:(unsigned int)arg2 firstColumnIndex:(unsigned int)arg3 precedingHeight:(float)arg4 height:(float)arg5 alreadyHasMargins:(char)arg6 styleProvider:(NSObject *)arg7 vertical:(char)arg8;

- (void)clearOwner;
- (void)clearTypesetterCache;
- (int)p_layoutConfigFlagsForTarget:(NSObject *)arg0;
- (TSWPLayoutManager *)initWithStorage:(TSWPStorage *)arg0 owner:(<TSWPLayoutOwner> *)arg1;
- (void)storage:(TSWPStorage *)arg0 didChangeRange:(struct _NSRange)arg1 delta:(int)arg2 broadcastKind:(int)arg3;
- (void)willRemoveAttachmentLayout:(NSObject *)arg0;
- (char)needsLayoutInColumn:(id)arg0;
- (void *)layoutIntoTarget:(NSObject *)arg0 withLayoutState:(void *)arg1 outSync:(char *)arg2;
- (void *)layoutStateForLayoutAfterHint:(struct TSWPTargetHint *)arg0 childHint:(struct TSWPTargetHint)arg1 topicNumbers:(struct CGSize)arg2 textIsVertical:(char)arg3;
- (void)deflateTarget:(NSObject *)arg0 intoHints:(struct vector<TSWPTargetHint, std::__1::allocator<TSWPTargetHint> > *)arg1 childHints:(struct TSWPTargetHint *)arg2 anchoredAttachmentPositions:(struct __compressed_pair<TSWPTargetHint *, std::__1::allocator<TSWPTargetHint> >)arg3 topicNumbers:(struct TSWPTopicNumberHints *)arg4 layoutState:(NSObject *)arg5;
- (void)inflateTarget:(NSObject *)arg0 fromHints:(struct vector<TSWPTargetHint, std::__1::allocator<TSWPTargetHint> > *)arg1 childHint:(struct vector<TSWPTargetHint, std::__1::allocator<TSWPTargetHint> >)arg2 anchoredAttachmentPositions:(struct TSWPTargetHint *)arg3 topicNumbers:(struct __compressed_pair<TSWPTargetHint *, std::__1::allocator<TSWPTargetHint> >)arg4;
- (void)destroyLayoutState:(void *)arg0;
- (TSWPCTTypesetterCache *)typesetterCache;
- (struct _NSRange)dirtyRange;
- (<ABStyleProvider> *)styleProvider;
- (void)dealloc;
- (void).cxx_construct;
- (void).cxx_destruct;
- (TSWPStorage *)storage;
- (<TSWPLayoutOwner> *)owner;

@end
