/* Runtime dump - CIBurstFaceConfigEntry
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIBurstFaceConfigEntry : NSObject
{
    int faceId;
    struct CGRect faceRect;
    int framesSinceLast;
}

@property int faceId;
@property struct CGRect faceRect;
@property int framesSinceLast;

- (int)faceId;
- (struct CGRect)faceRect;
- (CIBurstFaceConfigEntry *)initWithRect:(struct CGRect)arg0 withFaceId:(struct CGSize)arg1;
- (void)setFaceId:(int)arg0;
- (void)setFaceRect:(struct CGRect)arg0;
- (int)framesSinceLast;
- (void)setFramesSinceLast:(int)arg0;

@end
