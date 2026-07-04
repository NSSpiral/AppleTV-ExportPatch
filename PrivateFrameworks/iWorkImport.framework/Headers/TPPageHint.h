/* Runtime dump - TPPageHint
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPPageHint : NSObject <TSWPOffscreenColumn>
{
    int _pageKind;
    struct vector<TSWPTargetHint, std::__1::allocator<TSWPTargetHint> > _hints;
    struct _NSRange _footnoteAutoNumberRange;
    struct _NSRange _footnoteLayoutRange;
    <TSDHint> * _firstChildHint;
    <TSDHint> * _lastChildHint;
    NSDictionary * _anchoredAttachmentPositions;
    struct TSWPTopicNumberHints _topicNumbers;
}

@property (nonatomic) int pageKind;
@property (nonatomic) struct _NSRange footnoteAutoNumberRange;
@property (nonatomic) struct _NSRange footnoteLayoutRange;
@property (retain, nonatomic) NSDictionary * anchoredAttachmentPositions;
@property (retain, nonatomic) <TSDHint> * firstChildHint;
@property (retain, nonatomic) <TSDHint> * lastChildHint;
@property (nonatomic) struct TSWPTopicNumberHints * topicNumbers;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) unsigned int startCharIndex;
@property (readonly, nonatomic) struct _NSRange range;
@property (readonly, nonatomic) unsigned int startAnchoredCharIndex;
@property (readonly, nonatomic) struct _NSRange anchoredRange;
@property (readonly, nonatomic) unsigned int nextWidowPullsDownFromCharIndex;

- (TPPageHint *)initWithArchive:(struct PageHintArchive *)arg0 unarchiver:(struct PageHintArchive)arg1;
- (<TSDHint> *)firstChildHint;
- (<TSDHint> *)lastChildHint;
- (id)copyForArchiving;
- (void)saveToArchive:(struct PageHintArchive *)arg0 archiver:(NSObject *)arg1 context:(NSObject *)arg2;
- (struct _NSRange)anchoredRange;
- (void)trimToCharIndex:(unsigned int)arg0 inTarget:(NSObject *)arg1 removeFootnoteLayoutCount:(unsigned int)arg2 removeAutoNumberFootnoteCount:(unsigned int)arg3;
- (unsigned int)startCharIndex;
- (unsigned int)startAnchoredCharIndex;
- (unsigned int)nextWidowPullsDownFromCharIndex;
- (struct TSWPTargetHint *)firstHint;
- (struct TSWPTargetHint *)lastHint;
- (int)pageKind;
- (void)offsetStartCharIndexBy:(int)arg0 charIndex:(unsigned int)arg1;
- (NSDictionary *)anchoredAttachmentPositions;
- (void)setPageKind:(int)arg0;
- (struct _NSRange)footnoteLayoutRange;
- (void)setFootnoteLayoutRange:(struct _NSRange)arg0;
- (struct TSWPTopicNumberHints *)topicNumbers;
- (void)setFirstChildHint:(<TSDHint> *)arg0;
- (void)setLastChildHint:(<TSDHint> *)arg0;
- (void)setAnchoredAttachmentPositions:(NSDictionary *)arg0;
- (struct _NSRange)footnoteAutoNumberRange;
- (void)setFootnoteAutoNumberRange:(struct _NSRange)arg0;
- (char)syncsWithEndOfPageHint:(id)arg0 storage:(TSWPStorage *)arg1;
- (void)setTopicNumbers:(struct TSWPTopicNumberHints *)arg0;
- (void)dealloc;
- (TPPageHint *)init;
- (struct _NSRange)range;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)setHints:(struct vector<TSWPTargetHint, std::__1::allocator<TSWPTargetHint> > *)arg0;
- (struct vector<TSWPTargetHint, std::__1::allocator<TSWPTargetHint> >)hints;
- (int)lastColumn;
- (int)firstColumn;

@end
