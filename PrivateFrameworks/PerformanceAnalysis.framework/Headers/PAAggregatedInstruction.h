/* Runtime dump - PAAggregatedInstruction
 * Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PAAggregatedInstruction : PACountedFrame
{
    NSMutableSet * _children;
    NSUUID * _binaryUuid;
    unsigned long long _offsetInBinary;
}

@property (retain) NSMutableSet * children;
@property (readonly) NSUUID * binaryUuid;
@property (readonly) unsigned long long offsetInBinary;
@property (readonly) char isKernel;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (int)compare:(NSObject *)arg0;
- (void)setChildren:(NSMutableSet *)arg0;
- (char)isKernel;
- (PAAggregatedInstruction *)initWithUUID:(NSString *)arg0 andOffset:(unsigned long long)arg1 isKernel:(char)arg2;
- (NSUUID *)binaryUuid;
- (unsigned long long)offsetInBinary;
- (NSMutableSet *)children;

@end
