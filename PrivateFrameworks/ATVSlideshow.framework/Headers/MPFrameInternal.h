/* Runtime dump - MPFrameInternal
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPFrameInternal : NSObject
{
    NSString * frameID;
    NSString * presetID;
}

@property (retain, nonatomic) NSString * frameID;
@property (retain, nonatomic) NSString * presetID;

- (void)dealloc;
- (NSString *)presetID;
- (void)setPresetID:(NSString *)arg0;
- (NSString *)frameID;
- (void)setFrameID:(NSString *)arg0;

@end
