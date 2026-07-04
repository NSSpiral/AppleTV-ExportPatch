/* Runtime dump - VKPGenericShieldVariant
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPGenericShieldVariant : PBCodable <NSCopying>
{
    struct ? * _layers;
    unsigned int _layersCount;
    unsigned int _layersSpace;
    NSString * _fontName;
    float _fontSize;
    float _leftCapWidth;
    float _leftPadding;
    float _lineSpacing;
    unsigned int _numberOfLines;
    float _rightCapWidth;
    float _rightPadding;
    float _textBaseline;
    struct ? _has;
}

@property (nonatomic) char hasNumberOfLines;
@property (nonatomic) unsigned int numberOfLines;
@property (readonly, nonatomic) unsigned int layersCount;
@property (readonly, nonatomic) struct ? * layers;
@property (nonatomic) char hasTextBaseline;
@property (nonatomic) float textBaseline;
@property (readonly, nonatomic) char hasFontName;
@property (retain, nonatomic) NSString * fontName;
@property (nonatomic) char hasFontSize;
@property (nonatomic) float fontSize;
@property (nonatomic) char hasLeftCapWidth;
@property (nonatomic) float leftCapWidth;
@property (nonatomic) char hasRightCapWidth;
@property (nonatomic) float rightCapWidth;
@property (nonatomic) char hasLineSpacing;
@property (nonatomic) float lineSpacing;
@property (nonatomic) char hasLeftPadding;
@property (nonatomic) float leftPadding;
@property (nonatomic) char hasRightPadding;
@property (nonatomic) float rightPadding;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setNumberOfLines:(unsigned int)arg0;
- (VKPGenericShieldVariant *)copyWithZone:(struct _NSZone *)arg0;
- (float)leftCapWidth;
- (NSString *)fontName;
- (float)lineSpacing;
- (unsigned int)numberOfLines;
- (void)setLineSpacing:(float)arg0;
- (void)setFontSize:(float)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setFontName:(NSString *)arg0;
- (void)setRightPadding:(float)arg0;
- (float)rightPadding;
- (float)fontSize;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (char)hasFontName;
- (float)textBaseline;
- (unsigned int)layersCount;
- (struct ?)layerAtIndex:(SEL)arg0;
- (void)clearLayers;
- (void)addLayer:(struct ?)arg0;
- (void)setTextBaseline:(float)arg0;
- (void)setHasTextBaseline:(char)arg0;
- (char)hasTextBaseline;
- (void)setHasFontSize:(char)arg0;
- (char)hasFontSize;
- (struct ? *)layers;
- (void)setLayers:(struct ? *)arg0 count:(NSObject *)arg1;
- (struct CGSize)_imageSizeWithTextureAtlases:(id)arg0;
- (struct CGImage *)newImageWithBackgroundColor:(struct CGColor *)arg0 borderColor:(struct CGColor *)arg1 textureAtlases:(id)arg2 contentScale:(float)arg3;
- (float)rightCapWidth;
- (float)leftPadding;
- (void)setHasNumberOfLines:(char)arg0;
- (char)hasNumberOfLines;
- (void)setLeftCapWidth:(float)arg0;
- (void)setHasLeftCapWidth:(char)arg0;
- (char)hasLeftCapWidth;
- (void)setRightCapWidth:(float)arg0;
- (void)setHasRightCapWidth:(char)arg0;
- (char)hasRightCapWidth;
- (void)setHasLineSpacing:(char)arg0;
- (char)hasLineSpacing;
- (void)setLeftPadding:(float)arg0;
- (void)setHasLeftPadding:(char)arg0;
- (char)hasLeftPadding;
- (void)setHasRightPadding:(char)arg0;
- (char)hasRightPadding;

@end
