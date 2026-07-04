/* Runtime dump - SFInternalAdvertisement
 * Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFInternalAdvertisement : NSObject
{
    NSData * _advertisementPayload;
    NSDictionary * _options;
}

@property (copy) NSData * advertisementPayload;
@property (copy) NSDictionary * options;

- (void)dealloc;
- (NSString *)description;
- (void)setOptions:(NSDictionary *)arg0;
- (NSDictionary *)options;
- (SFInternalAdvertisement *)initWithAdvertisementPayload:(NSData *)arg0 options:(NSDictionary *)arg1;
- (NSData *)advertisementPayload;
- (void)setAdvertisementPayload:(NSData *)arg0;

@end
