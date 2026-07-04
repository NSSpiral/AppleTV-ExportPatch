/* Runtime dump - MRPictureFrameInfo
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRPictureFrameInfo : NSObject
{
    struct CGRect rect;
    struct CGRect tableRect;
    char onTable;
    NSString * aspectRatio;
    char ignoreMatte;
    char useLastFrame;
}

@property (nonatomic) struct CGRect rect;
@property (nonatomic) struct CGRect tableRect;
@property (nonatomic) char onTable;
@property (copy, nonatomic) NSString * aspectRatio;
@property (nonatomic) char ignoreMatte;
@property (nonatomic) char useLastFrame;

- (void)dealloc;
- (void)setAspectRatio:(NSString *)arg0;
- (NSString *)aspectRatio;

@end
