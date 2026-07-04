/* Runtime dump - CPList
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPList : NSObject <CPDisposable>
{
    struct CGRect spacer;
    int type;
    unsigned int ordinalPrefixLength;
    unsigned int ordinalSuffixLength;
    CPListItem * parentItem;
    struct __CFArray * items;
}

@property (nonatomic) struct CGRect spacer;
@property (nonatomic) int type;
@property (nonatomic) unsigned int ordinalPrefixLength;
@property (nonatomic) unsigned int ordinalSuffixLength;
@property (retain, nonatomic) CPListItem * parentItem;

- (void)dealloc;
- (CPList *)init;
- (void)setType:(int)arg0;
- (int)type;
- (void)addItem:(NSObject *)arg0;
- (CPListItem *)parentItem;
- (unsigned int)itemCount;
- (BRControl *)itemAtIndex:(unsigned int)arg0;
- (void)dispose;
- (char)containsParagraph:(id)arg0;
- (char)isMultilevel;
- (struct CGRect)spacer;
- (void)setSpacer:(struct CGRect)arg0;
- (unsigned int)ordinalPrefixLength;
- (void)setOrdinalPrefixLength:(unsigned int)arg0;
- (unsigned int)ordinalSuffixLength;
- (void)setOrdinalSuffixLength:(unsigned int)arg0;
- (void)setParentItem:(CPListItem *)arg0;
- (void)finalize;

@end
