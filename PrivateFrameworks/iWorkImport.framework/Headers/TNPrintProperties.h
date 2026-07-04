/* Runtime dump - TNPrintProperties
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNPrintProperties : NSObject
{
    float _headerInset;
    float _footerInset;
    struct CGSize _unscaledPageSize;
    struct UIEdgeInsets _printMargins;
}

@property struct CGSize unscaledPageSize;
@property (readonly) float pageHeight;
@property (readonly) float pageWidth;
@property struct UIEdgeInsets printMargins;
@property (nonatomic) float headerInset;
@property (nonatomic) float footerInset;

+ (NSDictionary *)letterSizePrintProperties;
+ (NSDictionary *)a4SizePrintProperties;
+ (NSDictionary *)letterSizePortraitFormPrintProperties;
+ (NSDictionary *)letterSizeLandscapeFormPrintProperties;
+ (NSDictionary *)legacyExportPrintProperties;

- (struct CGRect)pageHeaderFooterRectForContentScale:(id)arg0 portraitOrientation:(SEL)arg1 footer:(float)arg2 textHeight:(char)arg3;
- (struct CGSize)unscaledPageSize;
- (struct UIEdgeInsets)printMargins;
- (void)setPrintMargins:(struct UIEdgeInsets)arg0;
- (struct CGRect)unscaledPageRectForDisplayForPortraitOrientation:(id)arg0 userViewScale:(SEL)arg1 atPageCoordinate:(char)arg2;
- (TNPrintProperties *)initWithPageSize:(struct CGSize)arg0 printMargins:(struct UIEdgeInsets)arg1 headerInset:(float)arg2 footerInset:(float)arg3;
- (struct CGSize)pageSizeForContentScale:(float)arg0 portraitOrientation:(char)arg1;
- (struct CGRect)contentRectForContentScale:(id)arg0 portraitOrientation:(SEL)arg1 headerHeight:(float)arg2 footerHeight:(char)arg3;
- (struct CGSize)pageSizeWithGutterForContentScale:(float)arg0 userViewScale:(float)arg1 portraitOrientation:(char)arg2;
- (TNPrintProperties *)initWithPageSize:(struct CGSize)arg0 printMargins:(struct UIEdgeInsets)arg1;
- (float)contentScaleForIntegralWidthWithContentScale:(float)arg0 portraitOrientation:(char)arg1;
- (void)setUnscaledPageSize:(struct CGSize)arg0;
- (void)setHeaderInset:(float)arg0;
- (void)setFooterInset:(float)arg0;
- (TNPrintProperties *)initWithPageSize:(struct CGSize)arg0 contentRect:(struct CGRect)arg1;
- (float)headerInset;
- (float)footerInset;
- (struct CGRect)p_unscaledContentRectForOrientation:(id)arg0 headerHeight:(SEL)arg1 footerHeight:(char)arg2;
- (struct CGAffineTransform)p_transformForContentScale:(float)arg0 portraitOrientation:(char)arg1;
- (float)pageWidth;
- (float)pageHeight;

@end
