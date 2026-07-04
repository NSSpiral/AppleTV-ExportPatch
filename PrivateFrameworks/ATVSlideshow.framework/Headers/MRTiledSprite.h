/* Runtime dump - MRTiledSprite
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRTiledSprite : NSObject
{
    struct CGPoint mPosition;
    struct CGSize mHalfSize;
    float mRotation;
    struct CGRect mInnerRect;
    struct CGRect mOuterRect;
    char mPreservesImageAspectRatio;
    char mIsSealed;
    NSMutableArray * mTriangles;
    float * mVertices;
    float * mBasicTextureCoordinates;
    float * mInSpriteCoordinates;
    id mTextureCoordinates;
    NSMutableArray * mMiddleTriangles;
    float * mMiddleVertices;
    float * mMiddleBasicTextureCoordinates;
    float * mMiddleInSpriteCoordinates;
    id mMiddleTextureCoordinates;
    NSMutableArray * mOuterTriangles;
    float * mOuterVertices;
    float * mOuterBasicTextureCoordinates;
    float * mOuterInSpriteCoordinates;
    id mOuterTextureCoordinates;
    struct CGSize mInSpriteCoordinatesFactor;
    struct CGPoint mInSpriteCoordinatesOffset;
    id mTextureCoordinatesFactor;
    id mTextureCoordinatesOffset;
    id mNeedsTextureCoordinates;
    char mNeedsInSpriteCoordinates;
    char mNeedsToUpdateInSpriteCoordinates;
    char mHitIsActive;
}

@property (readonly, nonatomic) struct CGPoint position;
@property (readonly, nonatomic) struct CGSize halfSize;
@property (readonly, nonatomic) float rotation;
@property (readonly, nonatomic) struct CGRect innerRect;
@property (readonly, nonatomic) struct CGRect outerRect;
@property (nonatomic) char hitIsActive;
@property (nonatomic) char needsInSpriteCoordinates;
@property (nonatomic) char preservesImageAspectRatio;

- (void)dealloc;
- (struct CGPoint)position;
- (float)rotation;
- (void)renderImageInner:(id)arg0 inContext:(NSObject *)arg1;
- (void)renderImageMiddle:(id)arg0 inContext:(NSObject *)arg1;
- (void)renderImageOuter:(id)arg0 inContext:(NSObject *)arg1;
- (MRTiledSprite *)initWithPosition:(struct CGPoint)arg0 size:(struct CGSize)arg1 zRotation:(float)arg2 innerRect:(struct CGRect)arg3 context:(struct CGSize)arg4;
- (MRTiledSprite *)initWithPosition:(struct CGPoint)arg0 size:(struct CGSize)arg1 zRotation:(float)arg2 innerRect:(struct CGRect)arg3 outerRect:(struct CGSize)arg4 context:(NSObject *)arg5;
- (void)getOpaquePosition:(struct CGPoint *)arg0 andHalfSize:(struct CGSize *)arg1;
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
- (void)subtractSprite:(id)arg0;
- (void)renderDumbImage:(UIImage *)arg0 inContext:(NSObject *)arg1;
- (void)setTextureCoordinatesFactor:(struct CGSize)arg0 andOffset:(struct CGPoint)arg1 onTextureUnit:(unsigned int)arg2;
- (void)subtractSpriteAtPosition:(struct CGPoint)arg0 withSize:(struct CGSize)arg1 zRotation:(float)arg2 andOpaqueRect:(struct CGRect)arg3 inContext:(struct CGSize)arg4;
- (void)setSpriteCoordinatesFactor:(struct CGSize)arg0 andOffset:(struct CGPoint)arg1;
- (void)subtractOpaqueSpriteWithPosition:(struct CGPoint)arg0 halfSize:(struct CGSize)arg1 andRotation:(float)arg2;
- (void)subtractTriangle:(id)arg0 fromTriangle:(float)arg1 addTrianglesTo:(id)arg2;
- (void)seal;
- (void)updateInSpriteCoordinates;
- (void)renderImage:(UIImage *)arg0 inContext:(NSObject *)arg1;
- (void)setNeedsTextureCoordinates:(char)arg0 onTextureUnit:(unsigned int)arg1;

@end
