/* Runtime dump - RadioGetTracksResponse
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioGetTracksResponse : NSObject
{
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableDictionary * _tracksByStationKey;
    NSDate * _expirationDate;
    RadioStation * _station;
    NSDictionary * _responseDictionary;
}

@property (readonly, copy, nonatomic) NSDictionary * dialogDictionary;
@property (retain, nonatomic) NSDate * expirationDate;
@property (readonly, nonatomic) unsigned long long globalVersion;
@property (readonly, nonatomic) char shouldIncrementSkipCount;
@property (retain, nonatomic) RadioStation * station;
@property (readonly, nonatomic) NSDate * skipDate;
@property (readonly, nonatomic) int tracklistActionType;
@property (readonly, copy, nonatomic) NSDictionary * responseDictionary;
@property (readonly, copy, nonatomic) NSArray * unusedKBSyncStrings;

- (RadioGetTracksResponse *)initWithResponseDictionary:(NSDictionary *)arg0;
- (RadioStation *)station;
- (RadioGetTracksResponse *)init;
- (void).cxx_destruct;
- (void)setExpirationDate:(NSDate *)arg0;
- (NSDictionary *)responseDictionary;
- (NSDate *)expirationDate;
- (unsigned long long)globalVersion;
- (NSObject *)tracksForStationID:(long long)arg0;
- (id)tracksForStationHash:(id)arg0;
- (NSString *)tracksForStationStringID:(NSString *)arg0;
- (NSString *)_tracksForStationKey:(NSString *)arg0;
- (char)shouldIncrementSkipCount;
- (NSDate *)skipDate;
- (int)tracklistActionType;
- (id)tracksForStation:(id)arg0;
- (NSArray *)unusedKBSyncStrings;
- (void)setStation:(RadioStation *)arg0;
- (NSDictionary *)dialogDictionary;

@end
