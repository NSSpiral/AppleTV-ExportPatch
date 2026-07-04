/* Runtime dump - VKPGenericShieldStyleInfo
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPGenericShieldStyleInfo : PBCodable <NSCopying>
{
    struct ? _textDropShadowOffsets;
    unsigned int _backgroundColor;
    unsigned int _borderColor;
    int _style;
    unsigned int _textColor;
    unsigned int _textDropShadowColor;
    float _textDropShadowSize;
    unsigned int _textStrokeColor;
    float _textStrokeSize;
    struct ? _has;
}

@property (nonatomic) char hasStyle;
@property (nonatomic) int style;
@property (nonatomic) char hasBackgroundColor;
@property (nonatomic) unsigned int backgroundColor;
@property (nonatomic) char hasBorderColor;
@property (nonatomic) unsigned int borderColor;
@property (nonatomic) char hasTextColor;
@property (nonatomic) unsigned int textColor;
@property (nonatomic) char hasTextStrokeSize;
@property (nonatomic) float textStrokeSize;
@property (nonatomic) char hasTextStrokeColor;
@property (nonatomic) unsigned int textStrokeColor;
@property (readonly, nonatomic) unsigned int textDropShadowOffsetsCount;
@property (readonly, nonatomic) float * textDropShadowOffsets;
@property (nonatomic) char hasTextDropShadowSize;
@property (nonatomic) float textDropShadowSize;
@property (nonatomic) char hasTextDropShadowColor;
@property (nonatomic) unsigned int textDropShadowColor;

- (void)dealloc;
- (void)setBackgroundColor:(unsigned int)arg0;
- (unsigned int)backgroundColor;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (VKPGenericShieldStyleInfo *)copyWithZone:(struct _NSZone *)arg0;
- (void)setTextColor:(unsigned int)arg0;
- (int)style;
- (void)setStyle:(int)arg0;
- (unsigned int)textColor;
- (void)setBorderColor:(unsigned int)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (unsigned int)borderColor;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (unsigned int)textStrokeColor;
- (unsigned int)textDropShadowColor;
- (float)textStrokeSize;
- (unsigned int)textDropShadowOffsetsCount;
- (float)textDropShadowOffsetAtIndex:(unsigned int)arg0;
- (float)textDropShadowSize;
- (void)setHasBackgroundColor:(char)arg0;
- (char)hasBackgroundColor;
- (void)setHasBorderColor:(char)arg0;
- (char)hasBorderColor;
- (void)clearTextDropShadowOffsets;
- (void)addTextDropShadowOffset:(float)arg0;
- (void)setHasStyle:(char)arg0;
- (char)hasStyle;
- (void)setHasTextColor:(char)arg0;
- (char)hasTextColor;
- (void)setTextStrokeSize:(float)arg0;
- (void)setHasTextStrokeSize:(char)arg0;
- (char)hasTextStrokeSize;
- (void)setTextStrokeColor:(unsigned int)arg0;
- (void)setHasTextStrokeColor:(char)arg0;
- (char)hasTextStrokeColor;
- (float *)textDropShadowOffsets;
- (void)setTextDropShadowOffsets:(float *)arg0 count:(unsigned int)arg1;
- (void)setTextDropShadowSize:(float)arg0;
- (void)setHasTextDropShadowSize:(char)arg0;
- (char)hasTextDropShadowSize;
- (void)setTextDropShadowColor:(unsigned int)arg0;
- (void)setHasTextDropShadowColor:(char)arg0;
- (char)hasTextDropShadowColor;

@end
