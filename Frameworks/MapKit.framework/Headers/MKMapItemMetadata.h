/* Runtime dump - MKMapItemMetadata
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMapItemMetadata : NSObject
{
    char _hasCheckedForVendorDeal;
    GEOBusiness * _business;
    <MKMapItemVendorDeal> * _deal;
    NSMutableDictionary * _imageCache;
}

@property (readonly, nonatomic) GEOBusiness * business;
@property (retain, nonatomic) <MKMapItemVendorDeal> * deal;
@property (nonatomic) char hasCheckedForVendorDeal;
@property (retain, nonatomic) NSMutableDictionary * imageCache;

- (char)hasCheckedForVendorDeal;
- (void)setDeal:(<MKMapItemVendorDeal> *)arg0;
- (void)setHasCheckedForVendorDeal:(char)arg0;
- (<MKMapItemVendorDeal> *)deal;
- (MKMapItemMetadata *)initWithBusiness:(GEOBusiness *)arg0;
- (NSMutableDictionary *)imageCache;
- (void)addImage:(UIImage *)arg0 forURL:(NSURL *)arg1;
- (NSURL *)imageForURL:(NSURL *)arg0;
- (void)setImageCache:(NSMutableDictionary *)arg0;
- (NSString *)description;
- (void).cxx_destruct;
- (GEOBusiness *)business;

@end
