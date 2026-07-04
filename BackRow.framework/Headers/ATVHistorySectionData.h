/* Runtime dump - ATVHistorySectionData
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVHistorySectionData : NSObject
{
    NSString * _name;
    NSArray * _tracks;
}

@property (copy, nonatomic) NSString * name;
@property (copy, nonatomic) NSArray * tracks;

- (ATVHistorySectionData *)initWithStationName:(NSString *)arg0;
- (void)addTrack:(NSObject *)arg0;
- (void)dealloc;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void).cxx_destruct;
- (void)setTracks:(NSArray *)arg0;
- (NSArray *)tracks;

@end
