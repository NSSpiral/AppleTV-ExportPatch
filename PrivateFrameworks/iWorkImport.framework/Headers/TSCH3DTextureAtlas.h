/* Runtime dump - TSCH3DTextureAtlas
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DTextureAtlas : NSObject
{
    NSMutableDictionary * mCachedLabels;
    NSMutableArray * mTextures;
    float mSamples;
}

@property (readonly, nonatomic) float samples;

+ (TSCH3DTextureAtlas *)atlasWithSamples:(float)arg0;
+ (NSMutableArray *)atlas;

- (TSCH3DTextureAtlas *)initWithSamples:(float)arg0;
- (struct tvec3<int>)p_addLabel:(NSString *)arg0;
- (struct tvec2<int>)textureSizeAtIndex:(int)arg0;
- (struct tvec3<int>)positionForLabel:(NSString *)arg0;
- (void)dealloc;
- (float)samples;
- (NSObject *)textureAtIndex:(int)arg0;

@end
