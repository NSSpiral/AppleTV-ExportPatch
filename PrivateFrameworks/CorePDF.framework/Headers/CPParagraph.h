/* Runtime dump - CPParagraph
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPParagraph : CPRegion
{
    char noIndentation;
    char below;
    unsigned int alignment;
    char hasDropCap;
    id flowProperties;
    CPListItem * listItem;
    float preformatWidth;
}

@property (retain, nonatomic) CPListItem * listItem;

- (void)setAlignment:(unsigned int)arg0;
- (void)dealloc;
- (CPParagraph *)init;
- (CPParagraph *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned int)alignment;
- (unsigned int)index;
- (void)accept:(id)arg0;
- (void)setListItem:(CPListItem *)arg0;
- (float)selectionBottom;
- (char)isBoxRegion;
- (char)isGraphicalRegion;
- (char)isRowRegion;
- (void)setIsImageRegion:(char)arg0;
- (char)isImageRegion;
- (char)isShapeRegion;
- (NSDictionary *)flowProperties;
- (void)setFlowProperties:(NSDictionary *)arg0;
- (char)isParagraphRegion;
- (char)isListItemRegion;
- (char)isTextRegion;
- (void)setIsTextRegion:(char)arg0;
- (void)setNoIndentation:(char)arg0;
- (char)noIndentation;
- (char)hasDropCap;
- (void)setHasDropCap:(char)arg0;
- (void)explode;
- (struct CGRect)reducedBounds;
- (void)setBelow:(char)arg0;
- (char)below;
- (char)isPreformattedWithUnitWidth:(float *)arg0;
- (CPListItem *)listItem;

@end
