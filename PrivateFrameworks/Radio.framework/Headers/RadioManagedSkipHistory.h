/* Runtime dump - RadioManagedSkipHistory
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioManagedSkipHistory : NSManagedObject

@property (copy, nonatomic) NSString * skipIdentifier;
@property (copy, nonatomic) NSArray * skipTimestamps;
@property (copy, nonatomic) NSString * stationHash;
@property (nonatomic) long long stationID;

- (NSString *)stationHash;
- (long long)stationID;
- (NSString *)skipIdentifier;
- (void)setSkipIdentifier:(NSString *)arg0;
- (void)setSkipTimestamps:(NSArray *)arg0;
- (void)setStationID:(long long)arg0;
- (void)setStationHash:(NSString *)arg0;
- (NSArray *)skipTimestamps;

@end
