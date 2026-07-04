/* Runtime dump - SBKLogger
 * Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKLogger : NSObject
{
    NSString * _auxPath;
    NSFileHandle * _fileHandle;
    NSString * _filter;
    NSString * _runtimeOverride;
    int _pid;
    NSString * _procName;
    NSRegularExpression * _runtimeOverrideRegex;
    NSLock * _lock;
}

@property (copy) NSString * filter;
@property (copy) NSString * runtimeOverride;

+ (char)verboseLoggingEnabled;
+ (SBKLogger *)sharedLogger;
+ (char)debugLoggingEnabled;

- (void)performLoggingBlock:(id /* block */)arg0;
- (void)dealloc;
- (SBKLogger *)init;
- (void)setFilter:(NSString *)arg0;
- (void).cxx_destruct;
- (void)logString:(NSString *)arg0;
- (NSString *)filter;
- (char)shouldOverrideCondition:(id)arg0 file:(char *)arg1;
- (void)logFunction:(char *)arg0 format:(unsigned int)arg1;
- (void)logFile:(char *)arg0 lineNumber:(int)arg1 format:(unsigned int)arg2;
- (void)_updateSettingsFromPreferences:(id)arg0;
- (void)setRuntimeOverride:(NSString *)arg0;
- (NSString *)runtimeOverride;
- (void)setAuxPath:(NSString *)arg0;
- (NSString *)auxPath;
- (void)addRuntimeOverride:(id)arg0;
- (void)removeRuntimeOverride:(id)arg0;

@end
