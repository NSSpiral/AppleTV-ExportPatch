/* Runtime dump - ATVRadioStreamingItem
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVRadioItem, ATVRadioStation;
@interface ATVRadioStreamingItem : ATVDataItem
{
    RadioStation * _station;
    ATVRadioItem * _streamTrackItem;
    NSMutableDictionary * _periodicMetadata;
    RadioFetchMetadataRequest * _metadataRequest;
    SSLookupItem * _platformLookupItem;
}

@property (weak, nonatomic) RadioStation * station;
@property (retain, nonatomic) ATVRadioItem * streamTrackItem;
@property (retain, nonatomic) NSMutableDictionary * periodicMetadata;
@property (retain, nonatomic) RadioFetchMetadataRequest * metadataRequest;
@property (retain, nonatomic) SSLookupItem * platformLookupItem;

- (ATVRadioStreamingItem *)initWithDataClient:(ATVDataClient *)arg0 radioStation:(ATVRadioStation *)arg1 radioStreamTrack:(NSObject *)arg2;
- (void)updateValuesWithPeriodicMetadataSource:(NSMutableDictionary *)arg0;
- (id)_buyOffer;
- (NSObject *)_keyForPeriodicMetadataType:(unsigned int)arg0;
- (NSObject *)radioStreamTrack;
- (ATVRadioItem *)streamTrackItem;
- (NSObject *)_periodicMetadataTypesForDisplay;
- (NSMutableDictionary *)periodicMetadata;
- (void)_setValue:(NSValue *)arg0 forPeriodicMetadataType:(unsigned int)arg1;
- (RadioFetchMetadataRequest *)metadataRequest;
- (void)setMetadataRequest:(RadioFetchMetadataRequest *)arg0;
- (void)setPlatformLookupItem:(SSLookupItem *)arg0;
- (NSObject *)_valueForPeriodicMetadataType:(unsigned int)arg0;
- (void)_valuesDidChange;
- (SSLookupItem *)platformLookupItem;
- (id)_typeForOffer:(id)arg0;
- (char)_hasPeriodicMetadataForAnyDisplayProperties;
- (id)_platformExplicitValue;
- (id)_buyParamsForOffer:(id)arg0;
- (id)_formattedPriceForOffer:(id)arg0;
- (id)_priceForOffer:(id)arg0;
- (void)setStreamTrackItem:(ATVRadioItem *)arg0;
- (void)setPeriodicMetadata:(NSMutableDictionary *)arg0;
- (RadioStation *)station;
- (void).cxx_destruct;
- (NSObject *)concreteValueForProperty:(NSString *)arg0;
- (void)setStation:(RadioStation *)arg0;
- (NSArray *)_offers;

@end
