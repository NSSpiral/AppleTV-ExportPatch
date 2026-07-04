/* Runtime dump - TSUFlushableCachedImage
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUFlushableCachedImage : TSUFlushableObject
{
    struct CGImage * _image;
    id _delegate;
    SEL _delegateCreateImageSelector;
}

- (void)dealloc;
- (void)unload;
- (TSUFlushableCachedImage *)initWithDelegate:(NSObject *)arg0 createImageSelector:(SEL)arg1;
- (char)hasFlushableContent;
- (struct CGImage *)newImage;

@end
