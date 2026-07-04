/* Runtime dump - PAProcessSymbolicationInfo
 * Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PAProcessSymbolicationInfo : NSObject
{
    NSArray * _imageInfos;
    NSUUID * _sharedCacheUUID;
    unsigned long long _sharedCacheOffset;
}

@property (readonly) NSArray * imageInfos;
@property (readonly) NSUUID * sharedCacheUUID;
@property (readonly) unsigned long long sharedCacheOffset;

- (void)dealloc;
- (NSArray *)imageInfos;
- (unsigned long long)sharedCacheOffset;
- (NSUUID *)sharedCacheUUID;
- (PAProcessSymbolicationInfo *)initWithImageInfos:(NSArray *)arg0 andSharedCacheUUID:(id)arg1 withOffset:(unsigned long long)arg2;

@end
