/* Runtime dump - CPLIDMapping
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLIDMapping : NSObject
{
    NSString * _cloudIdentifier;
    NSString * _localIdentifier;
    char _final;
}

@property (readonly, nonatomic) NSString * cloudIdentifier;
@property (readonly, nonatomic) NSString * localIdentifier;
@property (readonly, nonatomic) char final;

- (void).cxx_destruct;
- (char)isFinal;
- (NSString *)cloudIdentifier;
- (NSString *)localIdentifier;

@end
