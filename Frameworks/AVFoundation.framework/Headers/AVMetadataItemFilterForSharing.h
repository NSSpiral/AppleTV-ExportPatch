/* Runtime dump - AVMetadataItemFilterForSharing
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMetadataItemFilterForSharing : AVMetadataItemFilter

+ (void)addKeySpace:(NSObject *)arg0 key:(NSString *)arg1 toWhitelistDictionary:(NSDictionary *)arg2;
+ (void)addIdentifier:(NSString *)arg0 toWhitelistDictionary:(NSDictionary *)arg1;

- (NSDictionary *)whitelist;

@end
