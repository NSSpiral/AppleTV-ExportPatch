/* Runtime dump - AssetCollectionInfo
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface AssetCollectionInfo : NSObject <NSSecureCoding>
{
    char _isMine;
    char _hasVideoAsset;
    char _isDeletable;
    NSString * _GUID;
    NSString * _personID;
    NSDictionary * _metaData;
    NSNumber * _width;
    NSNumber * _height;
    NSDate * _timestamp;
}

@property (readonly, retain, nonatomic) NSString * GUID;
@property (readonly, retain, nonatomic) NSString * personID;
@property (readonly, nonatomic) char isMine;
@property (readonly, nonatomic) char hasVideoAsset;
@property (readonly, nonatomic) char isDeletable;
@property (readonly, retain, nonatomic) NSDictionary * metaData;
@property (readonly, retain, nonatomic) NSNumber * width;
@property (readonly, retain, nonatomic) NSNumber * height;
@property (readonly, retain, nonatomic) NSDate * timestamp;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (AssetCollectionInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (NSDate *)timestamp;
- (NSNumber *)width;
- (NSNumber *)height;
- (NSString *)personID;
- (NSString *)GUID;
- (char)isMine;
- (char)hasVideoAsset;
- (char)isDeletable;
- (AssetCollectionInfo *)initWithAssetCollection:(PHAssetCollection *)arg0;
- (NSDictionary *)metaData;

@end
