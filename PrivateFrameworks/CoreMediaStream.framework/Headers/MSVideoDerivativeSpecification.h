/* Runtime dump - MSVideoDerivativeSpecification
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSVideoDerivativeSpecification : NSObject
{
    char _useCellular;
    char _powerRequired;
    float _bitRate;
    NSString * _videoType;
    unsigned int _mediaAssetType;
}

@property (readonly, nonatomic) char useCellular;
@property (readonly, nonatomic) char powerRequired;
@property (readonly, nonatomic) float bitRate;
@property (readonly, nonatomic) NSString * videoType;
@property (readonly, nonatomic) unsigned int mediaAssetType;

+ (NSArray *)videoDerivativeSpecificationsWithDictionaryArray:(NSArray *)arg0;

- (MSVideoDerivativeSpecification *)initWithDictionary:(NSDictionary *)arg0;
- (char)useCellular;
- (char)powerRequired;
- (NSString *)videoType;
- (float)bitRate;
- (unsigned int)mediaAssetType;

@end
