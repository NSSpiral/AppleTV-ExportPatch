/* Runtime dump - AVMetadataItemFilter
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMetadataItemFilter : NSObject
{
    AVMetadataItemFilterInternal * _itemFilterInternal;
}

@property (readonly) NSDictionary * whitelist;

+ (AVMetadataItemFilter *)metadataItemFilterForSharing;

- (NSDictionary *)whitelist;

@end
