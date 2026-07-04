/* Runtime dump - MRCroppingSprite
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRCroppingSprite : NSObject
{
    struct CGPoint mPosition;
    struct CGSize mHalfSize;
    float mRotation;
    struct CGRect mInnerRect;
    struct CGRect mOuterRect;
    char mPreservesImageAspectRatio;
    char mHitIsActive;
    char mNeedsInSpriteCoordinates;
    struct CGSize mSpriteCoordinatesFactor;
    struct CGPoint mSpriteCoordinatesOffset;
    unsigned char mMeshType;
}

@property (readonly, nonatomic) struct CGPoint position;
@property (readonly, nonatomic) struct CGSize halfSize;
@property (readonly, nonatomic) float rotation;
@property (nonatomic) struct CGRect innerRect;
@property (nonatomic) struct CGRect outerRect;
@property (nonatomic) char preservesImageAspectRatio;
@property (nonatomic) char hitIsActive;
@property (nonatomic) char needsInSpriteCoordinates;
@property (nonatomic) struct CGSize spriteCoordinatesFactor;
@property (nonatomic) struct CGPoint spriteCoordinatesOffset;
@property (nonatomic) unsigned char meshType;

+ (void)renderDumbImage:(UIImage *)arg0 inContext:(NSObject *)arg1 atPosition:(struct CGPoint)arg2 andSize:(struct CGSize)arg3 zRotation:(float)arg4;
+ (void)renderImage:(UIImage *)arg0 inContext:(NSObject *)arg1 atPosition:(struct CGPoint)arg2 andSize:(struct CGSize)arg3 zRotation:(float)arg4;
+ (void)renderImage:(UIImage *)arg0 withMask:(NSObject *)arg1 inContext:(NSObject *)arg2 atPosition:(struct CGPoint)arg3 andSize:(struct CGSize)arg4 zRotation:(float)arg5;
+ (void)renderImage:(UIImage *)arg0 inContext:(NSObject *)arg1 atPosition:(struct CGPoint)arg2 andSize:(struct CGSize)arg3 withReferenceAspectRatio:(float)arg4 andJustifications:(struct CGPoint)arg5;
+ (void)renderDumbImage:(UIImage *)arg0 inContext:(NSObject *)arg1 atPosition:(struct CGPoint)arg2 andSize:(struct CGSize)arg3;
+ (void)renderImage:(UIImage *)arg0 inContext:(NSObject *)arg1 atPosition:(struct CGPoint)arg2 andSize:(struct CGSize)arg3;

- (MRCroppingSprite *)init;
- (void)reset;
- (struct CGPoint)position;
- (float)rotation;
- (void)fakeRenderInContext:(NSObject *)arg0 atPosition:(struct CGPoint)arg1 andSize:(struct CGSize)arg2 zRotation:(float)arg3;
- (void)setInnerRect:(struct CGRect)arg0;
- (void)setOuterRect:(struct CGRect)arg0;
- (void)renderDumbImage:(UIImage *)arg0 inContext:(NSObject *)arg1 atPosition:(struct CGPoint)arg2 andSize:(struct CGSize)arg3 zRotation:(float)arg4;
- (void)renderImage:(UIImage *)arg0 inContext:(NSObject *)arg1 atPosition:(struct CGPoint)arg2 andSize:(struct CGSize)arg3 zRotation:(float)arg4;
- (void)renderImage:(UIImage *)arg0 withMask:(NSObject *)arg1 inContext:(NSObject *)arg2 atPosition:(struct CGPoint)arg3 andSize:(struct CGSize)arg4 zRotation:(float)arg5;
- (void)renderImage:(UIImage *)arg0 inContext:(NSObject *)arg1 atPosition:(struct CGPoint)arg2 andSize:(struct CGSize)arg3 withReferenceAspectRatio:(float)arg4 andJustifications:(struct CGPoint)arg5;
- (void)renderImageInner:(id)arg0 inContext:(NSObject *)arg1;
- (void)renderImageMiddle:(id)arg0 inContext:(NSObject *)arg1;
- (void)renderImageOuter:(id)arg0 inContext:(NSObject *)arg1;
- (void)renderDumbImage:(UIImage *)arg0 inContext:(NSObject *)arg1 atPosition:(struct CGPoint)arg2 andSize:(struct CGSize)arg3;
- (void)renderImage:(UIImage *)arg0 inContext:(NSObject *)arg1 atPosition:(struct CGPoint)arg2 andSize:(struct CGSize)arg3;
- (MRCroppingSprite *)initWithPosition:(struct CGPoint)arg0 size:(struct CGSize)arg1 zRotation:(float)arg2 context:(NSObject *)arg3;
- (MRCroppingSprite *)initWithPosition:(struct CGPoint)arg0 size:(struct CGSize)arg1 zRotation:(float)arg2 innerRect:(struct CGRect)arg3 context:(struct CGSize)arg4;
- (MRCroppingSprite *)initWithPosition:(struct CGPoint)arg0 size:(struct CGSize)arg1 zRotation:(float)arg2 innerRect:(struct CGRect)arg3 outerRect:(struct CGSize)arg4 context:(NSObject *)arg5;
- (void)getOpaquePosition:(struct CGPoint *)arg0 andHalfSize:(struct CGSize *)arg1;
- (void)renderImageInner:(id)arg0 inContext:(NSObject *)arg1 atPosition:(struct CGPoint)arg2 andSize:(struct CGSize)arg3 zRotation:(float)arg4;
- (void)renderImageMiddle:(id)arg0 inContext:(NSObject *)arg1 atPosition:(struct CGPoint)arg2 andSize:(struct CGSize)arg3 zRotation:(float)arg4;
- (void)renderImageOuter:(id)arg0 inContext:(NSObject *)arg1 atPosition:(struct CGPoint)arg2 andSize:(struct CGSize)arg3 zRotation:(float)arg4;
- (char)hitAtPoint:(struct CGPoint)arg0 withInverseMatrix:(NSSQLRelationship *)arg1 localPoint:(float)arg2;
- (char)getVerticesCoordinates:(id *)arg0 withMatrix:(struct CGPoint)arg1;
- (struct CGSize)halfSize;
- (struct CGRect)innerRect;
- (struct CGRect)outerRect;
- (char)preservesImageAspectRatio;
- (void)setPreservesImageAspectRatio:(char)arg0;
- (char)hitIsActive;
- (void)setHitIsActive:(char)arg0;
- (char)needsInSpriteCoordinates;
- (void)setNeedsInSpriteCoordinates:(char)arg0;
- (struct CGSize)spriteCoordinatesFactor;
- (void)setSpriteCoordinatesFactor:(struct CGSize)arg0;
- (struct CGPoint)spriteCoordinatesOffset;
- (void)setSpriteCoordinatesOffset:(struct CGPoint)arg0;
- (unsigned char)meshType;
- (void)setMeshType:(unsigned char)arg0;

@end
