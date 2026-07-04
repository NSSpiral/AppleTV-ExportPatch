/* Runtime dump - MDTextureCanvas
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface MDTextureCanvas : NSObject <MDRenderTarget>
{
    struct CGSize _size;
    struct CGSize _sizeInPixels;
    float _contentScale;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) struct CGSize size;
@property (readonly, nonatomic) float contentScale;
@property (readonly, nonatomic) struct CGSize sizeInPixels;
@property (readonly, nonatomic) float averageFPS;

- (void)dealloc;
- (struct CGSize)size;
- (NSString *)description;
- (void).cxx_construct;
- (float)contentScale;
- (struct CGSize)sizeInPixels;
- (void)willDrawView;
- (void)didDrawView;
- (MDTextureCanvas *)initWithSize:(struct CGSize)arg0 scale:(float)arg1;

@end
