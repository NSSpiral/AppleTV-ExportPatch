/* Runtime dump - CKAssetHandle
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKAssetHandle : CKObject
{
    NSNumber * _itemID;
    NSString * _UUID;
    NSString * _path;
    NSNumber * _deviceID;
    NSNumber * _fileID;
    NSNumber * _generationID;
    NSNumber * _lastUsedTime;
}

@property (retain, nonatomic) NSNumber * itemID;
@property (retain, nonatomic) NSString * UUID;
@property (retain, nonatomic) NSString * path;
@property (retain, nonatomic) NSNumber * deviceID;
@property (retain, nonatomic) NSNumber * fileID;
@property (retain, nonatomic) NSNumber * generationID;
@property (retain, nonatomic) NSNumber * lastUsedTime;

+ (char)getDeviceID:(id *)arg0 fileID:(id *)arg1 generationID:(id *)arg2 forPath:(NSString *)arg3 error:(id *)arg4;

- (NSString *)description;
- (NSString *)path;
- (NSString *)UUID;
- (void)setPath:(NSString *)arg0;
- (void).cxx_destruct;
- (NSNumber *)itemID;
- (NSNumber *)deviceID;
- (NSNumber *)fileID;
- (NSNumber *)generationID;
- (void)setFileID:(NSNumber *)arg0;
- (void)setGenerationID:(NSNumber *)arg0;
- (NSString *)CKPropertiesDescription;
- (void)setDeviceID:(NSNumber *)arg0;
- (int)openFileDescriptorWithError:(id *)arg0;
- (void)setItemID:(NSNumber *)arg0;
- (CKAssetHandle *)initWithItemID:(NSNumber *)arg0 UUID:(NSString *)arg1 path:(NSString *)arg2;
- (void)setLastUsedTime:(NSNumber *)arg0;
- (NSNumber *)lastUsedTime;
- (void)setUUID:(NSSet *)arg0;

@end
