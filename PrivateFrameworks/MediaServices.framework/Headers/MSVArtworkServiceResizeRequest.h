/* Runtime dump - MSVArtworkServiceResizeRequest
 * Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVArtworkServiceResizeRequest : MSVArtworkServiceRequest
{
    char _overwriteExistingDestinations;
    NSURL * _sourceURL;
    NSMutableArray * _resizeDestinations;
}

@property (copy, nonatomic) NSURL * sourceURL;
@property (nonatomic) char overwriteExistingDestinations;
@property (retain, nonatomic) NSMutableArray * resizeDestinations;

+ (char)supportsSecureCoding;

- (NSURL *)sourceURL;
- (void)setSourceURL:(NSURL *)arg0;
- (MSVArtworkServiceResizeRequest *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)debugDescription;
- (void).cxx_destruct;
- (char)overwriteExistingDestinations;
- (void)enumerateDestinationsUsingBlock:(id /* block */)arg0;
- (Class)operationClass;
- (NSMutableArray *)resizeDestinations;
- (void)setOverwriteExistingDestinations:(char)arg0;
- (void)setResizeDestinations:(NSMutableArray *)arg0;
- (MSVArtworkServiceResizeRequest *)initWithSourceURL:(NSURL *)arg0;
- (void)addDestinationWithSize:(struct CGSize)arg0 compressionQuality:(float)arg1 url:(NSURL *)arg2;

@end
