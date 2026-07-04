/* Runtime dump - CIBurstFaceInfo
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIBurstFaceInfo : NSObject
{
    int swFaceId;
    int swLastFrameSeen;
    int hwFaceId;
    int hwLastFrameSeen;
    struct CGPoint swCenter;
    struct CGSize swSize;
    struct CGPoint hwCenter;
    struct CGSize hwSize;
}

@property int swFaceId;
@property struct CGPoint swCenter;
@property struct CGSize swSize;
@property int swLastFrameSeen;
@property int hwFaceId;
@property struct CGPoint hwCenter;
@property struct CGSize hwSize;
@property int hwLastFrameSeen;

- (void)setSwFaceId:(int)arg0;
- (void)setSwCenter:(struct CGPoint)arg0;
- (void)setSwSize:(struct CGSize)arg0;
- (void)setSwLastFrameSeen:(int)arg0;
- (void)setHwFaceId:(int)arg0;
- (void)setHwCenter:(struct CGPoint)arg0;
- (void)setHwSize:(struct CGSize)arg0;
- (void)setHwLastFrameSeen:(int)arg0;
- (struct CGPoint)hwCenter;
- (struct CGSize)hwSize;
- (struct CGPoint)swCenter;
- (struct CGSize)swSize;
- (int)hwFaceId;
- (struct CGRect)hwFaceRect;
- (int)swFaceId;
- (struct CGRect)swFaceRect;
- (float)overlapWithHwRect:(struct CGRect)arg0;
- (float)overlapWithSwRect:(struct CGRect)arg0;
- (int)swLastFrameSeen;
- (int)hwLastFrameSeen;
- (CIBurstFaceInfo *)init;

@end
