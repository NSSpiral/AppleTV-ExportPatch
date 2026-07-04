/* Runtime dump - CAMetalDrawable
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAMetalDrawable : NSObject <CAMetalDrawable>
{
    CAMetalLayer * _layer;
    struct _CAMetalDrawablePrivate * _priv;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) <MTLTexture> * texture;
@property (readonly) CAMetalLayer * layer;

- (void)presentAtTime:(double)arg0;
- (CAMetalDrawable *)initWithDrawablePrivate:(struct _CAMetalDrawablePrivate *)arg0 layer:(CAMetalLayer *)arg1;
- (struct _CAMetalDrawablePrivate *)priv;
- (void)dealloc;
- (CAMetalLayer *)layer;
- (void)present;
- (<MTLTexture> *)texture;

@end
