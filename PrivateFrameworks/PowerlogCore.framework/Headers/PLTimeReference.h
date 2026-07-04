/* Runtime dump - PLTimeReference
 * Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLTimeReference : NSObject
{
    <PLTimeReferenceManager> * _timeManager;
    int _timeReferenceType;
    NSString * _entryDefinitionKey;
    double _offset;
}

@property (nonatomic) double offset;
@property (retain) <PLTimeReferenceManager> * timeManager;
@property int timeReferenceType;
@property (retain) NSString * entryDefinitionKey;

+ (PLTimeReference *)defaultsKeyFromEntryDefinitionKey:(NSString *)arg0;

- (void)setOffset:(double)arg0;
- (double)offset;
- (void).cxx_destruct;
- (PLTimeReference *)initWithTimeManager:(<PLTimeReferenceManager> *)arg0 entryDefinitionKey:(NSString *)arg1 timeReferenceType:(int)arg2;
- (void)initializeOffsetWithEntry:(struct archive_entry *)arg0;
- (id)removeTimeOffsetFromReferenceTime:(id)arg0;
- (id)addTimeOffsetToMonotonicTime:(id)arg0;
- (int)timeReferenceType;
- (NSString *)entryDefinitionKey;
- (<PLTimeReferenceManager> *)timeManager;
- (void)writeOffsetToDefaults;
- (void)setTimeManager:(<PLTimeReferenceManager> *)arg0;
- (void)setTimeReferenceType:(int)arg0;
- (void)setEntryDefinitionKey:(NSString *)arg0;
- (struct ?)currentTime;

@end
