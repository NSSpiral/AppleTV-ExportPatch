/* Runtime dump - CUIThemeFacet
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIThemeFacet : NSObject <CUIThemeImageSource, NSCopying, NSCoding>
{
    struct _renditionkeytoken * _renditionKeyList;
    unsigned int _themeIndex;
    int _renditionType;
    struct CGSize _thumbnailSize;
    struct CGPoint _hotSpot;
    struct ? _fFlags;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)initialize;
+ (unsigned int)themeNamed:(id)arg0 forBundleIdentifier:(NSString *)arg1 error:(id *)arg2;
+ (NSObject *)_themeStoreForThemeIndex:(unsigned int)arg0;
+ (NSObject *)facetWithElement:(int)arg0 part:(int)arg1 dimension1:(int)arg2 dimension2:(int)arg3 fromTheme:(unsigned int)arg4;
+ (NSArray *)_facetWithKeyList:(struct _renditionkeytoken *)arg0 andRenditionKeyClass:(struct _renditionkeytoken)arg1 orRenditionKey:(Class)arg2 fromTheme:(TSSTheme *)arg3;
+ (void)_invalidateArtworkCaches;
+ (unsigned int)themeForBundleIdentifier:(NSString *)arg0 error:(id *)arg1;
+ (unsigned int)themeWithContentsOfURL:(NSURL *)arg0 error:(id *)arg1;
+ (CUIThemeFacet *)debug_bundleIdentifierForThemeRef:(unsigned int)arg0;
+ (NSObject *)facetWithElement:(int)arg0 part:(int)arg1 fromTheme:(unsigned int)arg2;
+ (NSString *)facetWithRenditionKey:(NSString *)arg0 fromTheme:(unsigned int)arg1;
+ (NSString *)cursorFacetWithName:(NSString *)arg0 fromTheme:(unsigned int)arg1;
+ (char)assetExistsForRenditionKey:(NSString *)arg0 fromTheme:(unsigned int)arg1;

- (int)blendMode;
- (void)dealloc;
- (CUIThemeFacet *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (float)alpha;
- (CUIThemeFacet *)init;
- (NSString *)description;
- (CUIThemeFacet *)copyWithZone:(struct _NSZone *)arg0;
- (UIImage *)image;
- (void)setControlSize:(int)arg0;
- (struct CGSize)imageSize;
- (NSObject *)imageForState:(int)arg0;
- (int)controlSize;
- (UIImage *)thumbnail;
- (NSString *)displayName;
- (struct CGSize)thumbnailSize;
- (CUIThemeSchemaRendition *)_rendition;
- (NSObject *)_themeStore;
- (NSString *)_renditionForSpecificKey:(NSString *)arg0;
- (NSObject *)imageForSliceIndex:(int)arg0;
- (char)_isButtonGlyph;
- (void)_drawAsMaskSpecificRenditionKey:(NSString *)arg0 inFrame:(struct CGRect)arg1 context:(struct CGSize)arg2 alpha:(CIMaskToAlpha *)arg3 operation:(struct CGContext *)arg4 isFocused:(float)arg5;
- (void)_drawSpecificRenditionKey:(NSString *)arg0 inFrame:(struct CGRect)arg1 context:(struct CGSize)arg2 alpha:(CIMaskToAlpha *)arg3 operation:(struct CGContext *)arg4 isFocused:(float)arg5 isFlipped:(int)arg6;
- (CUIThemeFacet *)initWithRenditionKey:(NSString *)arg0 fromTheme:(unsigned int)arg1;
- (void)_initWithRenditionKey:(NSString *)arg0;
- (void)_applyFixedAttributesToKey:(NSString *)arg0;
- (struct CGImage *)copyLayerImageContentsAndCenter:(struct CGRect *)arg0 renditionKey:(struct CGSize)arg1;
- (id)gradientWithKeyAdjustment:(id)arg0 angle:(float *)arg1 style:(unsigned int *)arg2;
- (struct CGImage *)copyLayerImageContentsAndCenter:(struct CGRect *)arg0;
- (NSString *)blendModeAsCAFilterString;
- (void)_drawSpecificRenditionKey:(NSString *)arg0 inFrame:(struct CGRect)arg1 context:(struct CGSize)arg2 isFocused:(char)arg3 isFlipped:(struct CGContext *)arg4;
- (void)drawInFrame:(struct CGRect)arg0 alpha:(struct CGSize)arg1 operation:(ISURLOperation *)arg2 isFocused:(float)arg3 context:(int)arg4;
- (id)themeRendition;
- (void)drawInFrame:(struct CGRect)arg0 alpha:(struct CGSize)arg1 owner:(NSObject *)arg2 userInfo:(float)arg3 context:(NSObject *)arg4;
- (void)drawHighlightInFrame:(struct CGRect)arg0 alpha:(struct CGSize)arg1 owner:(NSObject *)arg2 userInfo:(float)arg3 context:(NSObject *)arg4;
- (void)drawMaskInFrame:(struct CGRect)arg0 alpha:(struct CGSize)arg1 owner:(NSObject *)arg2 userInfo:(float)arg3 context:(NSObject *)arg4;
- (void)_updateSpecificRenditionKey:(NSString *)arg0 isFocused:(char *)arg1 owner:(NSObject *)arg2 userInfo:(NSDictionary *)arg3;
- (char)_canGetRenditionForKey:(NSString *)arg0 withDrawingLayer:(int)arg1;
- (NSString *)_imageForRenditionFromKey:(NSString *)arg0 withSize:(struct CGSize)arg1 isMask:(char)arg2;
- (void)drawInFrame:(struct CGRect)arg0 alpha:(struct CGSize)arg1 operation:(ISURLOperation *)arg2 owner:(float)arg3 userInfo:(int)arg4 context:(NSObject *)arg5;
- (void)drawHighlightInFrame:(struct CGRect)arg0 alpha:(struct CGSize)arg1 operation:(ISURLOperation *)arg2 owner:(float)arg3 userInfo:(int)arg4 context:(NSObject *)arg5;
- (void)_drawMaskFromSpecificRenditionKey:(NSString *)arg0 inFrame:(struct CGRect)arg1 alpha:(struct CGSize)arg2 operation:(ISURLOperation *)arg3 isFocused:(float)arg4 context:(int)arg5;
- (void)drawInFrame:(struct CGRect)arg0 alpha:(struct CGSize)arg1 operation:(ISURLOperation *)arg2 isFocused:(float)arg3 keyAdjustment:(int)arg4 context:(int)arg5;
- (void)drawHighlightInFrame:(struct CGRect)arg0 alpha:(struct CGSize)arg1 operation:(ISURLOperation *)arg2 keyAdjustment:(float)arg3 context:(int)arg4;
- (void)drawMaskInFrame:(struct CGRect)arg0 alpha:(struct CGSize)arg1 operation:(ISURLOperation *)arg2 isFocused:(float)arg3 keyAdjustment:(int)arg4 context:(int)arg5;
- (NSObject *)renditionForSpecificKeyWrapper:(NSObject *)arg0;
- (void)_drawSpecificRenditionKey:(NSString *)arg0 rendition:(CUIThemeSchemaRendition *)arg1 inFrame:(struct CGRect)arg2 context:(struct CGSize)arg3 alpha:(CIMaskToAlpha *)arg4 operation:(struct CGContext *)arg5 isFocused:(float)arg6 isFlipped:(int)arg7;
- (void)drawGradientInFrame:(struct CGRect)arg0 angle:(struct CGSize)arg1 alpha:(CIMaskToAlpha *)arg2 operation:(float)arg3 isFocused:(float)arg4 keyAdjustment:(int)arg5 context:(int)arg6;
- (int)_sliceIndexForSlice:(int)arg0 ofRendition:(CUIThemeSchemaRendition *)arg1;
- (NSString *)_approximateRenditionForRenditionKey:(NSString *)arg0;
- (NSObject *)imageForState:(int)arg0 value:(int)arg1;
- (char)isValidButtonImageSourceForSize:(unsigned int)arg0;
- (NSObject *)imageForState:(int)arg0 value:(int)arg1 size:(unsigned int)arg2;
- (NSString *)renditionKey;
- (float)alphaWithKeyAdjustment:(id)arg0;
- (int)blendModeWithKeyAdjustment:(id)arg0;
- (id)blendModeAsCAFilterStringWithKeyAjustment:(id)arg0;
- (struct CGSize)_thumbnailSizeForRendition:(id)arg0;
- (NSObject *)imageForState:(int)arg0 withValue:(int)arg1;
- (char)hasValueSlices;
- (struct CGPoint)_hotSpot;
- (void)_setHasCheckedButtonGlyph:(char)arg0;
- (void)_setIsButtonGlyph:(char)arg0;
- (CALayer *)makeLayer;
- (void)updateLayer:(id)arg0;
- (void)drawInFrame:(struct CGRect)arg0 isFocused:(struct CGSize)arg1 context:(NSObject *)arg2;
- (void)drawInFrame:(struct CGRect)arg0 alpha:(struct CGSize)arg1 isFocused:(char)arg2 context:(float)arg3;
- (void)drawAsOnePartWithSlice:(int)arg0 inFrame:(struct CGRect)arg1 isFocused:(struct CGSize)arg2 context:(NSObject *)arg3;
- (void)drawAbsoluteAnimationFrame:(double)arg0 destinationFrame:(struct CGRect)arg1 isFocused:(struct CGSize)arg2 context:(NSObject *)arg3;
- (void)drawAnimationFrameMappedFrom0_1RangedValue:(double)arg0 destinationFrame:(struct CGRect)arg1 isFocused:(struct CGSize)arg2 context:(NSObject *)arg3;
- (void)drawSegmentInFrame:(struct CGRect)arg0 isFocused:(struct CGSize)arg1 segmentType:(NSObject *)arg2 context:(int)arg3;
- (void)drawInFrame:(struct CGRect)arg0 owner:(struct CGSize)arg1 userInfo:(NSDictionary *)arg2 context:(NSObject *)arg3;
- (void)drawHighlightInFrame:(struct CGRect)arg0 owner:(struct CGSize)arg1 userInfo:(NSDictionary *)arg2 context:(NSObject *)arg3;
- (void)drawMaskInFrame:(struct CGRect)arg0 owner:(struct CGSize)arg1 userInfo:(NSDictionary *)arg2 context:(NSObject *)arg3;
- (char)hitTestAtPoint:(struct CGPoint)arg0 inFrame:(struct CGRect)arg1 owner:(struct CGSize)arg2 userInfo:(NSDictionary *)arg3;
- (void)drawPulseInFrame:(struct CGRect)arg0 pulseValue:(struct CGSize)arg1 owner:(NSObject *)arg2 userInfo:(float)arg3 context:(NSObject *)arg4;
- (void)drawInFrame:(struct CGRect)arg0 alpha:(struct CGSize)arg1 isFocused:(char)arg2 keyAdjustment:(float)arg3 context:(int)arg4;
- (void)drawHighlightInFrame:(struct CGRect)arg0 alpha:(struct CGSize)arg1 keyAdjustment:(id)arg2 context:(float)arg3;
- (void)drawMaskInFrame:(struct CGRect)arg0 alpha:(struct CGSize)arg1 isFocused:(char)arg2 keyAdjustment:(float)arg3 context:(int)arg4;
- (void)drawPulseInFrame:(struct CGRect)arg0 pulseValue:(struct CGSize)arg1 isFocused:(char)arg2 keyAdjustment:(float)arg3 context:(int)arg4;
- (void)_drawSlice:(int)arg0 inFrame:(struct CGRect)arg1 withKeyAdjustment:(struct CGSize)arg2 context:(NSObject *)arg3;
- (id)renditionMetricsWithKeyAdjustment:(id)arg0;
- (NSObject *)renditionSliceInformationForRect:(struct CGRect)arg0 keyAdjustment:(struct CGSize)arg1;
- (char)isValidButtonImageSource;
- (UIImage *)imageWithKeyAdjustment:(id)arg0;
- (void)_setThemeIndex:(unsigned int)arg0;
- (int)renditionType;
- (struct CGSize)topLeftCapSize;
- (id)maskForSlice:(int)arg0 withKeyAdjustment:(id)arg1;
- (UIImage *)imageForSlice:(int)arg0 withKeyAdjustment:(id)arg1;
- (NSObject *)imageWithSize:(struct CGSize)arg0 keyAdjustment:(id)arg1;
- (NSObject *)highlightWithSize:(struct CGSize)arg0 keyAdjustment:(id)arg1;
- (NSObject *)maskWithSize:(struct CGSize)arg0 keyAdjustment:(id)arg1;
- (unsigned int)themeIndex;

@end
