/* Runtime dump - AVTimedMetadataGroup
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVTimedMetadataGroup : NSObject <NSCopying>
{
    AVTimedMetadataGroupInternal * _priv;
}

@property (readonly) struct ? timeRange;
@property (readonly, copy) NSArray * items;

+ (void)initialize;

- (AVTimedMetadataGroup *)initWithItems:(NSArray *)arg0 timeRange:(struct ?)arg1;
- (AVTimedMetadataGroup *)initWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg0;
- (struct opaqueCMSampleBuffer *)_createSerializedRepresentationWithFormatDescription:(struct opaqueCMFormatDescription *)arg0 error:(id *)arg1;
- (struct opaqueCMFormatDescription *)copyFormatDescription;
- (void)dealloc;
- (AVTimedMetadataGroup *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (AVTimedMetadataGroup *)copyWithZone:(struct _NSZone *)arg0;
- (NSArray *)items;
- (AVTimedMetadataGroup *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (struct ?)timeRange;
- (void)finalize;

@end
