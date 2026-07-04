/* Runtime dump - CPLMasterChange
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLMasterChange : CPLItemChange
{
    NSArray * _resources;
    NSDate * _creationDate;
    NSString * _itemType;
    NSDate * _importDate;
    NSString * _filename;
    NSString * _importGroupIdentifier;
    NSString * _mediaMetaDataType;
    NSData * _mediaMetaData;
    int _originalOrientation;
    unsigned int _fullSizeJPEGSource;
}

@property (copy, nonatomic) NSArray * resources;
@property (copy, nonatomic) NSDate * creationDate;
@property (copy, nonatomic) NSString * itemType;
@property (readonly, nonatomic) char isImage;
@property (readonly, nonatomic) char isVideo;
@property (copy, nonatomic) NSDate * importDate;
@property (copy, nonatomic) NSString * filename;
@property (copy, nonatomic) NSString * importGroupIdentifier;
@property (copy, nonatomic) NSString * mediaMetaDataType;
@property (retain, nonatomic) NSData * mediaMetaData;
@property (nonatomic) int originalOrientation;
@property (nonatomic) unsigned int fullSizeJPEGSource;

- (CPLMasterChange *)init;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void).cxx_destruct;
- (char)isVideo;
- (NSString *)filename;
- (void)setFilename:(NSString *)arg0;
- (NSDate *)creationDate;
- (int)dequeueOrder;
- (NSObject *)propertiesForChangeType:(unsigned int)arg0;
- (NSString *)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg0;
- (void)prepareForStorage;
- (void)awakeFromStorage;
- (unsigned int)dataClassType;
- (NSString *)propertiesDescription;
- (char)isImage;
- (int)originalOrientation;
- (void)setResources:(NSArray *)arg0;
- (NSArray *)resources;
- (void)setOriginalOrientation:(int)arg0;
- (void)setCreationDate:(NSDate *)arg0;
- (void)setImportDate:(NSDate *)arg0;
- (void)setFullSizeJPEGSource:(unsigned int)arg0;
- (unsigned int)fullSizeJPEGSource;
- (NSDate *)importDate;
- (void)setItemType:(NSString *)arg0;
- (void)setMediaMetaData:(NSData *)arg0;
- (void)setMediaMetaDataType:(NSString *)arg0;
- (void)setImportGroupIdentifier:(NSString *)arg0;
- (char)supportsResources;
- (NSString *)itemType;
- (NSData *)mediaMetaData;
- (NSString *)mediaMetaDataType;
- (NSString *)importGroupIdentifier;

@end
