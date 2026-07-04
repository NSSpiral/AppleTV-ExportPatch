/* Runtime dump - TSCH3DTextureAtlasTexture
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DTextureAtlasTexture : NSObject
{
    struct tvec2<int> mSize;
    float mSamples;
    NSMutableArray * mLabels;
    struct vector<glm::detail::tvec2<int>, std::__1::allocator<glm::detail::tvec2<int> > > mPositions;
    int mCurrentxpos;
    int mCurrentypos;
    int mCurrentheight;
    TSCH3DTextureAtlasTextureResource * mResource;
}

@property (readonly, nonatomic) struct tvec2<int> size;

- (void)p_invalidateResource;
- (NSObject *)getTextureDataBuffer;
- (void)dealloc;
- (struct tvec2<int>)size;
- (TSCH3DTextureAtlasTexture *)initWithSize:(struct tvec2<int>)arg0;
- (void).cxx_construct;
- (void).cxx_destruct;
- (struct tvec2<int>)addLabel:(NSString *)arg0;
- (CPLResource *)resource;

@end
