/* Runtime dump - CPPage
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPPage : CPChunk <CPDisposable>
{
    int pageNumber;
    struct CGRect pageCropBox;
    char hasZones;
    char hasTextLines;
    char isDirty;
    char isStartOfSection;
    long maxLayoutZOrder;
    CPChunk * background;
    float complexity;
    int rotation;
    NSMutableArray * shapesOnPage;
    NSMutableArray * imagesOnPage;
    NSMutableArray * graphicsOnPage;
    NSMutableArray * columnsOnPage;
    struct CPPDFContext * pdfContext;
    char contextOwner;
    struct CGPDFPage * pdfPage;
    NSMutableArray * textLinesOnPage;
    void * _layout;
    id hitTest;
    char reconstructed;
    struct _opaque_pthread_mutex_t mutex;
}

+ (void)sortByReadingOrder:(id)arg0;

- (void)dealloc;
- (CPPage *)init;
- (CPPage *)copyWithZone:(struct _NSZone *)arg0;
- (struct CGPDFLayout *)layout;
- (void)addImage:(UIImage *)arg0;
- (void)setRotation:(int)arg0;
- (int)rotation;
- (CPChunk *)background;
- (void)setBackground:(CPChunk *)arg0;
- (int)pageNumber;
- (void)reconstruct;
- (void)setPageCropBox:(struct CGRect)arg0;
- (void)setPDFContext:(struct CPPDFContext *)arg0;
- (CPBody *)bodyZone;
- (void)layDownObjectsOnPage;
- (void)sortByReadingOrder;
- (struct CGRect)pageCropBox;
- (void)addShape:(MKShape *)arg0;
- (NSMutableArray *)graphicsOnPage;
- (void)accept:(id)arg0;
- (void)dispose;
- (NSMutableArray *)imagesOnPage;
- (NSMutableArray *)shapesOnPage;
- (unsigned int)traverse:(id)arg0 ordinal:(unsigned int)arg1;
- (unsigned int)setReadingOrder:(id)arg0 from:(unsigned int)arg1;
- (unsigned int)setGraphicPositions:(id)arg0 from:(unsigned int)arg1;
- (unsigned int)setPositionsOf:(id)arg0 from:(unsigned int)arg1;
- (unsigned int)setCellPositionsOf:(id)arg0 from:(unsigned int)arg1;
- (CPPage *)initWithPDFPage:(struct CGPDFPage *)arg0;
- (struct CGPDFPage *)pdfPage;
- (struct CPPDFContext *)PDFContext;
- (float)complexity;
- (void)setComplexity:(float)arg0;
- (void)setPageNumber:(int)arg0;
- (void)setHasZones:(char)arg0;
- (char)hasZones;
- (char)hasTextLines;
- (void)setHasTextLines:(char)arg0;
- (char)isStartOfSection;
- (void)setIsStartOfSection:(char)arg0;
- (void)restoreBackGroundObjectToPage;
- (void)layDownObjectsOnPageOld;
- (NSMutableArray *)textLinesOnPage;
- (NSMutableArray *)columnsOnPage;
- (void)addColumns:(NSArray *)arg0;
- (NSObject *)hitTest;
- (char)populatePDFLayout:(struct CGPDFLayout *)arg0;
- (struct CPPDFClipBuffer *)clipBuffer;
- (GLKShaderBlockNode *)parent;
- (void)finalize;
- (NSArray *)children;

@end
