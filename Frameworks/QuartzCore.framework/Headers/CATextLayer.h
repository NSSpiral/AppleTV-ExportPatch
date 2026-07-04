/* Runtime dump - CATextLayer
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CATextLayer : CALayer
{
    struct CATextLayerPrivate * _state;
}

@property (copy) id truncationString;
@property char allowsFontSubpixelQuantization;
@property (copy) id string;
@property void * font;
@property float fontSize;
@property struct CGColor * foregroundColor;
@property char wrapped;
@property (copy) NSString * truncationMode;
@property (copy) NSString * alignmentMode;

+ (CATextLayer *)defaultValueForKey:(NSString *)arg0;
+ (char)CA_automaticallyNotifiesObservers:(Class)arg0;
+ (char)needsDisplayForKey:(NSString *)arg0;

- (void)_prepareContext:(struct CGContext *)arg0;
- (struct CGSize)_preferredSize;
- (char)allowsFontSubpixelQuantization;
- (void)_drawLine:(struct __CTLine *)arg0 inContext:(struct CGContext *)arg1 atPoint:(struct CGPoint)arg2;
- (id)_createStringDict;
- (NSString *)truncationString;
- (struct __CTTypesetter *)_retainTypesetter;
- (struct __CTLine *)_createTruncationToken;
- (void)_applyLinesToFunction:(/* block */ id *)arg0 info:(void *)arg1;
- (char)wrapped;
- (void)setTruncationString:(NSString *)arg0;
- (void)setAllowsFontSubpixelQuantization:(char)arg0;
- (char)isWrapped;
- (void)setWrapped:(char)arg0;
- (NSString *)truncationMode;
- (void)setTruncationMode:(NSString *)arg0;
- (NSString *)alignmentMode;
- (void)dealloc;
- (CATextLayer *)init;
- (void)didChangeValueForKey:(NSString *)arg0;
- (NSString *)string;
- (void)setFont:(void *)arg0;
- (NSString *)implicitAnimationForKeyPath:(NSString *)arg0;
- (void *)font;
- (void)setFontSize:(float)arg0;
- (void)setString:(NSString *)arg0;
- (CATextLayer *)initWithLayer:(CALayer *)arg0;
- (struct CGColor *)foregroundColor;
- (void)drawInContext:(struct CGContext *)arg0;
- (void)setForegroundColor:(struct CGColor *)arg0;
- (void)setAlignmentMode:(NSString *)arg0;
- (float)fontSize;

@end
