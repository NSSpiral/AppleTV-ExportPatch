/* Runtime dump - CKPackageItem
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKPackageItem : NSObject
{
    int _packageIndex;
    NSURL * _fileURL;
    NSData * _signature;
    long _sectionIndex;
    NSNumber * _deviceID;
    NSNumber * _fileID;
    NSNumber * _generationID;
    NSData * _wrappedAssetKey;
    unsigned long long _itemID;
    long long _size;
    long long _offset;
}

@property (nonatomic) int packageIndex;
@property (retain, nonatomic) NSURL * fileURL;
@property (nonatomic) unsigned long long itemID;
@property (retain, nonatomic) NSData * signature;
@property (nonatomic) long long size;
@property (nonatomic) long long offset;
@property (nonatomic) long sectionIndex;
@property (retain, nonatomic) NSNumber * deviceID;
@property (retain, nonatomic) NSNumber * fileID;
@property (retain, nonatomic) NSNumber * generationID;
@property (retain, nonatomic) NSData * wrappedAssetKey;

- (long long)size;
- (NSString *)description;
- (void)setSize:(long long)arg0;
- (void)setOffset:(long long)arg0;
- (long long)offset;
- (void).cxx_destruct;
- (NSURL *)fileURL;
- (CKPackageItem *)initWithFileURL:(NSURL *)arg0;
- (unsigned long long)itemID;
- (NSNumber *)deviceID;
- (NSNumber *)fileID;
- (NSNumber *)generationID;
- (void)setSignature:(NSData *)arg0;
- (NSData *)signature;
- (void)setFileID:(NSNumber *)arg0;
- (void)setGenerationID:(NSNumber *)arg0;
- (CKPackageItem *)initWithDeviceID:(NSNumber *)arg0 fileID:(NSNumber *)arg1 generationID:(NSNumber *)arg2;
- (void)setPackageIndex:(int)arg0;
- (NSString *)CKPropertiesDescription;
- (void)setDeviceID:(NSNumber *)arg0;
- (int)packageIndex;
- (void)setItemID:(unsigned long long)arg0;
- (void)setWrappedAssetKey:(NSData *)arg0;
- (NSData *)wrappedAssetKey;
- (long)sectionIndex;
- (void)setSectionIndex:(long)arg0;
- (void)setFileURL:(NSURL *)arg0;

@end
