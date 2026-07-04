/* Runtime dump - TSDTextureContext
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDTextureContext : NSObject <NSCopying>
{
    <TSDAnimationSession> * _session;
    id _isMagicMove;
    id _shouldAddFinal;
    id _shouldAddMasks;
    id _shouldAddReversedFinal;
    id _shouldAddMagicMoveObjectOnly;
    id _shouldNotAddContainedReps;
    id _shouldNotAddShapeAttributes;
    id _shouldNotAddText;
    id _shouldNotCacheTexture;
    id _shouldSeparateReflection;
    id _shouldSeparateShadow;
    id _shouldSeparateStroke;
    id _shouldSeparateText;
    id _shouldIgnoreScaleInSourceImage;
    id _shouldDistortToFit;
    id _shouldForceTextureGeneration;
    char _shouldAddNoShapeAttributes;
}

@property (nonatomic) <TSDAnimationSession> * session;
@property (nonatomic) char isMagicMove;
@property (nonatomic) char shouldAddFinal;
@property (nonatomic) char shouldAddReversedFinal;
@property (nonatomic) char shouldAddMagicMoveObjectOnly;
@property (nonatomic) char shouldDistortToFit;
@property (nonatomic) char shouldNotAddContainedReps;
@property (nonatomic) char shouldNotAddShapeAttributes;
@property (nonatomic) char shouldNotAddText;
@property (nonatomic) char shouldNotCacheTexture;
@property (nonatomic) char shouldSeparateReflection;
@property (nonatomic) char shouldSeparateShadow;
@property (nonatomic) char shouldSeparateStroke;
@property (nonatomic) char shouldSeparateText;
@property (nonatomic) char shouldForceTextureGeneration;
@property (nonatomic) char shouldIgnoreScaleInSourceImage;
@property (nonatomic) char shouldAddMasks;

+ (NSObject *)contextWithSession:(<TSDAnimationSession> *)arg0;
+ (NSString *)contextWithTextureContext:(TSDTextureContext *)arg0;
+ (NSString *)context;

- (char)isMagicMove;
- (void)setIsMagicMove:(char)arg0;
- (char)shouldNotCacheTexture;
- (char)shouldDistortToFit;
- (char)shouldNotAddContainedReps;
- (char)shouldIgnoreScaleInSourceImage;
- (char)shouldSeparateShadow;
- (char)shouldSeparateReflection;
- (char)shouldAddMagicMoveObjectOnly;
- (char)shouldSeparateStroke;
- (char)shouldAddMasks;
- (char)shouldAddFinal;
- (void)setShouldAddFinal:(char)arg0;
- (void)setShouldAddMagicMoveObjectOnly:(char)arg0;
- (void)setShouldAddMasks:(char)arg0;
- (char)shouldAddReversedFinal;
- (void)setShouldAddReversedFinal:(char)arg0;
- (void)setShouldDistortToFit:(char)arg0;
- (void)setShouldNotAddContainedReps:(char)arg0;
- (char)shouldNotAddShapeAttributes;
- (void)setShouldNotAddShapeAttributes:(char)arg0;
- (char)shouldNotAddText;
- (void)setShouldNotAddText:(char)arg0;
- (void)setShouldNotCacheTexture:(char)arg0;
- (void)setShouldSeparateReflection:(char)arg0;
- (void)setShouldSeparateShadow:(char)arg0;
- (void)setShouldSeparateStroke:(char)arg0;
- (char)shouldSeparateText;
- (void)setShouldSeparateText:(char)arg0;
- (char)shouldForceTextureGeneration;
- (void)setShouldForceTextureGeneration:(char)arg0;
- (void)setShouldIgnoreScaleInSourceImage:(char)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)reset;
- (TSDTextureContext *)copyWithZone:(struct _NSZone *)arg0;
- (<TSDAnimationSession> *)session;
- (void)setSession:(<TSDAnimationSession> *)arg0;

@end
