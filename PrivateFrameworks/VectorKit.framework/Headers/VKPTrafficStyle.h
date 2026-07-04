/* Runtime dump - VKPTrafficStyle
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPTrafficStyle : PBCodable <NSCopying>
{
    float _fadingOffset;
    float _fadingSlope;
    unsigned int _fillColor;
    float _patternLength;
    float _patternSlotLength;
    float _patternWidth;
    unsigned int _secondaryColor;
    int _uNUSEDPattern;
    float _widthFraction;
    struct ? _has;
}

@property (nonatomic) char hasWidthFraction;
@property (nonatomic) float widthFraction;
@property (nonatomic) char hasFillColor;
@property (nonatomic) unsigned int fillColor;
@property (nonatomic) char hasUNUSEDPattern;
@property (nonatomic) int uNUSEDPattern;
@property (nonatomic) char hasPatternSlotLength;
@property (nonatomic) float patternSlotLength;
@property (nonatomic) char hasSecondaryColor;
@property (nonatomic) unsigned int secondaryColor;
@property (nonatomic) char hasPatternLength;
@property (nonatomic) float patternLength;
@property (nonatomic) char hasPatternWidth;
@property (nonatomic) float patternWidth;
@property (nonatomic) char hasFadingOffset;
@property (nonatomic) float fadingOffset;
@property (nonatomic) char hasFadingSlope;
@property (nonatomic) float fadingSlope;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (VKPTrafficStyle *)copyWithZone:(struct _NSZone *)arg0;
- (void)setFillColor:(unsigned int)arg0;
- (unsigned int)fillColor;
- (NSDictionary *)dictionaryRepresentation;
- (void)setSecondaryColor:(unsigned int)arg0;
- (unsigned int)secondaryColor;
- (char)hasFillColor;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (void)setHasFillColor:(char)arg0;
- (float)patternSlotLength;
- (float)patternLength;
- (float)patternWidth;
- (float)fadingOffset;
- (float)widthFraction;
- (void)setWidthFraction:(float)arg0;
- (void)setHasWidthFraction:(char)arg0;
- (char)hasWidthFraction;
- (int)uNUSEDPattern;
- (void)setUNUSEDPattern:(int)arg0;
- (void)setHasUNUSEDPattern:(char)arg0;
- (char)hasUNUSEDPattern;
- (void)setPatternSlotLength:(float)arg0;
- (void)setHasPatternSlotLength:(char)arg0;
- (char)hasPatternSlotLength;
- (void)setHasSecondaryColor:(char)arg0;
- (char)hasSecondaryColor;
- (void)setPatternLength:(float)arg0;
- (void)setHasPatternLength:(char)arg0;
- (char)hasPatternLength;
- (void)setPatternWidth:(float)arg0;
- (void)setHasPatternWidth:(char)arg0;
- (char)hasPatternWidth;
- (void)setFadingOffset:(float)arg0;
- (void)setHasFadingOffset:(char)arg0;
- (char)hasFadingOffset;
- (void)setFadingSlope:(float)arg0;
- (void)setHasFadingSlope:(char)arg0;
- (char)hasFadingSlope;
- (float)fadingSlope;

@end
