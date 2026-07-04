/* Runtime dump - PLSimpleAlbum
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSimpleAlbum : NSObject <PLAssetContainer>
{
    NSString * _title;
    NSOrderedSet * _assets;
    PLManagedAsset * _keyAsset;
    PLManagedAsset * _secondaryKeyAsset;
    PLManagedAsset * _tertiaryKeyAsset;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, retain, nonatomic) NSString * uuid;
@property (readonly, retain, nonatomic) NSString * title;
@property (readonly, copy, nonatomic) NSString * localizedTitle;
@property (readonly, retain, nonatomic) NSOrderedSet * assets;
@property (readonly, nonatomic) unsigned int approximateCount;
@property (readonly, nonatomic) unsigned int assetsCount;
@property (readonly, nonatomic) unsigned int photosCount;
@property (readonly, nonatomic) unsigned int videosCount;
@property (readonly, nonatomic) char isEmpty;
@property (retain, nonatomic) PLManagedAsset * keyAsset;
@property (retain, nonatomic) PLManagedAsset * secondaryKeyAsset;
@property (retain, nonatomic) PLManagedAsset * tertiaryKeyAsset;
@property (readonly, nonatomic) char canShowComments;
@property (readonly, nonatomic) char canShowAvalancheStacks;
@property (readonly, copy, nonatomic) NSArray * localizedLocationNames;
@property (readonly, retain, nonatomic) NSDate * startDate;
@property (readonly, retain, nonatomic) NSDate * endDate;

- (void)dealloc;
- (NSString *)title;
- (char)isEmpty;
- (NSString *)uuid;
- (NSString *)localizedTitle;
- (char)canPerformEditOperation:(unsigned int)arg0;
- (NSOrderedSet *)assets;
- (unsigned int)approximateCount;
- (unsigned int)assetsCount;
- (unsigned int)photosCount;
- (unsigned int)videosCount;
- (PLManagedAsset *)keyAsset;
- (void)setKeyAsset:(PLManagedAsset *)arg0;
- (PLManagedAsset *)secondaryKeyAsset;
- (void)setSecondaryKeyAsset:(PLManagedAsset *)arg0;
- (PLManagedAsset *)tertiaryKeyAsset;
- (void)setTertiaryKeyAsset:(PLManagedAsset *)arg0;
- (char)canShowComments;
- (char)canShowAvalancheStacks;
- (NSArray *)localizedLocationNames;
- (int)_countOfAssetType:(short)arg0;
- (PLSimpleAlbum *)initWithTitle:(NSString *)arg0 assets:(NSOrderedSet *)arg1;

@end
