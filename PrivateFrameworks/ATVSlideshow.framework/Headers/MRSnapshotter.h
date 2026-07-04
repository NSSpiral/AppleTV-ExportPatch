/* Runtime dump - MRSnapshotter
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRSnapshotter : NSObject
{
    MRRenderer * _renderer;
    EAGLContext * _context;
    MRTexture * _texture;
    struct CGSize _size;
}

@property (nonatomic) struct CGSize size;
@property (nonatomic) char isFlipped;
@property (nonatomic) double timeQuantum;
@property (readonly, nonatomic) struct CGColorSpace * colorSpace;

- (struct CGColorSpace *)colorSpace;
- (void)dealloc;
- (struct CGSize)size;
- (void)setSize:(struct CGSize)arg0;
- (char)isFlipped;
- (double)timeQuantum;
- (void)setTimeQuantum:(double)arg0;
- (MRSnapshotter *)initWithMontage:(MCMontage *)arg0 andAssetManagementDelegate:(NSObject *)arg1 isReadOnly:(char)arg2;
- (struct CGImage *)CGImageSnapshotAtTime:(double)arg0;
- (void)_snapshotToBuffer:(unsigned int *)arg0 withBytesPerRow:(unsigned long)arg1;
- (struct CGImage *)_CGImageSnapshot;
- (void)snapshotToBuffer:(unsigned int *)arg0 withBytesPerRow:(unsigned long)arg1 atTime:(double)arg2;
- (struct CGImage *)CGImageSnapshotAtState:(NSObject *)arg0;
- (void)setIsFlipped:(char)arg0;

@end
