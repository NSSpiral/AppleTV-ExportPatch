/* Runtime dump - ATVRadioItem
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVDataItemAcquisitionDelegate;

@class ATVDataItemAcquisitionMonitor;
@interface ATVRadioItem : ATVDataItem <ATVDataItemAcquisitionDelegate>
{
    char _isPreview;
    RadioTrack * _radioTrack;
    ATVDataItemAcquisitionMonitor * _acquisitionMonitor;
    NSArray * _lookupOffers;
}

@property (retain, nonatomic) RadioTrack * radioTrack;
@property (nonatomic) char isPreview;
@property (retain, nonatomic) ATVDataItemAcquisitionMonitor * acquisitionMonitor;
@property (copy, nonatomic) NSArray * lookupOffers;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (ATVRadioItem *)initWithDataClient:(ATVDataClient *)arg0 radioTrack:(RadioTrack *)arg1 isPreview:(char)arg2;
- (ATVRadioItem *)initWithDataClient:(ATVDataClient *)arg0 radioTrack:(RadioTrack *)arg1;
- (RadioTrack *)radioTrack;
- (void)setIsPreview:(char)arg0;
- (NSURL *)_streamURL;
- (void)setAcquisitionMonitor:(ATVDataItemAcquisitionMonitor *)arg0;
- (NSArray *)lookupOffers;
- (id)_redownloadOffer;
- (id)_buyOffer;
- (id)_preferredOffer;
- (NSURL *)_streamCertificateURL;
- (NSURL *)_streamKeyURL;
- (NSObject *)_streamTrack;
- (void)setLookupOffers:(NSArray *)arg0;
- (void)acquisitionMonitor:(ATVDataItemAcquisitionMonitor *)arg0 didAcquireItemWithIdentifier:(NSNumber *)arg1;
- (void)setRadioTrack:(RadioTrack *)arg0;
- (ATVDataItemAcquisitionMonitor *)acquisitionMonitor;
- (NSSet *)_asset;
- (void)dealloc;
- (NSString *)description;
- (void).cxx_destruct;
- (NSObject *)concreteValueForProperty:(NSString *)arg0;
- (char)isPreview;
- (NSArray *)_offers;

@end
