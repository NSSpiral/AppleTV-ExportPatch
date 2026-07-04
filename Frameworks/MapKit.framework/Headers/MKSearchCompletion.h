/* Runtime dump - MKSearchCompletion
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKSearchCompletion : NSObject
{
    <GEOCompletionItem> * _item;
    NSString * _sourceID;
    NSString * _localizedSectionHeader;
}

@property (readonly, nonatomic) <GEOCompletionItem> * geoCompletionItem;
@property (readonly, nonatomic) NSArray * displayLines;
@property (readonly, nonatomic) MKMapItem * mapItem;
@property (copy, nonatomic) NSString * sourceID;
@property (copy, nonatomic) NSString * localizedSectionHeader;

- (NSString *)sourceID;
- (void)setSourceID:(NSString *)arg0;
- (MKSearchCompletion *)initWithGeoCompletionItem:(<GEOCompletionItem> *)arg0;
- (id)iconWithScale:(float)arg0;
- (id)copyStorage;
- (<GEOCompletionItem> *)geoCompletionItem;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void).cxx_destruct;
- (MKMapItem *)mapItem;
- (NSString *)localizedSectionHeader;
- (NSArray *)displayLines;
- (NSString *)calloutTitle;
- (id)queryLine;
- (id)highlightsForLine:(unsigned int)arg0;
- (char)getCoordinate:(struct ? *)arg0;
- (void)sendFeedback;
- (void)setLocalizedSectionHeader:(NSString *)arg0;

@end
