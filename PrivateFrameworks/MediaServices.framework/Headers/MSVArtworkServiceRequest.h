/* Runtime dump - MSVArtworkServiceRequest
 * Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVArtworkServiceRequest : NSObject <NSSecureCoding>

@property (readonly, nonatomic) Class operationClass;

+ (char)supportsSecureCoding;

- (MSVArtworkServiceRequest *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (Class)operationClass;

@end
