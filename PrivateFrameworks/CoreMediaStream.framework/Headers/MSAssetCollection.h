/* Runtime dump - MSAssetCollection
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSAssetCollection : NSObject <NSSecureCoding>
{
    NSString * _assetCollectionID;
    NSString * _ctag;
    MSAsset * _masterAsset;
    NSArray * _derivedAssets;
    NSString * _fileName;
    char _wasDeleted;
    NSDate * _serverUploadedDate;
    long long _initialFailureDate;
}

@property (retain, nonatomic) NSString * assetCollectionID;
@property (retain, nonatomic) NSString * ctag;
@property (retain, nonatomic) MSAsset * masterAsset;
@property (readonly, weak, nonatomic) NSData * masterAssetHash;
@property (retain, nonatomic) NSArray * derivedAssets;
@property (retain, nonatomic) NSString * fileName;
@property (nonatomic) char wasDeleted;
@property (retain, nonatomic) NSDate * serverUploadedDate;
@property (nonatomic) long long initialFailureDate;

+ (char)supportsSecureCoding;
+ (NSSet *)collectionWithMasterAsset:(MSAsset *)arg0 fileName:(NSString *)arg1 derivedAssets:(NSArray *)arg2;
+ (NSSet *)collectionWithMasterAsset:(MSAsset *)arg0 fileName:(NSString *)arg1;

- (NSString *)fileName;
- (MSAssetCollection *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (void).cxx_destruct;
- (NSString *)assetCollectionID;
- (MSAsset *)masterAsset;
- (NSArray *)derivedAssets;
- (long long)initialFailureDate;
- (void)setInitialFailureDate:(long long)arg0;
- (NSData *)masterAssetHash;
- (NSString *)ctag;
- (char)wasDeleted;
- (void)setCtag:(NSString *)arg0;
- (void)setDerivedAssets:(NSArray *)arg0;
- (void)setMasterAsset:(MSAsset *)arg0;
- (void)setWasDeleted:(char)arg0;
- (NSDate *)serverUploadedDate;
- (void)setServerUploadedDate:(NSDate *)arg0;
- (MSAssetCollection *)initWithMasterAsset:(MSAsset *)arg0 fileName:(NSString *)arg1 derivedAssets:(NSArray *)arg2;
- (void)setAssetCollectionID:(NSString *)arg0;
- (void)setFileName:(NSString *)arg0;

@end
