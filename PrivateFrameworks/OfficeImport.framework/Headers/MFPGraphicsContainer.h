/* Runtime dump - MFPGraphicsContainer
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPGraphicsContainer : NSObject
{
    MFPGraphicsState * mParentGraphicsState;
    struct CGAffineTransform mContainerTransform;
}

- (void)dealloc;
- (void).cxx_construct;
- (MFPGraphicsContainer *)initWithParentGraphicsState:(NSObject *)arg0 containerTransform:(struct CGAffineTransform)arg1;
- (NSObject *)parentGraphicsState;
- (struct CGAffineTransform)containerTransform;

@end
