/* Runtime dump - MSVArtworkServiceResizeRequestDestination
 * Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVArtworkServiceResizeRequestDestination : NSObject <NSSecureCoding>
{
    float _destinationCompressionQuality;
    NSURL * _destinationURL;
    struct CGSize _destinationSize;
}

@property (readonly, nonatomic) struct CGSize destinationSize;
@property (readonly, nonatomic) float destinationCompressionQuality;
@property (readonly, nonatomic) NSURL * destinationURL;

+ (char)supportsSecureCoding;
+ (NSObject *)destinationWithSize:(struct CGSize)arg0 compressionQuality:(float)arg1 url:(NSURL *)arg2;

- (NSURL *)destinationURL;
- (MSVArtworkServiceResizeRequestDestination *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (void).cxx_destruct;
- (struct CGSize)destinationSize;
- (float)destinationCompressionQuality;
- (MSVArtworkServiceResizeRequestDestination *)initWithDestinationSize:(struct CGSize)arg0 destinationCompressionQuality:(float)arg1 destinationURL:(NSURL *)arg2;

@end
