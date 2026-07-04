/* Runtime dump - TSDInstantAlphaImage
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDInstantAlphaImage : NSObject
{
    int mWidth;
    int mHeight;
    unsigned int * mImageData;
}

- (TSDInstantAlphaImage *)initWithWidth:(int)arg0 height:(int)arg1;
- (unsigned int)averageColorAtXPosition:(int)arg0 yPosition:(int)arg1;
- (void)dealloc;

@end
