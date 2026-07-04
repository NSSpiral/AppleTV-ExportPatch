/* Runtime dump - MPFilterInternal
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPFilterInternal : NSObject
{
    NSString * filterID;
    NSString * presetID;
}

@property (retain, nonatomic) NSString * filterID;
@property (retain, nonatomic) NSString * presetID;

- (void)dealloc;
- (NSString *)presetID;
- (void)setPresetID:(NSString *)arg0;
- (NSString *)filterID;
- (void)setFilterID:(NSString *)arg0;

@end
