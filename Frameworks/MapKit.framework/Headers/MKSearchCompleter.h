/* Runtime dump - MKSearchCompleter
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKSearchCompleter : NSObject
{
    NSString * _fragment;
    struct ? _boundingRegion;
    <MKSearchCompleterDelegate> * _delegate;
    id _context;
    NSString * _identifier;
    int _entriesType;
    int _listType;
    double _timeSinceLastInBoundingRegion;
    CLLocation * _deviceLocation;
}

@property (nonatomic) struct ? boundingRegion;
@property (copy, nonatomic) NSString * fragment;
@property (retain, nonatomic) CLLocation * deviceLocation;
@property (weak, nonatomic) <MKSearchCompleterDelegate> * delegate;
@property (readonly, nonatomic) NSArray * results;
@property (weak, nonatomic) id context;
@property (copy, nonatomic) NSString * identifier;
@property (nonatomic) int entriesType;
@property (nonatomic) int listType;
@property (nonatomic) double timeSinceLastInBoundingRegion;

+ (MKSearchCompleter *)alloc;

- (char)isSearching;
- (char)resultsAreCurrent;
- (struct ?)boundingRegion;
- (void)setBoundingRegion:(struct ?)arg0;
- (double)timeSinceLastInBoundingRegion;
- (void)setTimeSinceLastInBoundingRegion:(double)arg0;
- (void)cancel;
- (void)setDelegate:(<MKSearchCompleterDelegate> *)arg0;
- (MKSearchCompleter *)init;
- (<MKSearchCompleterDelegate> *)delegate;
- (NSString *)identifier;
- (NSString *)context;
- (void)setIdentifier:(NSString *)arg0;
- (void)setContext:(NSObject *)arg0;
- (NSArray *)results;
- (NSString *)fragment;
- (void).cxx_destruct;
- (void)retry;
- (void)setFragment:(NSString *)arg0;
- (void)setDeviceLocation:(CLLocation *)arg0;
- (CLLocation *)deviceLocation;
- (void)setListType:(int)arg0;
- (void)setEntriesType:(int)arg0;
- (int)listType;
- (int)entriesType;

@end
