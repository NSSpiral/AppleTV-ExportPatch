/* Runtime dump - OITSUFlushableCachedImage
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUFlushableCachedImage : OITSUFlushableObject
{
    struct CGImage * _image;
    id _delegate;
    SEL _delegateCreateImageSelector;
}

- (void)dealloc;
- (void)unload;
- (OITSUFlushableCachedImage *)initWithDelegate:(NSObject *)arg0 createImageSelector:(SEL)arg1;
- (char)hasFlushableContent;
- (struct CGImage *)newImage;

@end
