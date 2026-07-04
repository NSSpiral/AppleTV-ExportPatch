/* Runtime dump - TSDPointPathSource
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDPointPathSource : TSDPathSource <TSDMixing, TSDSmartPathSource>
{
    int mType;
    struct CGPoint mPoint;
    struct CGSize mNaturalSize;
}

@property int type;
@property struct CGPoint point;
@property struct CGSize naturalSize;

+ (NSObject *)rightSingleArrowWithPoint:(struct CGPoint)arg0 naturalSize:(struct CGSize)arg1;
+ (NSObject *)doubleArrowWithPoint:(struct CGPoint)arg0 naturalSize:(struct CGSize)arg1;
+ (NSObject *)starWithPoint:(struct CGPoint)arg0 naturalSize:(struct CGSize)arg1;
+ (NSObject *)pathSourceWithType:(int)arg0 point:(struct CGPoint)arg1 naturalSize:(struct CGSize)arg2;
+ (NSObject *)leftSingleArrowWithPoint:(struct CGPoint)arg0 naturalSize:(struct CGSize)arg1;
+ (NSObject *)plusWithPoint:(struct CGPoint)arg0 naturalSize:(struct CGSize)arg1;

- (void)saveToArchive:(struct PathSourceArchive *)arg0;
- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (int)mixingTypeWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (id)bezierPathWithoutFlips;
- (void)scaleToNaturalSize:(struct CGSize)arg0;
- (NSString *)valueForSetSelector:(SEL)arg0;
- (TSDPointPathSource *)initWithType:(int)arg0 point:(struct CGPoint)arg1 naturalSize:(struct CGSize)arg2;
- (struct CGPoint)p_getControlKnobPointForArrow;
- (struct CGPoint)p_getControlKnobPointForStarPoints;
- (struct CGPoint)p_getControlKnobPointForStarInnerRadius;
- (struct CGPoint)p_getControlKnobPointForPlus;
- (void)setPointValue:(id)arg0;
- (struct CGPath *)p_newArrowPath;
- (struct CGPath *)p_newStarPath;
- (struct CGPath *)p_newPlusPath;
- (char)p_isRightFacingArrow;
- (struct CGPoint)getControlKnobPosition:(unsigned int)arg0;
- (struct CGPoint)minPointValue;
- (struct CGPoint)maxPointValue;
- (unsigned int)numberOfControlKnobs;
- (struct CGSize)scaleFactorForInscribedRectangle;
- (void)p_setControlKnobPointForArrow:(struct CGPoint)arg0;
- (void)p_setControlKnobPointForStarPoints:(struct CGPoint)arg0;
- (void)p_setControlKnobPointForStarInnerRadius:(struct CGPoint)arg0;
- (void)p_setControlKnobPointForPlus:(struct CGPoint)arg0;
- (char)p_isFlippedDoubleArrow;
- (void)setNaturalSize:(struct CGSize)arg0;
- (TSDPointPathSource *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setType:(int)arg0;
- (int)type;
- (TSDPointPathSource *)copyWithZone:(struct _NSZone *)arg0;
- (struct CGPoint)point;
- (void)setPoint:(struct CGPoint)arg0;
- (struct CGSize)naturalSize;
- (char)isRectangular;
- (char)isCircular;
- (TSDPointPathSource *)initWithArchive:(struct PathSourceArchive *)arg0;

@end
