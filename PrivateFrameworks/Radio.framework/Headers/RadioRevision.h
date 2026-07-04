/* Runtime dump - RadioRevision
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioRevision : NSManagedObject

@property (nonatomic) long long revisionID;
@property (nonatomic) int revisionType;
@property (nonatomic) long long stationID;

- (long long)stationID;
- (long long)revisionID;
- (void)setStationID:(long long)arg0;
- (void)setRevisionID:(long long)arg0;
- (void)setRevisionType:(int)arg0;
- (int)revisionType;

@end
