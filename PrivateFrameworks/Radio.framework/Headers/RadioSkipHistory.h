/* Runtime dump - RadioSkipHistory
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioSkipHistory : NSObject <RadioManagedObjectWrapperProtocol>
{
    char _databaseBacked;
    NSManagedObject * _managedObject;
    RadioModel * _model;
    NSString * _skipIdentifier;
    NSArray * _skipTimestamps;
    NSString * _stationHash;
    long long _stationID;
}

@property (copy, nonatomic) NSString * skipIdentifier;
@property (copy, nonatomic) NSString * stationHash;
@property (nonatomic) long long stationID;
@property (copy, nonatomic) NSArray * skipTimestamps;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) char databaseBacked;
@property (readonly, nonatomic) NSManagedObject * managedObject;
@property (readonly, nonatomic) RadioModel * model;

- (NSString *)stationHash;
- (long long)stationID;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (RadioModel *)model;
- (void).cxx_destruct;
- (NSManagedObject *)managedObject;
- (NSString *)skipIdentifier;
- (void)setSkipIdentifier:(NSString *)arg0;
- (void)setSkipTimestamps:(NSArray *)arg0;
- (void)setStationID:(long long)arg0;
- (void)setStationHash:(NSString *)arg0;
- (NSArray *)skipTimestamps;
- (void)_radioModelWasDeletedNotification:(NSNotification *)arg0;
- (char)isDatabaseBacked;
- (RadioSkipHistory *)initWithModel:(RadioModel *)arg0 managedObject:(NSManagedObject *)arg1;

@end
