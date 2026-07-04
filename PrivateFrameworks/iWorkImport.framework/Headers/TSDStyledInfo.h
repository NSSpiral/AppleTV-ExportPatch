/* Runtime dump - TSDStyledInfo
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDStyledInfo : TSDDrawableInfo <TSSStyleClient>

@property (retain, nonatomic) TSSStyle * style;
@property (copy, nonatomic) TSDReflection * reflection;
@property (copy, nonatomic) TSDShadow * shadow;
@property (copy, nonatomic) TSDStroke * stroke;
@property (nonatomic) float opacity;
@property (readonly, nonatomic) char pathIsOpen;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSArray *)referencedStyles;
- (void)replaceReferencedStylesUsingBlock:(id /* block */)arg0;
- (Class)styleClass;
- (char)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg0;
- (NSObject *)boxedValueForProperty:(int)arg0;
- (void)setBoxedValue:(id)arg0 forProperty:(int)arg1;
- (void)setValuesForProperties:(NSDictionary *)arg0;
- (void)adoptStylesheet:(NSObject *)arg0 withMapper:(NSObject *)arg1;
- (void)i_setValue:(GKABMultiValue *)arg0 forProperty:(int)arg1;
- (char)pathIsOpen;
- (NSSet *)styleIdentifierTemplateForNewPreset;
- (NSString *)stylePropertyName;
- (NSObject *)stylesForCopyStyle;
- (NSString *)commandForPasteStyleWithContext:(NSObject *)arg0 pasteboardStyles:(id)arg1;
- (NSString *)commandForPasteStyleWithContext:(NSObject *)arg0 pasteboardStyles:(id)arg1 tailLineEndInfo:(int)arg2;
- (NSSet *)propertyMapForNewPreset;
- (NSObject *)objectForProperty:(int)arg0;
- (TSDStroke *)stroke;
- (TSSStyle *)style;
- (float)opacity;
- (void)setOpacity:(float)arg0;
- (void)setStyle:(TSSStyle *)arg0;
- (TSDShadow *)shadow;
- (void)setShadow:(TSDShadow *)arg0;
- (void)setStroke:(TSDStroke *)arg0;
- (TSDReflection *)reflection;
- (void)setReflection:(TSDReflection *)arg0;

@end
