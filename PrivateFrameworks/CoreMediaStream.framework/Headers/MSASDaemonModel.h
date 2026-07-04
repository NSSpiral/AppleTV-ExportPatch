/* Runtime dump - MSASDaemonModel
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSASDaemonModel : MSASModelBase

+ (MSASDaemonModel *)defaultModel;

- (MSASDaemonModel *)init;
- (NSDate *)earliestNextActivityDate;
- (NSObject *)nextActivityDateByPersonID;
- (void)setNextActivityDate:(NSDate *)arg0 forPersonID:(NSObject *)arg1;
- (void)clearAllNextActivityDates;
- (char)dbQueueUpgradeFromDatabaseVersion:(int)arg0 currentVersion:(int)arg1;

@end
