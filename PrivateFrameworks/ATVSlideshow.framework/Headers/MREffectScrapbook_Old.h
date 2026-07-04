/* Runtime dump - MREffectScrapbook_Old
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MREffectScrapbook_Old : MREffect
{
    id mImageProviders;
    MRImageProvider * mBackgroundImageProvider;
    NSMutableDictionary * mSprites;
    unsigned int mNumberOfVertices;
    float * mMeshVertices;
    float * mMeshTextureVertices;
    float mLocalTranslationX;
    float mLocalTranslationY;
    float mZoomScale;
    double mPhaseTime;
}

+ (void)initialize;
+ (void)renderImage:(UIImage *)arg0 withFrame:(struct CGRect)arg1 andMask:(NSObject *)arg2 usingSprite:(id)arg3 inContext:(NSObject *)arg4;
+ (void)renderDumbImage:(UIImage *)arg0 inContext:(NSObject *)arg1 atPosition:(struct CGPoint)arg2 andSize:(struct CGSize)arg3 zRotation:(float)arg4 withBorderRect:(struct CGRect)arg5;

- (void)_unload;
- (char)isOpaque;
- (void)_cleanup;
- (MREffectScrapbook_Old *)initWithEffectID:(NSString *)arg0;
- (void)setPixelSize:(struct CGSize)arg0;
- (void)renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)prerenderForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)isAlphaFriendly;
- (NSObject *)elementHitAtPoint:(struct CGPoint)arg0 withInverseMatrix:(NSSQLRelationship *)arg1 localPoint:(float)arg2;
- (char)getVerticesCoordinates:(id *)arg0 withMatrix:(struct CGPoint)arg1 forElement:(NSObject *)arg2;
- (void)renderEffect2AtTime:(double)arg0 movieVersion:(char)arg1 inContext:(NSObject *)arg2 withArguments:(NSDictionary *)arg3;
- (void)renderEffect3AtTime:(double)arg0 movieVersion:(char)arg1 inContext:(NSObject *)arg2 withArguments:(NSDictionary *)arg3;
- (void)renderEffect4AtTime:(double)arg0 movieVersion:(char)arg1 inContext:(NSObject *)arg2 withArguments:(NSDictionary *)arg3;
- (void)renderEffect5AtTime:(double)arg0 movieVersion:(char)arg1 inContext:(NSObject *)arg2 withArguments:(NSDictionary *)arg3;
- (void)renderEffect6AtTime:(double)arg0 movieVersion:(char)arg1 inContext:(NSObject *)arg2 withArguments:(NSDictionary *)arg3;
- (void)renderEffect7AtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (void)renderEffect8AtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (void)renderEffect9AtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (void)renderEffect10AtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (void)renderEffect1AtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (void)renderBackgroundAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2 subtractingSprites:(id)arg3 withTranslation:(struct CGPoint)arg4 andScale:(float)arg5;

@end
