/* Runtime dump - AutoCropper
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface AutoCropper : NSObject
{
    NSNumber * bufferZone;
    char shouldFavorBottom;
    char shouldFavorTop;
    struct CGSize originalImageSize;
}

@property (retain, nonatomic) NSNumber * bufferZone;
@property (nonatomic) char shouldFavorBottom;
@property (nonatomic) char shouldFavorTop;
@property (nonatomic) struct CGSize originalImageSize;

- (void)setShouldFavorTop:(char)arg0;
- (void)setShouldFavorBottom:(char)arg0;
- (struct CGRect)rectContainingRect:(NSObject *)arg0 andOtherRect:(SEL)arg1;
- (struct CGRect)rectWithSize:(NSObject *)arg0 andPoint:(SEL)arg1 inPosition:(struct CGSize)arg2 fromOriginalSize:(struct CGPoint)arg3;
- (struct CGRect)scaleRect:(NSObject *)arg0 toFitSize:(SEL)arg1 withAnchorPoint:(struct CGRect)arg2;
- (int)determineBestPositionWithinSize:(struct CGSize)arg0 forImportantRect:(struct CGRect)arg1 restrictRect:(struct CGSize)arg2;
- (struct CGRect)scaleRect:(NSObject *)arg0 byScale:(SEL)arg1;
- (struct CGRect)expandRect:(NSObject *)arg0 toContainRect:(SEL)arg1;
- (struct CGRect)computeClippingWithinSize:(NSObject *)arg0 andImportantRect:(SEL)arg1;
- (int)getRatioOfSize:(struct CGSize)arg0;
- (id)clusterRects:(id)arg0;
- (struct CGRect)computeClippingWithinSize:(NSObject *)arg0 andImportantRects:(SEL)arg1;
- (struct CGRect)computeClippingWithinSize:(NSObject *)arg0 forImportantRect:(SEL)arg1 andType:(struct CGSize)arg2 restrictRect:(struct CGRect)arg3;
- (struct CGRect)computeClippingWithinSize:(NSObject *)arg0 forMultipleRects:(SEL)arg1;
- (NSNumber *)bufferZone;
- (void)setBufferZone:(NSNumber *)arg0;
- (char)shouldFavorTop;
- (char)shouldFavorBottom;
- (struct CGSize)originalImageSize;
- (void)setOriginalImageSize:(struct CGSize)arg0;
- (AutoCropper *)init;

@end
