/* Runtime dump - EDSheet
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDSheet : OCDDelayedNode
{
    EDWorkbook * mWorkbook;
    EDString * mName;
    BOOL mHidden;
    BOOL mDisplayFormulas;
    BOOL mDisplayGridlines;
    BOOL mIsDialogSheet;
    EDColorReference * mDefaultGridlineColorReference;
    EDHeaderFooter * mHeaderFooter;
    EDPageSetup * mPageSetup;
    NSMutableArray * mDrawables;
    OITSUPointerKeyDictionary * mTextBoxMap;
    OITSUPointerKeyDictionary * mCommentMap;
    EDProcessors * mProcessors;
    EDWarnings * mWarnings;
    ESDContainer * mEscherDrawing;
}

@property (nonatomic) BOOL isDialogSheet;

+ (EDSheet *)sheetWithWorkbook:(EDWorkbook *)arg0;

- (void)dealloc;
- (BOOL)isHidden;
- (void)setHidden:(BOOL)arg0;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (EDWorkbook *)workbook;
- (unsigned int)drawableCount;
- (NSObject *)drawableAtIndex:(unsigned int)arg0;
- (BOOL)isDisplayGridlines;
- (NSArray *)drawables;
- (void)setup;
- (void)teardown;
- (void)addDrawable:(GQHPagesFloatingDrawable *)arg0;
- (id)processors;
- (EDSheet *)initWithWorkbook:(EDWorkbook *)arg0;
- (void)setHeaderFooter:(EDHeaderFooter *)arg0;
- (EXPageSetup *)pageSetup;
- (void)setPageSetup:(EXPageSetup *)arg0;
- (NSMutableSet *)warnings;
- (void)applyProcessors;
- (void)setIsDialogSheet:(BOOL)arg0;
- (void)setDisplayFormulas:(BOOL)arg0;
- (void)setDisplayGridlines:(BOOL)arg0;
- (void)setDefaultGridlineColorReference:(NSObject *)arg0;
- (void)doneWithNonRowContent;
- (BOOL)isDisplayFormulas;
- (UIColor *)defaultGridlineColor;
- (void)setDefaultGridlineColor:(UIColor *)arg0;
- (EDHeaderFooter *)headerFooter;
- (void)removeDrawableAtIndex:(unsigned int)arg0;
- (id)edTextBoxForShape:(id)arg0;
- (void)setEDTextBox:(EDTextBox *)arg0 forShape:(MKShape *)arg1;
- (unsigned int)commentCount;
- (id)edCommentForShape:(id)arg0;
- (void)setEDComment:(EDComment *)arg0 forShape:(MKShape *)arg1;
- (BOOL)isDialogSheet;
- (void)reduceMemoryIfPossible;
- (id)escherDrawing;
- (void)setEscherDrawing:(id)arg0;
- (NSObject *)defaultGridlineColorReference;
- (NSEnumerator *)drawableEnumerator;

@end
