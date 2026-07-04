/* Runtime dump - CUICatalog
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUICatalog : NSObject
{
    unsigned int _storageRef;
}

+ (CUICatalog *)bestMatchUsingImages:(id)arg0 scaleFactor:(float)arg1 deviceIdiom:(int)arg2 deviceSubtype:(unsigned int)arg3 sizeClassHorizontal:(int)arg4 sizeClassVertical:(int)arg5;
+ (CUICatalog *)systemUICatalog;
+ (CUICatalog *)defaultUICatalog;
+ (CUICatalog *)defaultUICatalogForBundle:(NSObject *)arg0;
+ (CUICatalog *)bestMatchUsingImages:(id)arg0 scaleFactor:(float)arg1 deviceIdiom:(int)arg2 deviceSubtype:(unsigned int)arg3;

- (NSString *)debugDescription;
- (struct ?)styledInsetsForStylePresetName:(NSString *)arg0 styleConfiguration:(NSDictionary *)arg1 foregroundColor:(struct CGColor *)arg2 scale:(float)arg3;
- (UIImage *)imageByStylingImage:(struct CGImage *)arg0 stylePresetName:(NSString *)arg1 styleConfiguration:(NSDictionary *)arg2 foregroundColor:(struct CGColor *)arg3 scale:(float)arg4;
- (CUICatalog *)initWithName:(NSString *)arg0 fromBundle:(NSObject *)arg1;
- (CUICatalog *)initWithName:(NSString *)arg0 fromBundle:(NSObject *)arg1 error:(id *)arg2;
- (NSString *)imageWithName:(NSString *)arg0 scaleFactor:(float)arg1 deviceIdiom:(int)arg2 deviceSubtype:(unsigned int)arg3 sizeClassHorizontal:(int)arg4 sizeClassVertical:(int)arg5;
- (NSString *)dataWithName:(NSString *)arg0;
- (void)clearCachedImageResources;
- (NSString *)imagesWithName:(NSString *)arg0;
- (NSObject *)_themeStore;
- (NSString *)_baseKeyForName:(NSString *)arg0;
- (NSArray *)allImageNames;
- (NSString *)imageWithName:(NSString *)arg0 scaleFactor:(float)arg1 deviceIdiom:(int)arg2 deviceSubtype:(unsigned int)arg3;
- (NSString *)_resolvedRenditionKeyForName:(NSString *)arg0 scaleFactor:(float)arg1 deviceIdiom:(int)arg2 deviceSubtype:(unsigned int)arg3 sizeClassHorizontal:(int)arg4 sizeClassVertical:(int)arg5 memoryClass:(unsigned int)arg6 graphicsClass:(unsigned int)arg7;
- (NSString *)dataWithName:(NSString *)arg0 deviceIdiom:(int)arg1 deviceSubtype:(unsigned int)arg2 memoryClass:(unsigned int)arg3 graphicsClass:(unsigned int)arg4;
- (char)canGetShapeEffectRenditionWithKey:(NSString *)arg0;
- (NSString *)renditionKeyForShapeEffectPresetWithStylePresetName:(NSString *)arg0 state:(int)arg1 presentationState:(int)arg2 value:(int)arg3 resolution:(unsigned int)arg4;
- (NSObject *)renditionKeyForShapeEffectPresetWithStyleID:(unsigned int)arg0 state:(int)arg1 presentationState:(int)arg2 value:(int)arg3 resolution:(unsigned int)arg4;
- (NSString *)renditionKeyForShapeEffectPresetForStylePresetName:(NSString *)arg0 styleConfiguration:(NSDictionary *)arg1;
- (NSString *)newShapeEffectPresetWithRenditionKey:(NSString *)arg0;
- (NSString *)newShapeEffectPresetForStylePresetName:(NSString *)arg0 styleConfiguration:(NSDictionary *)arg1;
- (char)requiredDrawOfUnstyledGlyphs:(unsigned short *)arg0 atPositions:(unsigned short)arg1 inContext:(struct CGPoint *)arg2 withFont:(struct CGPoint)arg3 count:(struct CGContext *)arg4;
- (NSString *)newTextEffectStackForStylePresetName:(NSString *)arg0 styleConfiguration:(NSDictionary *)arg1 foregroundColor:(struct CGColor *)arg2;
- (char)fillStyledPath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1 stylePresetName:(NSString *)arg2 styleConfiguration:(NSDictionary *)arg3;
- (char)_doStyledQuartzDrawingInContext:(struct CGContext *)arg0 inBounds:(struct CGRect)arg1 stylePresetName:(struct CGSize)arg2 styleConfiguration:(NSDictionary *)arg3 drawingHandler:(id /* block */)arg4;
- (char)hasStylePresetWithName:(NSString *)arg0 styleConfiguration:(NSDictionary *)arg1;
- (NSString *)newShapeEffectStackForStylePresetName:(NSString *)arg0 styleConfiguration:(NSDictionary *)arg1 foregroundColor:(struct CGColor *)arg2;
- (NSString *)imageWithName:(NSString *)arg0 scaleFactor:(float)arg1;
- (NSString *)imageWithName:(NSString *)arg0 scaleFactor:(float)arg1 deviceIdiom:(int)arg2;
- (struct CGPDFDocument *)pdfDocumentWithName:(NSString *)arg0;
- (unsigned int)_themeRef;
- (int)artVariantIDOrZero;
- (char)strokeStyledPath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1 stylePresetName:(NSString *)arg2 styleConfiguration:(NSDictionary *)arg3;
- (char)fillStyledRect:(struct CGRect)arg0 inContext:(struct CGSize)arg1 stylePresetName:(NSString *)arg2 styleConfiguration:(struct CGContext *)arg3;
- (char)hasStylePresetWithName:(NSString *)arg0;
- (struct CGColor *)equivalentForegroundColorForStylePresetWithName:(NSString *)arg0 styleConfiguration:(NSDictionary *)arg1;
- (int)blendModeForStylePresetWithName:(NSString *)arg0 styleConfiguration:(NSDictionary *)arg1;
- (CUICatalog *)initWithURL:(NSString *)arg0 error:(id *)arg1;
- (char)drawGlyphs:(unsigned short *)arg0 atPositions:(unsigned short)arg1 inContext:(struct CGPoint *)arg2 withFont:(struct CGPoint)arg3 count:(struct CGContext *)arg4 stylePresetName:(struct __CTFont *)arg5 styleConfiguration:(unsigned int)arg6 foregroundColor:(UIColor *)arg7;

@end
