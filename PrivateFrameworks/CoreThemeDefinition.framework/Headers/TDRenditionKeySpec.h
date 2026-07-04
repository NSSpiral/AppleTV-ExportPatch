/* Runtime dump - TDRenditionKeySpec
 * Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDRenditionKeySpec : NSManagedObject <TDElementAttributes>
{
    unsigned int _dimension1;
    unsigned int _dimension2;
    unsigned int _scaleFactor;
    unsigned int _subtype;
    unsigned int _nameIdentifier;
    unsigned int _memoryClass;
    unsigned int _graphicsClass;
    id _stackScratchKey;
    struct _renditionkeytoken * _scratchKey;
}

@property (retain, nonatomic) TDThemeState * state;
@property (retain, nonatomic) TDThemeState * previousState;
@property (retain, nonatomic) TDThemePresentationState * presentationState;
@property (retain, nonatomic) TDThemeValue * value;
@property (retain, nonatomic) TDThemeValue * previousValue;
@property (retain, nonatomic) TDThemeSize * size;
@property (retain, nonatomic) TDThemeDirection * direction;
@property (retain, nonatomic) TDThemePart * part;
@property (retain, nonatomic) TDThemeElement * element;
@property (retain, nonatomic) TDThemeDrawingLayer * layer;
@property (retain, nonatomic) TDThemeIdiom * idiom;
@property (retain, nonatomic) TDThemeUISizeClass * sizeClassHorizontal;
@property (retain, nonatomic) TDThemeUISizeClass * sizeClassVertical;

+ (NSString *)keyPathsForValuesAffectingValueForKey:(NSString *)arg0;

- (void)setScaleFactor:(unsigned int)arg0;
- (void)dealloc;
- (NSString *)debugDescription;
- (struct _renditionkeytoken *)key;
- (unsigned int)subtype;
- (TDRenditionKeySpec *)copyWithZone:(struct _NSZone *)arg0;
- (void)setSubtype:(unsigned int)arg0;
- (unsigned int)scaleFactor;
- (void)copyAttributesInto:(id)arg0;
- (NSDictionary *)copyDataFromAttributes;
- (void)setAttributesFromCopyData:(NSData *)arg0;
- (void)setDimension1:(unsigned int)arg0;
- (void)setDimension2:(unsigned int)arg0;
- (NSData *)dataFromAttributes;
- (void)setAttributesFromData:(NSData *)arg0;
- (unsigned int)nameIdentifier;
- (void)setNameIdentifier:(unsigned int)arg0;
- (void)setMemoryClass:(unsigned int)arg0;
- (void)setGraphicsClass:(unsigned int)arg0;
- (void)getKey:(struct _renditionkeytoken *)arg0;
- (NSString *)scaleFactorString;
- (void)setScaleFactorString:(NSString *)arg0;
- (void)setAttributesFromRenditionKey:(struct _renditionkeytoken *)arg0 withDocument:(struct _renditionkeytoken)arg1;
- (NSString *)keyDescription;
- (unsigned int)dimension1;
- (unsigned int)dimension2;
- (struct _renditionkeyfmt *)keyFormat;
- (unsigned int)memoryClass;
- (unsigned int)graphicsClass;
- (int)attributeCount;

@end
