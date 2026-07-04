/* Runtime dump - MFPGraphicsState
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPGraphicsState : NSObject
{
    struct CGAffineTransform mPageTransform;
    struct CGAffineTransform mWorldTransform;
}

- (void)setWorldTransform:(struct CGAffineTransform)arg0;
- (struct CGAffineTransform)worldTransform;
- (void)dealloc;
- (void).cxx_construct;
- (MFPGraphicsState *)initWithDefaults;
- (void)multiplyWorldTransformBy:(struct CGAffineTransform)arg0 order:(int)arg1;
- (void)setPageTransform:(struct CGAffineTransform)arg0;
- (MFPGraphicsState *)initWithGraphicsState:(NSObject *)arg0;
- (struct CGAffineTransform)pageTransform;
- (void)removeTransform:(struct CGAffineTransform)arg0;

@end
