/* Runtime dump - BRPhotoMediaCollection
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRBaseMediaCollection.h>

@class BRMediaCollectionType;
@interface BRPhotoMediaCollection : BRBaseMediaCollection
{
    NSString * _collectionName;
    NSString * _keyAssetID;
    NSString * _description;
    NSArray * _mediaAssets;
    NSString * _collectionID;
    BRMediaCollectionType * _collectionType;
    double _date;
    char _dateCalculated;
    NSDictionary * _collectionInfo;
}

@property (copy, nonatomic) NSDictionary * collectionInfo;

+ (NSDictionary *)collectionWithCollectionInfo:(NSDictionary *)arg0;

- (NSArray *)photoAssets;
- (NSArray *)mediaAssets;
- (BRMediaCollectionType *)collectionType;
- (BRPhotoMediaCollection *)initWithCollectionInfo:(NSDictionary *)arg0;
- (NSDictionary *)archivableCollectionInfo;
- (void)setMediaAssets:(NSArray *)arg0;
- (void)setKeyAssetID:(NSString *)arg0;
- (NSString *)keyAssetID;
- (void)_calculateMostRecentDate;
- (NSDictionary *)playbackOptions;
- (void)setCollectionType:(BRMediaCollectionType *)arg0;
- (void)setCollectionInfo:(NSDictionary *)arg0;
- (void)setDescription:(NSString *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)title;
- (double)date;
- (void)setDate:(double)arg0;
- (NSString *)collectionID;
- (void)setCollectionID:(NSString *)arg0;
- (NSDictionary *)collectionInfo;
- (char)isLibrary;
- (NSSet *)keyAsset;
- (void)setCollectionName:(NSString *)arg0;
- (NSString *)collectionName;

@end
