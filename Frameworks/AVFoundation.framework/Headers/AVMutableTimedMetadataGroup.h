/* Runtime dump - AVMutableTimedMetadataGroup
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMutableTimedMetadataGroup : AVTimedMetadataGroup
{
    AVMutableTimedMetadataGroupInternal * _mutablePriv;
}

@property struct ? timeRange;
@property (copy) NSArray * items;

- (AVMutableTimedMetadataGroup *)copyWithZone:(struct _NSZone *)arg0;
- (NSArray *)items;
- (void)setItems:(NSArray *)arg0;
- (struct ?)timeRange;
- (void)setTimeRange:(struct ?)arg0;

@end
