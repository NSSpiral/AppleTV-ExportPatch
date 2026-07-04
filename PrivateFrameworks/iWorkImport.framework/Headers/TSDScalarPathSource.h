/* Runtime dump - TSDScalarPathSource
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDScalarPathSource : TSDPathSource <TSDMixing, TSDSmartPathSource>
{
    int mType;
    float mScalar;
    struct CGSize mNaturalSize;
}

@property (nonatomic) int type;
@property (nonatomic) float scalar;
@property (readonly, nonatomic) float maxScalar;
@property (nonatomic) struct CGSize naturalSize;

+ (TSDScalarPathSource *)roundedRectangleWithScalar:(float)arg0 naturalSize:(struct CGSize)arg1;
+ (TSDScalarPathSource *)regularPolygonWithScalar:(float)arg0 naturalSize:(struct CGSize)arg1;
+ (NSObject *)pathSourceWithType:(int)arg0 scalar:(float)arg1 naturalSize:(struct CGSize)arg2;
+ (NSObject *)rectangleWithNaturalSize:(struct CGSize)arg0;
+ (TSDScalarPathSource *)chevronWithScalar:(float)arg0 naturalSize:(struct CGSize)arg1;

- (void)saveToArchive:(struct PathSourceArchive *)arg0;
- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (int)mixingTypeWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (id)bezierPathWithoutFlips;
- (void)scaleToNaturalSize:(struct CGSize)arg0;
- (NSString *)valueForSetSelector:(SEL)arg0;
- (struct CGPoint)getControlKnobPosition:(unsigned int)arg0;
- (unsigned int)numberOfControlKnobs;
- (struct CGSize)scaleFactorForInscribedRectangle;
- (TSDScalarPathSource *)initWithType:(int)arg0 scalar:(float)arg1 naturalSize:(struct CGSize)arg2;
- (struct CGPoint)p_getControlKnobPointForRoundedRect;
- (struct CGPoint)p_getControlKnobPointForRegularPolygon;
- (struct CGPoint)p_getControlKnobPointForChevron;
- (void)setScalarValue:(id)arg0;
- (struct CGPath *)p_newRoundedRectPath;
- (struct CGPath *)p_newRegularPolygonPath;
- (struct CGPath *)p_newChevronPath;
- (float)maxScalar;
- (void)p_setControlKnobPointForRoundedRect:(struct CGPoint)arg0;
- (void)p_setControlKnobPointForRegularPolygon:(struct CGPoint)arg0;
- (void)p_setControlKnobPointForChevron:(struct CGPoint)arg0;
- (void)setNaturalSize:(struct CGSize)arg0;
- (TSDScalarPathSource *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setType:(int)arg0;
- (int)type;
- (TSDScalarPathSource *)copyWithZone:(struct _NSZone *)arg0;
- (struct CGSize)naturalSize;
- (void)setScalar:(float)arg0;
- (float)scalar;
- (char)isRectangular;
- (char)isCircular;
- (TSDScalarPathSource *)initWithArchive:(struct PathSourceArchive *)arg0;

@end
