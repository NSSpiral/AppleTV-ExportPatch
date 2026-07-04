/* Runtime dump - PABinaryLocator
 * Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PABinaryLocator : NSObject
{
    NSMutableDictionary * _mappings;
    char _dirty;
    char _enabled;
}

@property char enabled;

+ (PABinaryLocator *)getRetainedSharedBinaryLocator;

- (PABinaryLocator *)retain;
- (void)release;
- (void)dealloc;
- (PABinaryLocator *)init;
- (void)setEnabled:(char)arg0;
- (char)enabled;
- (char)addURLForCSSymbolOwner:(struct _CSTypeRef)arg0;
- (NSURL *)urlForUUID:(id)arg0;
- (char)removeURLForUUID:(id)arg0;
- (PABinaryLocator *)initSharedBinaryLocator;
- (void)saveMappings;
- (NSMutableDictionary *)mappings;
- (char)addURL:(NSURL *)arg0 ForUUID:(NSUUID *)arg1;

@end
