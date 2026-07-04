/* Runtime dump - TSCH3DFill
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DFill : TSDFill
{
    TSCH3DLightingModel * _lightingModel;
    TSCH3DFillSetIdentifier * _identifier;
    TSDFill * _fallbackFill;
    NSNumber * _percentage;
    TSDFill * _cachedImageFill;
    struct CGSize _cachedImageFillSize;
}

@property (readonly) TSCH3DLightingModel * lightingModel;
@property (retain, nonatomic) TSCH3DFillSetIdentifier * identifier;
@property (retain, nonatomic) NSNumber * percentage;
@property (readonly, nonatomic) float percentageValue;

+ (TSCH3DFill *)instanceWithArchive:(struct FillArchive *)arg0 unarchiver:(struct FillArchive)arg1;
+ (NSData *)lightingModelWithSageFillData:(NSData *)arg0;
+ (NSData *)fillWithSageFillData:(NSData *)arg0;
+ (NSObject *)fillWithLightingModel:(TSCH3DLightingModel *)arg0 identifier:(TSCH3DFillSetIdentifier *)arg1;
+ (NSString *)fillWithIdentifier:(TSCH3DFillSetIdentifier *)arg0;
+ (EDFill *)fill;

- (void)didInitFromSOS;
- (void)saveToArchive:(struct FillArchive *)arg0 archiver:(struct /* ? */)arg1;
- (TSCH3DFill *)initWithArchive:(struct FillArchive *)arg0 unarchiver:(struct FillArchive)arg1;
- (void)drawSwatchInRect:(struct CGRect)arg0 inContext:(struct CGSize)arg1;
- (void)nonatomicallySetLightingModel:(NSObject *)arg0;
- (TSCH3DLightingModel *)lightingModel;
- (NSData *)sageFillData;
- (void)assignQuicklookColorToMaterialDiffuseColorForLightingModel:(NSObject *)arg0;
- (char)hasCompleteData;
- (id)lightenByPercent:(float)arg0;
- (TSCH3DFill *)initWithLightingModel:(TSCH3DLightingModel *)arg0 identifier:(TSCH3DFillSetIdentifier *)arg1;
- (float)percentageValue;
- (void)setPercentage:(NSNumber *)arg0;
- (NSObject *)p_lazyLightingModel;
- (NSObject *)p_convertToTSDFillWithSize:(unsigned int)arg0 technique:(int)arg1 context:(NSObject *)arg2;
- (NSObject *)p_imageFillForSize:(struct CGSize)arg0 context:(NSObject *)arg1;
- (NSObject *)p_imageFillForRect:(struct CGRect)arg0 context:(struct CGSize)arg1;
- (void)paintPath:(struct CGPath *)arg0 naturalBounds:(struct CGRect)arg1 inContext:(struct CGSize)arg2 isPDF:(char)arg3;
- (id)p_iconFill;
- (char)identifierReferencesUnavailableLocalBundle;
- (id)renderingLightingModelWithLightings:(TSCH3DLightingPackage *)arg0;
- (NSObject *)p_convertToTSDFillWithSize:(unsigned int)arg0 technique:(int)arg1;
- (NSObject *)convertToSimpleTSDFillWithSize:(unsigned int)arg0 context:(NSObject *)arg1;
- (void)setFallbackFill:(TSDFill *)arg0;
- (char)tsch_hasAllResources;
- (void)dealloc;
- (TSCH3DFill *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (TSCH3DFillSetIdentifier *)identifier;
- (TSCH3DFill *)copyWithZone:(struct _NSZone *)arg0;
- (char)isOpaque;
- (void)setIdentifier:(TSCH3DFillSetIdentifier *)arg0;
- (void).cxx_construct;
- (TSUColor *)referenceColor;
- (NSNumber *)percentage;
- (void)paintRect:(struct CGRect)arg0 inContext:(struct CGSize)arg1;
- (void)paintPath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1;
- (int)fillType;

@end
