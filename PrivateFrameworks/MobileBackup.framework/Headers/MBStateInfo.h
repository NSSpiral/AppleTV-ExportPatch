/* Runtime dump - MBStateInfo
 * Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBStateInfo : NSObject <NSCoding, NSCopying>
{
    int _state;
    float _progress;
    unsigned int _estimatedTimeRemaining;
    NSError * _error;
    NSDate * _date;
}

@property (readonly, nonatomic) int state;
@property (readonly, nonatomic) float progress;
@property (readonly, nonatomic) unsigned int estimatedTimeRemaining;
@property (readonly, nonatomic) NSError * error;
@property (readonly, nonatomic) NSDate * date;

- (void)dealloc;
- (MBStateInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (int)state;
- (void)setState:(int)arg0;
- (NSDate *)date;
- (MBStateInfo *)copyWithZone:(struct _NSZone *)arg0;
- (void)setProgress:(float)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (float)progress;
- (NSError *)error;
- (MBStateInfo *)initWithState:(int)arg0 progress:(float)arg1 estimatedTimeRemaining:(unsigned int)arg2 error:(NSError *)arg3;
- (void)setError:(NSError *)arg0;
- (unsigned int)estimatedTimeRemaining;
- (void)setEstimatedTimeRemaining:(unsigned int)arg0;
- (MBStateInfo *)initWithDictionaryRepresentation:(NSDictionary *)arg0;

@end
